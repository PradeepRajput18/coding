
// using hash map


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> map;
        while(headA!=NULL){
            map[headA]++;
            headA=headA->next;
        }
        while(headB!=NULL){
            if(map[headB]>0){
                cout<<headB->val<<endl;
                return headB;
            }
            headB=headB->next;
        }
        return NULL;
        
    }
};


// using number difference

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    int lengthA = 0, lengthB = 0;
    for (ListNode *a = headA; a != NULL; a = a->next) {
        lengthA++;
    }
    for (ListNode *b = headB; b != NULL; b = b->next) {
        lengthB++;
    }

    ListNode *a = headA, *b = headB; 

    int difference = abs(lengthA - lengthB);
    if (lengthA > lengthB) {
        while (difference--) {
            a = a->next;
        }
    } else if (lengthA < lengthB) {
        while (difference--) {
            b = b->next;
        }
    }

    for (; a != NULL && b != NULL; a = a->next, b = b->next) {
        if (a == b) {
            return a;
        }
    }

    return NULL;
}


//  using ternary operator 

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *A=headA,*B=headB;
        while (headA != headB) { 
            headA = headA ? headA->next : B;
            headB = headB ? headB->next : A;
        }
        return headA;
        
    }
};
