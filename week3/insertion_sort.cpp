//author:: PRANAY SAH
// 5th sem
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>    
int main()
{   
 int n;
 cin>>n;
 int *arr=new int[n];
 for(int i=0;i<n;i++)cin>>arr[i];
  int comparison=0;
for(int i=1;i<n;i++)//find best place for the element
{
  int key=arr[i];
  int j=i-1;//backtrack and find best place for key
  while(j>=0 and arr[j]>key)
  {
    arr[j+1]=arr[j];//swifting elements further
    j--;
    comparison++;
  }
  arr[j+1]=key;
}
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"comparisons->"<<comparison <<endl;
}