#include<iostream>
#include<vector>
using namespace std;


int binary_search(vector<int> arr,int key,int l,int h,int& cmp)
{
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        cmp++;
        if(arr[mid]==key) {return mid;}
        else if(arr[mid]<key) {l=mid+1;}
        else {h=mid-1;}
    }
    return -1;
}

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int size,key;
        cin>>size;
        vector<int> arr(size);
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        cin>>key;
        int cmp=0;
        int ans = binary_search(arr,key,0,size-1,cmp);
        if(ans!=-1)
        {
            cout<<"Present "<<cmp;
        }
        else
        {
            cout<<"Not present "<< cmp;
        }
    }
    return 0;
}