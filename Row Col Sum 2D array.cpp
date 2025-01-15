#include<iostream>
using namespace std;
int main()
{
	int rows,cols;
	cout<<"Enter number of rows: ";
	cin>>rows;
	cout<<"Enter number of columns: ";
	cin>>cols;
	int arr[rows][cols],rowSum[rows]={0},colSum[cols]={0};
	cout<<"Enter elements of the array:"<<endl;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
		    cout<<"Element for position "<<i+1<<" "<<j+1<<": ";
			cin>>arr[i][j];
			rowSum[i]+=arr[i][j];
			colSum[j]+=arr[i][j];
		}
			}
	cout<<"Row sums: ";
	for(int i=0;i<rows;i++)
	{
		cout<<rowSum[i]<<" ";
	}
	cout<<endl<<"Column sums: ";
	for(int j=0;j<cols;j++)
	{
	    cout<<colSum[j]<<" ";
	}
	cout<<endl;
	return 0;
}




