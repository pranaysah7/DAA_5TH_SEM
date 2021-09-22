
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vii vector<vecto<int>>
#define N 10000
#define mod 1000000007
// #define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int part(int *a,int l,int h){
    int i=l-1;
    for(int j=l;j<=h;j++){
        if(a[j]<=a[h]){
            i++;
            swap(a,i,j);
        }
    }
    return i;
}

void sort(int *a, int l,int h){
    if(l<h){
        int pi=part(a,l,h);
        sort(a,0,pi-1);
        sort(a,pi+1,h);
    }
}

bool solve(){
    int n;
    cin >> n;
    int *a= new int[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    sort(a,0,n-1);

    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            return true;
        }
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        if(solve()){
            cout << "YES"<<endl;
        }
        else cout << "NO"<<endl;
    }
    return 0;
}