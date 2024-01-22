/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    struct ListNode* prev=NULL,*curr=head,*nxt=NULL;
    int lft=left;
    while(lft-1){
        prev=curr;
        curr=curr->next;
        lft--;
    }
    lft=right-left;
    while(lft){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
        lft--;
    }
    head->next=curr;

}
