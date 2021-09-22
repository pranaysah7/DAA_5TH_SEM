#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int *a1=new int[n];
    for(int i=0;i<n;i++){
        cin >> a1[i];
    }
    int m;
    cin >> m;
    int *a2=new int[m];
    for(int i=0;i<m;i++){
        cin >> a2[i];
    }

    int i=0,j=0;
    while(i<n && j<m){
        if(a1[i]==a2[j]){
            cout << a2[j]<<" ";
            i++;
            j++;
        }
        else if(a1[i]>a2[j]){
            j++;
        }
        else{
            i++;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}