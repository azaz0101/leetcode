/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *ptrA, *ptrB;
    int lenA,lenB;
    ptrA = headA;
    ptrB = headB;
    lenA = lenB = 0;
    while(ptrA != NULL){
        lenA++;
        ptrA = ptrA->next;
    }
    while(ptrB != NULL){
        lenB++;
        ptrB = ptrB->next;
    }
    ptrA = headA;
    ptrB = headB;
    if (lenA > lenB){
        for (int i=0;i<lenA-lenB;i++){
            ptrA = ptrA->next;
        }
    }
    else {
        for (int i=0;i<lenB-lenA;i++){
            ptrB = ptrB->next;
        }
    }
    while(ptrA != NULL && ptrB != NULL){
        if (ptrA == ptrB){
            return ptrA;
        }    
        ptrA = ptrA->next;
        ptrB = ptrB->next;
    }

    return NULL;
}