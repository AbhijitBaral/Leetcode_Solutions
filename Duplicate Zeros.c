//https://leetcode.com/problems/duplicate-zeros/
void shift(int *A,int index,int LEN){
    while(LEN-1>index){
        A[LEN-1]=A[LEN-2];
        LEN--;
    }
}

void duplicateZeros(int* arr, int arrSize) {
    int i=0;
    while(i<=arrSize-1){
        if(arr[i]==0){
            shift(arr,i,arrSize);
            i++;
        }
        i++;
    }
           
}
