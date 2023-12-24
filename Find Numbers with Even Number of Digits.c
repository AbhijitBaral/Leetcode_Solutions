//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
int findNumbers(int* nums, int numsSize) {
    int digits,count=0;
    for(int i=0;i<=numsSize-1;i++)
    {
        digits=0;
        for(int d=10;nums[i]>0;)
        {
            nums[i]/=d;
            digits++;
        }
        if(digits%2==0)
            count++;
    }
    return(count);
}
