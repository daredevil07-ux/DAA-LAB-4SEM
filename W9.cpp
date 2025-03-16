#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool duplicates(vector<int>&arr)
{
    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size()-2;i++)
    {
        if(arr[i]==arr[i+1]) return true;
    }
    return false;
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

        bool ans = duplicates(arr);

        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}

