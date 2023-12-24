//https://leetcode.com/problems/check-if-n-and-its-double-exist/
bool checkIfExist(int* arr, int arrSize) {
    for(int i=0;i<=arrSize-1;i++)
        for(int j=0;j<=arrSize-1;j++)
            if(arr[i]==2*arr[j] && i!=j)
                return(1);
    return(0);
}
