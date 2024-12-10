/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode *slow, *fast;
    slow = head;
    fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    struct ListNode *pre, *now, *tmp;
    pre = NULL;
    now = slow;
    while(now != NULL){
        tmp = now->next;
        now->next = pre;
        pre = now;
        now = tmp;
    }
    tmp = pre;
    while(head != NULL && tmp != NULL){
        if (head->val != tmp->val){
            return false;
        }
        head = head->next;
        tmp = tmp->next;
    }
    return true;
}