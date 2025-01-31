#include<iostream>
using namespace std;
int main()
{
	int matrix[3][3],min,max;
	bool isIdentity=true;
	cout<<"Enter the elements of the 3x3 matrix:";
	for(int i=0;i<3;i++)
	{
	    for(int j=0;j<3;j++)
		{
			cin>>matrix[i][j];
		}
	}
	min=matrix[0][0];
	max=matrix[0][0];
	for(int i=0;i<3;i++)
	{
	    for(int j=0;j<3;j++)
		{
		    if((i==j&&matrix[i][j]!=1)||(i!=j&&matrix[i][j]!=0))
			{
			    isIdentity=false;
				}
			if(matrix[i][j]<min)
			    min=matrix[i][j];
			if(matrix[i][j]>max)
			    max=matrix[i][j];
			}
			}
	if(isIdentity)
	{
	    cout<<"The matrix is an Identity Matrix."<<endl;
	}
	else
	{  
	    cout<<"The matrix is not an Identity Matrix."<<endl;
	}
	cout<<"Minimum value in the matrix: "<<min<<endl<<"Maximum value in the matrix: "<<max;
	return 0;
}
