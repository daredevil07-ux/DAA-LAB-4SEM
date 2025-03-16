#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sum_pair(vector<int>&arr,int key)
{
    int left=0;
    int right=arr.size()-1;
    sort(arr.begin(),arr.end());
    while(left<right)
    {
        int sum=arr[left]+arr[right];

        if(sum==key)
        {
            cout<<arr[left]<<" "<<arr[right];
            return;
        }
        else if(sum<key) 
        {
            left++;
        }
        else right--;
    }

    cout<<"No pair exists";
}

int main()
{
    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int key;
        cin>>key;
        sum_pair(arr,key);
    }
}