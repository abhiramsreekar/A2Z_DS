class Solution{
    public:
    long long pairWithMaxSum(long long arr[], long long N)
    {
        int i=0,j=0;
        long long maxi=0,sum=0;
        while(j<N){
            sum+=arr[j];
            if(j-i+1>=2){
                maxi=max(maxi,sum);
                sum-=arr[i++];
            }
            j++;
        }
        return maxi;
    }
};
