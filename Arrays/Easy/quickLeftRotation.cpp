class Solution{
	public:
	void leftRotate(int arr[], int k, int n) 
	{
	   k=k%n;
	   int temp[k+1];
	   for(int i=0;i<k;i++) temp[i]=arr[i];
	   for(int i=0;i<n-k;i++) arr[i]=arr[i+k];
	   for(int i=n-k;i<n;i++) arr[i]=temp[i-n+k];
	} 
};
