#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vii vector<vecto<int>>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int k;
    cin >> k;

    sort(a,a+n);

    int i=0;
    int j=n-1;
    while(i<=j){
        int sum=a[i]+a[j];
        if(sum==k){
            cout << a[i] <<","<<a[j]<<endl;
            return;
        }
        else if(sum<k){
            i++;
        }
        else{
            j--;
        }
    }
    cout << "No Such Element Exist"<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}