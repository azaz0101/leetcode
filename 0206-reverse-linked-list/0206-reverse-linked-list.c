/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *now, *pre, *next;
    now = head;
    pre = NULL;
    next = NULL;
    while(now != NULL){
        next = now->next;
        now->next = pre;
        pre = now;
        now = next;
    }
    head = pre;
    return head;
}