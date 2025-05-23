/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *now,*pre;
    now = head;
    pre = NULL;
    while(now != NULL){
        if (now->val == val){
            if (now == head){
                head = head->next;
                free(now);
                now = head;
            }
            else {
                pre->next = now->next;
                free(now);
                now = pre->next;
            }
        }
        else {
            pre = now;
            now = now->next;
        }
    }
    return head;
}