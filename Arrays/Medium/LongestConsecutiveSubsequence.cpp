class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      int cnt=1,ans=1;
      sort(arr,arr+N);
      for(int i=1;i<N;i++){
          if(arr[i]-arr[i-1]==1) cnt++;
          else if(arr[i]!=arr[i-1]) cnt=1;
          ans=max(ans,cnt);
      }
      return ans;
    }
};
