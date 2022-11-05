class Solution {
  public:
    long long Gcd(long long a,long long b){
        if(b==0) return a;
        return Gcd(b,a%b);
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long gcd=Gcd(A,B);
        long long lcm=(A*B)/gcd;
        vector<long long> v;
        v.push_back(lcm);
        v.push_back(gcd);
        return v;
    }
};
