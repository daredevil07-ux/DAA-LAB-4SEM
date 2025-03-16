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

void quicksort(vector<int>&arr,int left,int right)
{
    if(left<right)
    {
        int pi=partition(arr,left,right);
        quicksort(arr,left,pi-1);
        quicksort(arr,pi+1,right);
    }
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
        quicksort(arr,0,n-1);

        for(int j=0;j<n;j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
        cout<<"Comparison:"<<cmp<<endl;
        cout<<"Swaps:"<<swaps<<endl;
    }    

    return 0;
}