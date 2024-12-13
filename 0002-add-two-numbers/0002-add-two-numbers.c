/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *head=NULL, *pre=NULL;
    int carry=0,cnt=0;
    while(l1 != NULL || l2 != NULL || carry){
        struct ListNode *now=(struct ListNode *)malloc(sizeof(struct ListNode));
        if (l1 != NULL && l2 != NULL){
            cnt = l1->val + l2->val + carry;
            l1 = l1->next;
            l2 = l2->next;
        }
        else if (l1 == NULL && l2 != NULL){
            cnt = l2->val + carry;
            l2 = l2->next;
        }
        else if (l2 == NULL && l1 != NULL){
            cnt = l1->val + carry;
            l1 = l1->next;
        }
        else {
            cnt = carry;
        }
        now->val = cnt % 10;
        now->next = NULL;
        if (pre != NULL){
            pre->next = now;
        }
        pre = now;
        if (cnt >= 10){
            carry = 1;
        }
        else {
            carry = 0;
        }
        if (head == NULL){
            head = now;
        }
    }

    return head;
}