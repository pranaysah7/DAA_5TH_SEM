//author:: PRANAY SAH
// 5th sem
#include<bits/stdc++.h>
using namespace std;
#define ll long long
     int firstocc(int t,vector<int>&arr,int n)
     {
          int l=0,r=n-1;
          int ans=-1;
          while(l<=r)
          {
               int mid=l+(r-l)/2;
               if(arr[mid]==t)
               {
                    ans=mid;
                    r=mid-1;
               }
               else if(arr[mid]<t)
               {
                    l=mid+1;
               }
               else
                    r=mid-1;
          }
          return ans;
     }
        int lastocc(int t,vector<int>&arr,int n)
     {
          int l=0,r=n-1;
          int ans=-1;
          while(l<=r)
          {
               
               int mid=l+(r-l)/2;
               if(arr[mid]==t)
               {
                    ans=mid;
                    l=mid+1;
               }
               else if(arr[mid]<t)
               {
                    l=mid+1;
               }
               else
                    r=mid-1;
          }
          return ans;
     }
int main()
{
int n;
cin>>n;
vector<int>arr(n);
for(int &ae:arr)cin>>ae;
int target;
cin>>target;
int i=firstocc(target,arr,n);
if(i==-1)
{
     cout<<"NOT PRESENT\n";
}     
else
{
int j=lastocc(target,arr,n);
cout<<target<<"-";
cout<<j-i+1<<endl;
}
}