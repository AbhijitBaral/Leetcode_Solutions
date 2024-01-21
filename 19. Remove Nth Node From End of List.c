//https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* node=head;
    int l=1;
    while(node->next!=NULL){
        l++;
        node=node->next;
    }
    l=l-n;
    node=head;
    if(l==0){
        head=head->next;
        return(head);
    }
        if(l==1){
        head->next=head->next->next;
        return(head);   
    }
    if(n==0)
        return(head);

    while(l>1){
        node=node->next;
        l--;
    }

    if(n==1){
        node->next=NULL;
        return(head);   
    }
    node->next=node->next->next;
    return(head);
}
