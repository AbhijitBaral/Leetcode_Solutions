//https://leetcode.com/problems/palindrome-number/
bool isPalindrome(int x){
long long int X=0;
int n=x;
for(x;x>0;x=x/10)
    X=X*10 + x%10;

if(n && n==X || n==0)
    return(true);
else
    return(false);
}
