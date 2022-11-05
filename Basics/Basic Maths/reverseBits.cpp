class Solution {
  public:
    long long reversedBits(long long X) {
        long long temp=X,bin=0;
        int s[32]={0};
        int cnt=0;
        while(temp!=0){
            int rem=temp%2;
            s[cnt]=rem;
            long long c=pow(10,cnt);
            bin+=rem*c;
            temp/=2;
            cnt++;
        }
        // for(int i=0;i<32;i++) cout<<s[i]<<" ";
        reverse(s,s+32);
        long long ans=0;
        for(int i=0;i<32;i++){
            ans+=s[i]*pow(2,i);
        }
        return ans;
    }
