#include<iostream>
#include<vector>

using namespace std;

void search(vector<int>arr,int key)
{
    int i;
    int cmp=0;
    bool found=false;
    for(int num:arr)
    {
        cmp++;
        if(num==key)
        {
            found=true;
            break;
        }
    }

    if(found)
    {
        cout<<"Present "<<cmp<<endl;
    }
    else
    {
        cout<<"Not present "<<cmp<<endl;
    }
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
        search(arr,key);
    }
    return 0;
}