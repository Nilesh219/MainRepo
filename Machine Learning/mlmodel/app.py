from flask import Flask, render_template, request
import pandas as pd
import numpy as np
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.metrics.pairwise import linear_kernel

app = Flask(__name__)

# Load the dataset and precompute necessary data
dataset = pd.read_csv("engineering_colleges.csv")
dataset["overview"] = np.nan

for i in dataset.index:
    temp = str(dataset['Campus Size'][i]) + str(dataset['City'][i]) + str(dataset['State'][i]) + str(dataset['Average Fees'][i])
    dataset['overview'][i] = temp

tfidf = TfidfVectorizer(stop_words="english")
dataset['overview'] = dataset['overview'].fillna("")
tfidf_matrix = tfidf.fit_transform(dataset['overview'])
cosine_sim = linear_kernel(tfidf_matrix, tfidf_matrix)

indices_clg = pd.Series(dataset.index, dataset['College Name']).drop_duplicates()
indices_overview = pd.Series(dataset.index, dataset['overview']).drop_duplicates()

# Function to get recommendations
def get_recommendation(preferences, cosine_sim=cosine_sim):
    ind = indices_overview[preferences]
    sim_scores = enumerate(cosine_sim[ind])
    sim_scores = sorted(sim_scores, key=lambda x: x[1], reverse=True)
    sim_scores = sim_scores[1:6]
    sim_index = [i[0] for i in sim_scores]
    return dataset["College Name"].iloc[sim_index], dataset["City"].iloc[sim_index]

# Define routes
@app.route('/')
def index():
    return render_template('index.html')

@app.route('/recommend', methods=['POST'])
def recommend():
    preferences = request.form['preferences']
    recommendations, cities = get_recommendation(preferences)
    return render_template('recommendations.html', recommendations=recommendations, cities=cities)

if __name__ == '__main__':
    app.run(debug=True)
