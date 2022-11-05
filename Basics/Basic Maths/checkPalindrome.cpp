class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int rev=0,temp=n;
		    while(temp!=0){
		        rev=rev*10+temp%10;
		        temp/=10;
		    }
		    if(rev==n) return "Yes";
		    return "No";
		}
};
