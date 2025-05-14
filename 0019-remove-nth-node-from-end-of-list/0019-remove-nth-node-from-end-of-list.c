/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *fast, *slow, *pre;
    struct ListNode dummy;
    dummy.next = head;
    fast = slow = &dummy;
    pre = NULL;
    for (int i=0;i<n;i++){
        fast = fast->next;
    }
    while(fast != NULL){
        fast = fast->next;
        pre = slow;
        slow = slow->next;
    }
    pre->next = slow->next;
    free(slow);
    return dummy.next;
}