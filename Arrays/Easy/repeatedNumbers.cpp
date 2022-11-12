class Solution{
public:	
	int search(int arr[], int n){
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        if(count(v.begin(),v.end(),arr[i])==1) v.pop_back();
	        else v.push_back(arr[i]);
	    }
	    return v[0];
	}
};
