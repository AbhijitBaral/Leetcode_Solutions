//https://leetcode.com/problems/palindrome-linked-list/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode *max=NULL, *node=head, *min=head;
    if(head->next==NULL)
        return(true);
    while(min!=NULL){
        while(node->next!=max)
            node=node->next;
        max=node;
        if(min->val!=max->val)
            return(false);
        min=min->next;
        node=min;
        if((min==max && max==node) || node->next->next==NULL)
            break;
    }
    return(true);
}
