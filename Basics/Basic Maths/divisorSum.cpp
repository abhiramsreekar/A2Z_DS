class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long long s=0;
        for(int i=1;i<=N;i++){
            s+=(N/i)*i;
        }
        return s;
    }
};
