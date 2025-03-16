#include<iostream>
#include<vector>

using namespace std;

void duplicate_count(vector<char>str)
{
    vector<int> count (26,0);
    int max_count=0;
    char max_char='\0';
    bool dupl=false;
    for(char ch:str)
    {
        count[ch-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if(count[i]>1)
        {
            dupl=true;
            if(count[i]>max_count)
            {
                max_count=count[i];
                max_char='a'+i;
            }
        }
    }

    if(dupl)
    {
        cout<<max_char<<"-"<<max_count;
    }
    else
    {
        cout<<"No duplicates";
    }
}

int main()
{
    int T;
    cin>>T;

    for(int i=1;i<=T;i++)
    {
        int n;
        cin>>n;
        vector<char> str(n);
        for(int j=0;j<n;j++)
        {
            cin>>str[j];
        }

        duplicate_count(str);
    }
    return 0;
}