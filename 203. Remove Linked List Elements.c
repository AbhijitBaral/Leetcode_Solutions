//https://leetcode.com/problems/remove-linked-list-elements/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *n=head, *m=NULL;
    if(head==NULL)
        return(head);
    while(n!=NULL){
        if(head->val==val){
            head=head->next;
            n=head;
            continue;
        }    
        if(n->val!=val)
            m=n;
        else
            m->next=n->next;
        n=n->next;
    }
    return(head);
}
