#include<iostream>
#include<vector>
#include<cmath>
using namespace  std;


int binary_search(vector<int>arr,int key,int l,int h)
{
    while(l<=h)
    {
        int mid=(l+h)/2;

        if(arr[mid]==key) return mid;
        else if(arr[mid]<key) l=mid+1;
        else h=mid-1;
    }
    return -1;
}

void pairing(vector<int>&arr)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            int k=binary_search(arr,arr[i]+arr[j],j+1,arr.size()-1);
            if(k!=-1)
            {
                cout<<i+1<<","<<j+1<<","<<k+1<<endl;
                return;
            }
        }
    }
    cout<<"No sequence found"<<endl;
}

int main()
{
    int T;
    cin>>T;

    for(int i=1;i<=T;i++)
    {
        int n;
        cin>>n;
        vector<int> arr(n);

        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        pairing(arr);
    }
}