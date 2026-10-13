class Solution {
public:
    int mySqrt(int x) {
     int ans=0;
      for(int i=1;i<=x;i++){
           long long val=1LL*i*i;
          if(val<=(long long)x){
            ans=i;
          }
          else{
            break;
          }
      }

      return ans;
    }
};