class Solution{
  public:

    long long int floorSqrt(long long int n) 
    {
     long long int l=1, h=n, mid= l+ (h-l)/2, ans;
      while(l<=h){
          if(mid*mid<= n){
              ans=mid;
              l=mid+1;
          }
          else{
              h= mid-1;
          }
          mid= l+ (h-l)/2;
      }
      return ans;
    }
};