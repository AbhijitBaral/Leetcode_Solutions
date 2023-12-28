//https://leetcode.com/problems/height-checker/description/
int heightChecker(int* heights, int heightsSize) {   
   int expected[heightsSize];
   for(int i=0;i<=heightsSize-1;i++)
        expected[i]=heights[i];
    for(int k=0;k<=heightsSize-1;k++)
        for(int j=1;j<heightsSize;j++)
            if(expected[j]<expected[j-1]){
                expected[j-1]=expected[j-1]+expected[j];
                expected[j]=expected[j-1]-expected[j];
                expected[j-1]=expected[j-1]-expected[j];
            }
    int count=0;
    for(int i=0;i<=heightsSize-1;i++)
        if(heights[i]!=expected[i])
            count++;
    return(count);
}
