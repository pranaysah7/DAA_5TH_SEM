//author:: PRANAY SAH
// 5th sem
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>    
int comparisons;
int selection_sort(int idx,int *arr,int n)
{
    int best_index=idx;
    for(int j=idx;j<n;j++)
    {
        if(arr[best_index]>arr[j])
        {
            comparisons++;
            best_index=j;
        }
    }
return best_index;  
}
int main()
{   
 int n;
 cin>>n;
 int *arr=new int[n];
 for(int i=0;i<n;i++)cin>>arr[i];
    int swaped=0;
for(int i=0;i<n;i++)
{
    int best_index=selection_sort(i,arr,n);
    if(i!=best_index)swap(arr[i],arr[best_index]),swaped++;
}
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"total_comparisons->"<<comparisons<<endl;
cout<<"total_swaps->"<<swaped<<endl;
}