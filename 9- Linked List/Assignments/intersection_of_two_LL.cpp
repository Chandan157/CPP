#include<bits/stdc++.h>
using namespace std;


//  * Definition for singly-linked list.
class ListNode {
    public:
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;

        while(a->next && b->next) {
            if(a == b) {
                return a;
            }

            a = a->next;
            b = b->next;
        }

        if(a->next == 0 && b->next == 0 && a != b)    return 0;

        if(a->next == 0) {
            //B LL is bigger
            // we need to find out how much bigger it is
            int blen = 0;
            while(b->next != 0) {
                blen++;
                b = b->next;
            }

            while(blen--) {
                headB = headB->next;
            }
        }
        else {
            //A LL is bigger
            // we need to find out how much bigger it is
            int alen = 0;
            while(a->next != 0) {
                alen++;
                a = a->next;
            }

            while(alen--) {
                headA = headA->next;
            }            
        }

        while(headA != headB) {
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};

int main()
{
    
    return 0;
}