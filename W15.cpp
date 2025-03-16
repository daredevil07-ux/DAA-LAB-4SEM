#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void find_common(vector<int>&arr1,vector<int>&arr2)
{
    vector<int> common;
    int i=0,j=0;

    int m=arr1.size();
    int n=arr2.size();

    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());

    while(i<m && j<n)
    {
        if(arr1[i]==arr2[j])
        {
            common.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else j++;
    }

    for(int num:common)
    {
        cout<<num<<" ";
    }
}

int main()
{
    int m;
    cin>>m;
    vector<int> arr1(m);
    for(int i=0;i<m;i++) cin>>arr1[i];
    int n;
    cin>>n;
    vector<int>arr2(n);
    for(int i=0;i<n;i++) cin>>arr2[i];
    find_common(arr1,arr2);
}