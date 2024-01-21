//https://leetcode.com/problems/reverse-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev=NULL,*curr=head,*next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return(head);
}


/*  The issue with this one ???
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *nd=head;
    struct ListNode *ho=head;
    struct ListNode *hn=head->next;
    while(nd->next!=NULL){
        nd->next=hn->next;
        hn->next=ho;
        ho=hn;
        hn=nd->next;
    }
    return(ho);
}
*/
