/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode* fast,*slow;
    fast=head;
    slow=head;
    
    do{
        if(fast==NULL ||fast->next==NULL)
            return(NULL);
        slow=slow->next;
        fast=fast->next->next;
    }while(fast!=slow);
    slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return(slow);

}
