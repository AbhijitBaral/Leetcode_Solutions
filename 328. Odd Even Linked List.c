//https://leetcode.com/problems/odd-even-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if(head==NULL)
        return(head);
    struct ListNode *odd=head, *even=head->next, *he=head->next;
    while(even!=NULL && odd!=NULL && even->next!=NULL && odd->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=he;
    return(head);
}
