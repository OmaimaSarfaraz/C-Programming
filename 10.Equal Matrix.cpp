#include<iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2;
    cout<<"Input Rows and Columns of the 1st matrix :";
    cin>>r1>>c1;
    cout<<"Input Rows and Columns of the 2nd matrix :";
    cin>>r2>>c2;
    if(r1!=r2 || c1!=c2)
	{
        cout<<"Matrices can't be compared as their dimensions are different.\n";
        return 1;
    }
    int mat1[r1][c1],mat2[r2][c2],sum[r1][c1];
    cout<<"Input elements in the first matrix :\n";
    for(int i=0;i<r1;i++)
	{
        for(int j=0;j<c1;j++)
		{
            cout<<"element - ["<<i+1<<"]["<<j+1<<"] : ";
            cin>>mat1[i][j];
        }
    }
    cout<<"Input elements in the second matrix :\n";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<"element - ["<<i+1<<"]["<<j+1<<"] : ";
            cin>>mat2[i][j];
        }
    }
    cout<<"The first matrix is :\n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"The second matrix is :\n";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<mat2[i][j]<<" ";
        }
        cout<<"\n";
    }
    bool equal=true;
    for(int i=0;i<r1;i++)
	{
        for(int j=0;j<c1;j++)
		{
            if(mat1[i][j]!=mat2[i][j]){
                equal=false;
                break;
            }
        }
    }
    if(equal)
        cout<<"The Matrices can be compared :\nTwo matrices are equal.\n";
    else
        cout<<"The Matrices can be compared :\nTwo matrices are not equal.\n";
    cout<<"Addition of matrices:\n";
    for(int i=0;i<r1;i++)
	{
        for(int j=0;j<c1;j++)
		{
            sum[i][j]=mat1[i][j]+mat2[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

