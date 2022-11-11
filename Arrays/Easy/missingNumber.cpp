int missingNumber(int arr[], int n)
{
    int s=n*(n+1)/2;
    int S=0;
    for(int i=0;i<n-1;i++) S+=arr[i];
    return s-S;
}
