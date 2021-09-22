#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vii vector<vecto<int>>
using namespace std;

void solve(){
    int n;
    cin >> n;
    char *a=new char[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int> count(26,0);

    for(int i=0;i<n;i++){
        count[a[i]-'a']++;
    }

    int max=0;
    int maxIndex=-1;
    for(int i=0;i<26;i++){
        if(count[i]>1 && count[i]>max){
            max=count[i];
            maxIndex=i;
        }
    }
    if(max>1){
        cout << char(maxIndex+97)<<"-"<<max<<endl;
        return;
    }
    cout << "No Duplicate Present"<<endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}