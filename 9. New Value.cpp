#include<iostream>
using namespace std;
int main()
{
    int size,pos,value;
    cout<<"Enter the number of elements in the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" elements:\n";
    for(int i=0;i<size;i++)
	{
        cout<<"Element - "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Enter the position to insert (1 to "<<size+1<<"): ";
    cin>>pos;
    if(pos<1||pos>size+1)
	{
        cout<<"Invalid position! Please enter a position between 1 and "<<size+1<<".\n";
        return 1;
    }
    cout<<"Enter the value to insert: ";
    cin>>value;
    for(int i=size;i>=pos;i--)
	{
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    size++;
    
	for(int i=0;i<size-1;i++)
	{
        for(int j=i+1;j<size;j++)
		{
            if(arr[i]<arr[j])
			{
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Array after insertion and sorting in descending order:\n";
    for(int i=0;i<size;i++)
	{
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}

