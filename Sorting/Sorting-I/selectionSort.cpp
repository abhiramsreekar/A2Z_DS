class Solution
{
    public:
    void selectionSort(int arr[], int n)
    {
       for(int i=0;i<n-1;i++){
           int mini=i;
           for(int j=i+1;j<n;j++)
           {
               if(arr[j]<arr[mini]){
                   mini=j;
               }
           }
           int temp=arr[i];
           arr[i]=arr[mini];
           arr[mini]=temp;
       }
    }
};
