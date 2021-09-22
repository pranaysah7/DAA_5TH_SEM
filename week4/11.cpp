//author:: PRANAY SAH
// 5th sem
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>    

void swap(int *a,int i,int j){
    int t=a[i];
    a[i]=a[j];
    a[j]=t;
}

int partition(int *a,int l,int h){
    int i=l-1;
    for(int j=l;j<=h;j++){
        if(a[j]<=a[h]){
            i++;
            swap(a,i,j);
        }
    }
    return i;
}

void QS(int *a,int l,int h){
    if(l<h){
        int pi=partition(a,l,h);
        QS(a,l,pi-1);
        QS(a,pi+1,h);
    }
}

void solve(){
    int n;
    cin >> n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    QS(a,0,n-1);
    for(int i=0;i<n;i++){
        cout << a[i]<<" ";
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