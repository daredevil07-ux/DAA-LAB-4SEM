#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

int cmp=0;
int swaps=0;

int randomPivot(int left,int right)
{
    return left+rand()%(right-left+1);
}

int partition(vector<int>&arr,int left,int right)
{
    int pivInd = randomPivot(left,right);
    int pivot = arr[pivInd];

    swap(arr[pivInd],arr[right]);
    swaps++;

    int i = left-1;

    for(int j=left;j<right;j++)
    {
        cmp++;
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
            swaps++;
        }
    }

    swap(arr[i+1],arr[right]);
    swaps++;
    return i+1;
}

int quicksort(vector<int>&arr,int left,int right,int k)
{
    if(left==right)
    {
        return arr[left];
    }

    int pi = partition(arr,left,right);
    if(pi==k-1) return arr[pi];
    if(pi>k-1) return quicksort(arr,left,pi-1,k);
    return quicksort(arr,pi+1,right,k);
}

int main()
{
    srand(time(0));
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
        swaps=0;
        int k;
        cin>>k;
        int ans = quicksort(arr,0,n-1,k);
        cout<<ans<<endl;
    }    

    return 0;
}