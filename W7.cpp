#include<iostream>
#include<vector>

using namespace std;

void insertion_sort(vector<int>&arr)
{
    int n=arr.size();
    int cmp=0;
    int shft=0;
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;

        while(j>=0)
        {
            cmp++;
            if(arr[j]>key)
            {
                arr[j+1]=arr[j];
                shft++;
                j--;
            }
            else break;
        }
        arr[j+1]=key;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Comparisons:"<<cmp<<endl;
    cout<<"Shifts:"<<shft<<endl;
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

        insertion_sort(arr);
    }

    return 0;
}