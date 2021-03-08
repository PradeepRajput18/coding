
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
