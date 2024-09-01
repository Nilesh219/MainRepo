#include<iostream>
#include<algorithm>
// Quesition 6 Job Sequencing algorithm
using namespace std;

struct Job{
	char Jobid;
	int Deadline;
	int Profit;
};

bool comparison(Job a, Job b){

	return (a.Profit > b.Profit);
}


int Jobsquence(Job array[], int n){

	//It WIll sort array by using header fill #include<algorithm>
	// It sort the gvien array in bool by Decrasing Order
	sort(array, array + n, comparison);
	
	// the array sort in Decrasing order
	int Jobseq [n];
	bool slot [n];
	
	//for loop for the slot [n] become all the false array size 3
	for(int i = 0; i < n; i++)
	{
		slot[i] = false;
	}
	
	for(int i = 0; i < n; i++)
	{
		//Checking the minimum vlaue in deadline exapmle(2, 1) == 1 is samllest element
		// j = 
		for(int j = min(n,array[i].Deadline) - 1; j >= 0; j--)
		{
			//j = (5, 2-1) = (5, 1) = 1 it go to the index Number 1 to put profit
			if(slot[j] == false)
			{
				Jobseq[j] = i;
				slot[j] = true;
				break;
			}
		} 
	}
	
	//print the final Array 
	
	for(int i = 0; i < n; i++)
	{
		if(slot[i])
		{
			cout<<array[Jobseq[i]].Jobid<<" "<<endl;
		}
	}
	
	
}
// It will Compare the job a and job b min or smallest element

int main()
{
	Job array[] = { {'a', 2, 100},
		        	{'b', 1, 19},
		        	{'c', 2, 27},
		        	{'d', 1, 25},
		        	{'e', 3, 15}
		      	  };
		      
	int n = sizeof(array)/sizeof(array[0]); // Array size stoerd in x variable
	
	Jobsquence(array, n);
	return 0;
}



