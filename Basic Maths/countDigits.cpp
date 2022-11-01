class Solution{
public:
    int evenlyDivides(int N){
        int temp=N,cnt=0;
        while(temp>0)
        {
            int rem=temp%10;
            if(rem>0 && N%rem==0) cnt++;
            temp/=10;
        }
        return cnt;
    }
};
