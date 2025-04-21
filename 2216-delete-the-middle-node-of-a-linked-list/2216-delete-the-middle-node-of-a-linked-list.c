/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    if (head->next == NULL){
        return NULL;
    }
    struct ListNode *slow, *fast, *pre;
    slow = head;
    fast = head;
    pre = NULL;
    while(fast != NULL && fast->next != NULL){
        pre = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    pre->next = slow->next;
    free(slow);

    return head;
}