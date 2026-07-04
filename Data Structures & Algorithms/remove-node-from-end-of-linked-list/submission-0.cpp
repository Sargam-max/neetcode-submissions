/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr){
            return nullptr;
        }
        int len=0;
        ListNode*curr=head;
        while(curr!=nullptr){
            curr=curr->next;
            len++;


        }

        int k=len-n+1;

        if(k==1){
            head=head->next;
            return head;
        }

        ListNode*temp=head;
        for(int i=1;i<k-1;i++){
            temp=temp->next;



        }
        if(temp!=nullptr && temp->next!=nullptr){
            temp->next=temp->next->next;
        } 


        return head;



        
    }
};
