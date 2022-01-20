#include<bits/stdc++.h>
using namespace std;
int lastOcc(int arr[], int n, int key){
    int l, h, mid, ans= -1;
    l=0; 
    h=n-1;
    mid= l+ ((h-1)/2);
    while(l<=h){
        if(arr[mid]==key){
            ans= mid;
            l= mid+1;

        }
        else if(arr[mid]> key){
            h= mid-1;

        }
        else{
            l= mid+1;
        }
        mid= l+ ((h-l)/2);
    }
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


int arr[10]= {1,2,3,3,3,3,3,4,5,5};
int key;
cin>>key;
cout<<lastOcc(arr, 10, key);
}