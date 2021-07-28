//author:: PRANAY SAH
// 5th sem
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int cnt=0;    
    int bs(int t,vector<int>&arr,int n)
     {
          int l=0,r=n-1;
          int ans=-1;
          while(l<=r)
          {
               int mid=l+(r-l)/2;
               cnt++;
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
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int &ae:arr)cin>>ae;
        if(bs(k,arr,n))
        {
            cout<<"present\n"<<" "<<cnt<<endl;
        }
        else
            cout<<"NOT present\n"<<" "cnt<<endl;
}