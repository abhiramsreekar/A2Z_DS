class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1]){
                return 0;
            }
        }
        return 1;
    }
};
