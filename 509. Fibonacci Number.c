//https://leetcode.com/problems/fibonacci-number/description/

int fib(int n){
    int x=1,a=0;
    if(n==0)
        return(0);
    if(n==1)
        return(1);
    while(n>1)
	{
		x=x+a;
		a=x-a;
		n--;
	}
	return(x);
}
