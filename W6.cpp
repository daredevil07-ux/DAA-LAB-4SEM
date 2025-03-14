#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;


void diff_pair(vector<int> &arr,int key)
{
    int c=0;

    for(int i=0;i<arr.size();i++)
    {
        for(int j=i;j<arr.size();j++)
        {
            if(abs(arr[i]-arr[j])==key)
            {
                c++;
            }
        }
    }

    if(c==0) cout<<"No pairs exist"<<endl;
    else cout<<c<<endl;
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
        diff_pair(arr,key);
    }
}