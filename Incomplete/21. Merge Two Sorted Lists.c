//https://leetcode.com/problems/merge-two-sorted-lists/

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *node1=list1, *node2=list2 ,*prev1;
    while(node1->next!=NULL){
        while(node2!=NULL){
            if(node2->val<=node1->next->val){
                temp=node1->next;
                node1->next=node2;
                list2=node2->next;
                node2->next=temp;
                node1=node2;     
            }
            prev2=node2;
            node2=node2->next;
        }
        node2=list2;
        node1=node1->next;
    }
}
