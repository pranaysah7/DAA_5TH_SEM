//author:: PRANAY SAH
// 5th sem
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

int main()
{
    int n,t;
    cin>>n>>t;
    vi arr(n+1);
    for(int i=1;i<=n;i++)cin>>arr[i];
       sort(arr.begin(),arr.end());
    int ii=1;
    for(ii;ii<=n;ii<<=1)
    {
        cerr<<ii<<endl;
        if(arr[ii]==t)
        {
            cout<<"present";
            return 0;
        }
        else if(arr[ii]<t)
        {
            continue;
        }
        else
        {
         for(int jj=ii-1;jj>=ii>>1;jj--)
         {
            cerr<<jj<<endl;
            if(arr[jj]==t)
            {
            cout<<"present";
            return 0;       
            }
         }  
         cout<<"NOT PRESENT\n";
         return 0; 
        }
    }
    cout<<"NOT PRESENT\n";
}   