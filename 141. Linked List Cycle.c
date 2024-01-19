//https://leetcode.com/problems/linked-list-cycle/description/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode* fast,*slow;
    fast=head;
    slow=head;
    do{
        if(fast==NULL ||fast->next==NULL)
            return(false);
       /*slow++;
        fast+=2;*/
        slow=slow->next;
        fast=fast->next->next;
    }while(fast!=slow);
    return(true);
}
