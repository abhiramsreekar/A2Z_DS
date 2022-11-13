//concept of binary search 
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int begin=0,end=n-1,mid;
        while(mid<=end){
            if(a[mid]==0){
                swap(a[begin],a[mid]);
                begin++;
                mid++;
            }
            else if(a[mid]==2){
                swap(a[mid],a[end]);
                end--;
            }
            else mid++;
        }
    }
    
};
