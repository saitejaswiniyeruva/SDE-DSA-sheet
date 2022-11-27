//question: https://takeuforward.org/data-structure/sort-an-array-of-0s-1s-and-2s/


#include <bits/stdc++.h>
using namespace std;
void sort012(int *arr, int n)
{
   //   Write your code here
    int c=0,c1=0,c2=0;
    for(int i=0;i<n;i++) {
        if(arr[i]==0) c++;
        if(arr[i]==1) c1++;
        if(arr[i]==2) c2++;
    }
    c1=c1+c;
    c2=c1+c2+c;
    for(int i=0;i<n;i++) {
        if(i<c) arr[i]=0;
        if(i>=c && i<c1) arr[i]=1;
        if(i>=c1 && i<n) arr[i]=2;
    }
}
int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  sort012(arr,n);
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  return 0;
}
