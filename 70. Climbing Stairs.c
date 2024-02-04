//https://leetcode.com/problems/climbing-stairs/description/
//https://math.stackexchange.com/questions/789804/how-many-distinct-ways-to-climb-stairs-in-1-or-2-steps-at-a-time

int climbStairs(int n){
    int prev=0,curr=1,sum=0;
    if(n==1)
        return(1);
    for(;n>1;n--){
        sum=0;
        curr=curr+prev;
        prev=curr-prev;
        sum=curr+prev;
    }
    return(sum);
}
