#include <iostream>
#include <cstdio>

using namespace std;
int v[20][20];
max1(int a, int b)
{
    return (a>b )? a: b;
}
int main()
{
    int i, j, n, w[20], p[20], max;

    cout << "Enter the size of array = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter the array weight and profit = ";
        cin >> w[i] >> p[i];
    }
    cout<<"Enter the snapsack Capcity = ";
    cin>>max;
    for (i = 0; i <= n; i++)
        v[i][0] = 0;
    for (j = 0; j <= max; j++)
        v[0][j] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= max; j++)
        {
            if (w[i] > j)
            {
                v[i][j] = v[i - 1][j];
            }
            else
            {
                v[i][j] = max1(v[i - 1][j], v[i - 1][j - w[i]] + p[i]);
            }
        }
    cout << "Printing the Table.."<<endl;

        for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= max; j++)
        {
            std::cout << v[i][j] << "\t";
            //cout<<endl;
            //cout<<endl;
        }
    }
    cout << "The maximum profit will be " << v[n][max];
    return 0;
}