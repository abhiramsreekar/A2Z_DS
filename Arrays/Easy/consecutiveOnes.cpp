class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        int init = 0;
        int cnt = 0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i] == 0) c++;
            if(cnt > m)
            {
                if(arr[init] == 0)
                {
                    cnt--;
                }
                ++init;
            }
        }
        
        return n-init;
    }  
};
