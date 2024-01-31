//https://leetcode.com/problems/plus-one/description/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i=0,carry=0,sum;
    digits[digitsSize-1]+=1;
    for(i=digitsSize-1;i>=0;i--){
        sum=digits[i]+carry;
        if(sum/10!=0)
            digits[i]=sum%10;       
        else
            digits[i]=sum;
        carry=sum/10;
    }
    i=0;

    int k=0,LEN=digitsSize;
    if(carry!=0){
        LEN+=1;
        k=1;
    }
    int *FINAL=(int*)malloc(LEN*(sizeof(int)));
    FINAL[0]=carry;
    while(i<=digitsSize-1){
        FINAL[k]=digits[i];
        k++;i++;
    }
    *returnSize=LEN;
    return(FINAL);
}
