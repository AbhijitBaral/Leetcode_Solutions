//https://leetcode.com/problems/add-two-numbers/
//Problem related to creation of the linked list which would hold the summed nyumbers...
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int sum=0,carry=0,L1=0, L2=0;
    struct node ListNode *n1=l1, *n2=l2;
    while(n1!=NULL)
        L1++;
    while(n2!=NULL)
        L2++;
    int x=
    
    struct 
    while( ){
        sum=(n1->val) + (n2->val) +carry;
        if(sum/10){
            n=sum%10;
            carry=sum/10;
        }
        else{
            carry=0;
            n=sum;
        }
    }

}
