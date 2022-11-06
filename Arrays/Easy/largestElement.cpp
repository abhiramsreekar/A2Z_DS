//Using the max_element function of vector

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        return *max_element(arr.begin(),arr.end());
    }
};

//Approach without using in-built methods

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int m=arr[0];
        for(int i=0;i<n;i++)
        {
            if(m<arr[i]) m=arr[i];
        }
        return m;
    }
};
