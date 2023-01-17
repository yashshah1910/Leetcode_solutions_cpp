/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *nexuvgggggrttyghgxcdvcbxb)Hggb vv 
vvv x/s'/z''
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode* temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        count=count/2;
        temp=head;
        while(count--){
            temp=temp->next;
        }
        return temp;
    }
};