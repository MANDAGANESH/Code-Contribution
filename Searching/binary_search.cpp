#include<bits/stdc++.h>
using namespace std;

int main()
{
    int array_size;
    cout<<"Enter the size of the array : ";
    cin>>array_size;
    int array[array_size];
    cout<<"Enter the elements of the array in sorted order"<<endl;
    for(int i=0;i<array_size;i++)
    {
        cin>>array[i];
    }
    int low=0,high=array_size-1,mid,key,key_location=-1;
    cout<<"Enter the element to be searched : ";
    cin>>key;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(array[mid]==key)
        {
            key_location=mid+1;
            break;
        }
        else if(array[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(key_location!=-1)
    {
        cout<<"Element found at location : "<<key_location<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}