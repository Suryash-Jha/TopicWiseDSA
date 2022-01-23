
class Solution{
  public:
int binarySearch(int arr[], int n, int x){
      int l=0, h=n-1, mid= l+ (h-l)/2;
      int ans=-1;
      while(l<=h){
          if(arr[mid]<= x){
              ans= mid;
              l=mid+1;
          }
          else if(arr[mid]> x){
              h= mid-1;
          }
          // else{
          //    l= mid+1; 
          // }
          mid= l+ (h-l)/2;
      }
      return ans;
  }
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
    //Your code goes here
    vector<int> v;
    sort(arr2, arr2+n);
    for(int i=0; i<m; i++){
        int ind= binarySearch(arr2, n, arr1[i]);
        v.push_back(ind+1);
    }
    return v;
    }
};
