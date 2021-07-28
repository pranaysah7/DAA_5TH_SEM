//author:: PRANAY SAH
// 5th sem
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int bs(int l,int r,vi &arr,int ff)
{
    int ans=-1;
    while(l<=r)
    {
       int mid=l+(r-l)/2;
       if(arr[mid]==ff)
       return mid;
       else if(arr[mid]<ff) 
       {
        l=mid+1;
       }
        else r=mid-1; 
    }
    return ans;
}
int main()
{
    int n,t;
    cin>>n;
    // i+j=k
    vi arr(n+1);
    for(int i=1;i<=n;i++)cin>>arr[i];
       sort(arr.begin(),arr.end());
    for(int k=n;k>=1;k--)
    {
        for(int i=1;i<=n;i++)
        {
            int find=abs(arr[k]-arr[i]);
            int idx=bs(i+1,n,arr,find);
            if(idx==-1)
                continue;
            else{
                cout<<i<<" "<<idx<<" "<<k<<endl;
                return 0;
            }
        }
    }
    cout<<"NO SEQUENCE FOUND\n";
}   