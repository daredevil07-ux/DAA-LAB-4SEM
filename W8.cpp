#include<iostream>
#include<vector>

using namespace std;

void selection_sort(vector<int>&arr)
{
    int cmp=0;
    int swaps=0;

    for(int i=0;i<arr.size();i++)
    {
        int min_ind=i;
        for(int j=i+1;j<arr.size();j++)
        {
            cmp++;
            if(arr[j]<arr[min_ind])
            {
                min_ind=j;
            }
        }

        if(min_ind!=i)
        {
            swap(arr[min_ind],arr[i]);
            swaps++;
        }
    }

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Comparison:"<<cmp<<endl;
    cout<<"Swaps:"<<swaps<<endl;
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

        selection_sort(arr);
    }

    return 0;
}