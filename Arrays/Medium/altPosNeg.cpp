class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int> pos,neg;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0) neg.push_back(arr[i]);
	        else pos.push_back(arr[i]);
	    }
	    int a=0,b=0,flag=1;
	    for(int i=0;i<n;i++){
	        if(flag&&a<pos.size()){
	            arr[i]=pos[a++];
	            if(b<neg.size())flag=0;
	        }
	        else if(b<neg.size()){
	            arr[i]=neg[b++];
	            if(a<pos.size()) flag=1;
	        }
	    }
	}
};
