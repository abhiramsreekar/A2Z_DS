class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int temp=n,sum=0;
        while(temp>0)
        {
            sum+=pow(temp%10,3);
            temp/=10;
        }
        if(sum==n) return "Yes";
        return "No";
    }
};
