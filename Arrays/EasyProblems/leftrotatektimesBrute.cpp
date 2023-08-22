#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void leftRotateKTimes(int arr[], int n, int k)
{
    k=k%n;

    int temp[k];
    for(int i=0; i<k; i++)
    {
        temp[i] = arr[i];
    }

    for(int i=k; i<n; i++)
    {
        arr[i-k] = arr[i];
    }

    for(int i=k+1; i<n; i++)
    {
        arr[i] = temp[i-(n-k)];
    }
}

int main()
{
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int *ptr = (int*) malloc(sizeof(int) * n);

    cout<<"Enter rotataion value : ";
    int k;
    cin>>k;

    cout<<"Enter array elements : ";
    for(int i=0; i<n; i++)
    {
        cin>>ptr[i];
    }

    cout<<"Original Array : ";
    for(int i=0; i<n; i++)
        cout<<ptr[i]<<" ";
        
        
    cout<<endl<<"Left Rotated Array "<<k<<" times : ";
    leftRotateKTimes(ptr, n, k);
    for(int i=0; i<n; i++)
        cout<<ptr[i]<<" ";

    return 0;
}
