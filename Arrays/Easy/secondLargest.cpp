class Solution{
public:	
	int print2largest(int arr[], int n) {
	    if(n<2) return -1;
	    int first=INT_MIN,second=INT_MIN;
	    for(int i=0;i<n;i++){
	        if(arr[i]>first && arr[i]>second){
	            second=first;
	            first=arr[i];
	        }
	        else if(arr[i]!=first && arr[i]>second){
	            second=arr[i];
	        }
	    }
	    if(second==INT_MIN) return -1;
	    return second;
	}
};
