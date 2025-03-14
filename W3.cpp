#include<iostream>
#include<vector>
#include<cmath>
using namespace  std;


void jump_search(vector<int>& arr,int key)
{
    int base=0;
    int exp=1;
    int cmp=1;
    int n=arr.size();

    while(base<n)
    {
        if(arr[base]==key)
        {
            cout<<"Present "<<cmp;
            return;
        }
        else if(arr[base]>key)
        {
            int t_base=base/2;
            for(int i=t_base;i<=base;i++)
            {
                cout<<"IN"<<endl;
                if(arr[i]==key)
                {
                    cout<<"Present "<<cmp;
                    return;
                }
                cmp++;
            }
        }

        base = pow(2,exp);
        exp++;
        cmp++;

    }
    cout<<"Not present "<<cmp;
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
        jump_search(arr,key);
    }
}