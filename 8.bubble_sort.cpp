#include<iostream>
using namespace std;

void BubbleSort(int data[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            if(data[j] > data[j+1])
            {
                int temp;
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
    
    
}

int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int data[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    cout<<"\n  DATA : ";
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
    BubbleSort(data,n);
    cout<<"\nSorted Data : ";
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }

    return 0;
}