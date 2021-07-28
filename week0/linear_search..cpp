//author:: PRANAY SAH
// 5th sem
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>    
int main()
{
    int n,k;
    cin>>n>>k;
    int comp=0;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            cout<<"present\t"<<comp+1<<endl;
            return 0;
        }
        comp++;
    }
    cout<<"NOT PRESENT\n"<<comp<<endl;
}