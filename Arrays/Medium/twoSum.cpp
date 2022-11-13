class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        vector<pair<int,int>> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<M;i++) mp[B[i]]=i;
        for(int i=0;i<N;i++){
            int comp=X-A[i];
            if(mp.count(comp)!=0){
                ans.push_back(make_pair(A[i],comp));
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
