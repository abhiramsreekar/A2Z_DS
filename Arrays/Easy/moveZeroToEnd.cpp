class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int last=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]!=0){
	            swap(arr[i],arr[last]);
	            last++;
	        }
	    }
	}
};
