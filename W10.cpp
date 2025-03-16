#include<iostream>
#include<vector>

using namespace std;

int cmp=0;
int inv=0;

void merge(vector<int> &arr,int l,int h,int mid)
{
    int j,i=0;
    vector<int> temp(h-l+1);
    int left=l;
    int right=mid+1;
    

    while(left<=mid && right<=h)
    {
        cmp++;
        if(arr[left]<=arr[right])
        {
            temp[i++]=arr[left++];
        }
        else
        {
            temp[i++]=arr[right++];
            inv+=mid-left;
        }
    }

    while(left<=mid)
    {
        temp[i++]=arr[left++];
    }
    while(right<=h)
    {
        temp[i++]=arr[right++];
    }

    for(j=l;j<=h;j++)
    {
        arr[j]=temp[j-l];
    }
}

void merge_sort(vector<int>&arr,int l,int h)
{
    if(l==h) return;
    int mid=(l+h)/2;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,h);
    merge(arr,l,h,mid);
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
        cmp=0;
        inv=0;
        merge_sort(arr,0,n-1);

        for(int j=0;j<n;j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
        cout<<"Comparison:"<<cmp<<endl;
        cout<<"Inversions:"<<inv<<endl;
    }    

    return 0;
}