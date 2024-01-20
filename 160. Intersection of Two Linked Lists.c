//https://leetcode.com/problems/intersection-of-two-linked-lists/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int cnt1=1,cnt2=1;
    struct ListNode *nA=headA,*nB=headB;
    while(nA!=NULL){
        nA=nA->next;
        cnt1++;
    }
    while(nB!=NULL){
        nB=nB->next;
        cnt2++;
    }
    printf("%d %d",cnt1,cnt2);
    int cnt=abs(cnt1-cnt2);
    while(cnt!=0){
        if(cnt1>cnt2)
            headA=headA->next;
        else
            headB=headB->next;
        cnt--;
    }
    while(headA!=NULL){
        if(headA==headB)
            return(headA);
        headA=headA->next;
        headB=headB->next;
    }
    return(NULL);
}
