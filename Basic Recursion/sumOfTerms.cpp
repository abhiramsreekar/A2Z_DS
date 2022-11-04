//for some reason doesn't work for bigger numbers
class Solution {
  public:
    long long sumOfSeries(long long N) {
        else if(N==1) return 1;
        return sumOfSeries(N-1)+pow(N,3);
    }
};

//alternative solution (not recursion)
class Solution {
  public:
    long long sumOfSeries(long long n) {
        long long a=n*(n+1)/2;
        return a*a;
    }
};
