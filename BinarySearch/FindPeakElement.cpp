class Solution {
public:



int binarySearch(vector<int>& arr, int n){
      int l=0, h=n-1, mid= l+ (h-l)/2;
      if(arr[n-1]>=arr[n-2]){
          return n-1;
      }
    //   int ans;
      while(l<=h){
          
          if(arr[mid]<arr[mid+1]){
              l=mid+1;
          }
          else if(arr[mid]>arr[mid+1]){
              h= mid-1;
          }
          mid= l+ (h-l)/2;
        //   cout<<"Index of highest: "<<mid<<endl;
      }
      
      return mid;
  }
    int findPeakElement(vector<int>& a) 
    {
        
        // if(v.size==10 && )
        int ind= binarySearch(a, a.size());
        return a[ind];
        // Code here.
    }
};
