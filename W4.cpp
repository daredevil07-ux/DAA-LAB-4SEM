#include<iostream>
#include<vector>
#include<cmath>
using namespace  std;


void binary_search(vector<int>&arr,int l,int h,int key)
{
    int cp=0;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==key)
        {
            cp++;
            int lb=mid-1;
            int ub=mid+1;
            while(arr[lb]==key && lb>=0)
            {
                cp++;
                lb--;
            }
            while(arr[ub]==key && ub<arr.size())
            {
                cp++;
                ub++;
            }

            cout<<"Present "<<cp;
            return;
        }
        else if(arr[mid]<key) {l=mid+1;}
        else{ h=mid-1;}
    }
    cout<<"Not present";
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
        int key;
        cin>>key;
        binary_search(arr,0,n-1,key);
    }
}