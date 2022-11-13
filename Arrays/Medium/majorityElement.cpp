class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int n)
    {
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) mp[a[i]]++;
        for(auto x:mp)
        {
            if(x.second>(n/2)) return x.first;
        }
        return -1;
    }
};
