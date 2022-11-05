class Solution
{
public:
    long long fact(long long n){
        if(n==1) return 1;
        return n*fact(n-1);
    }
    vector<long long> factorialNumbers(long long N)
    {
        vector<long long> ans;
        int i=0;
        while(true){
            i++;
            if(fact(i)<=N) ans.push_back(fact(i));
            else break;
        }
        return ans;
    }
};
