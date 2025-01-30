#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Input the number of elements to be stored in the first array: ";
	cin>>size;
	
	int arr1[size],arr2[size],merged[2*size],mergedSize=0,Count=0;
	
	cout<<"Input "<<size<<" elements in the array: "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"Element - "<<i+1<<" : ";
		cin>>arr1[i];
		merged[mergedSize++] = arr1[i];

	}
	cout<<"Input "<<size<<" elements in the second array: "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"Element - "<<i+1<<" : ";
		cin>>arr2[i];
	    merged[mergedSize++] = arr2[i];
	}
	for(int i=0;i<mergedSize-1;i++)
	{
        for(int j=i+1;j<mergedSize;j++)
		{
            if(merged[i]<merged[j])
			{
                int temp=merged[i];
                merged[i]=merged[j];
                merged[j]=temp;
            }
        }
    }
    cout<<"The merged array in descending order is: "<<endl;
    for(int i=0;i<mergedSize;i++)
	{
        cout<<merged[i]<<" ";
        if (i>0 && merged[i]==merged[i-1])
		{
            Count++;
        }
    }
    cout<<endl;
    cout<<"Total number of duplicate elements found in the array is: "<<Count<<endl;
	return 0;
}
