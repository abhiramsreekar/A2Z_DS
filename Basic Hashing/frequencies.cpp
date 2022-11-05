//used a map hence occupied O(n) space

class Solution{
    public:
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        map<int,int> mp;
        for(int i=0;i<N;i++){
            mp[arr[i]]++;
            arr[i]=0;
        }
        for(int i=0;i<N;i++){
            arr[i]=mp[i+1];
        }
    }
};
