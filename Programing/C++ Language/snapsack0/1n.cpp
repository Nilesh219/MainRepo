#include <iostream>

using namespace std;

// Function to solve the 0/1 Knapsack problem
int knapsack(int W, int weights[], int values[], int n) {
    int dp[n + 1][W + 1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (weights[i - 1] <= w) {
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][W];
}

int main() {
    int W = 10;  // Knapsack capacity

    int weights[] = {2, 3, 4, 5};  // Item weights
    int values[] = {3, 4, 5, 6};   // Item values

    int n = sizeof(weights) / sizeof(weights[0]);

    int maxProfit = knapsack(W, weights, values, n);

    cout << "Maximum profit: " << maxProfit << endl;

    return 0;
}
