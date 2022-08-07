#include<bits/stdc++.h>
using namespace std;

int containsduplicate(int num[],int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=i+1;i<=n;j++)
        {
            if(num[j]==num[i])
            {
                cout<<"True"<<endl;
            }
        }
    }
    cout<<"False"<<endl;
}

int main()
{
    int n=4;
    int num[n]={1,2,2,1};
    containsduplicate(num,n);
    return 0;
}

// Time complexity O(n^2)
// space complexity O(n).
// This program will check for duplicate elements in an array.
