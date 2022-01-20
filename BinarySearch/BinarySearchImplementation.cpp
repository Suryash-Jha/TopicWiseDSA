#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int key){
int l=0, h=n-1, mid= l+ ((h-l)/2);
while(l<=h){
    if(arr[mid]== key){
     return mid;
    }
    else if(arr[mid]<key){
     l= mid+1;
    }
    else{
     h=mid-1;
    }
    mid= l+ ((h-l)/2);
}
return -1;
}
int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int k;
cin>>k;

int arr[5]= {2, 3, 4, 6, 7};
cout<<binarySearch(arr, 5, k);
}