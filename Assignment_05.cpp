// // LeetCode 206 – Reverse Linked List
// // class Solution {
// // public:
// //     ListNode* reverseList(ListNode* head)
// //     {
// //         ListNode* prev=NULL;
// //         ListNode* curr=head;

// //         while(curr !=NULL)
// //         {
// //             ListNode* nextNode=curr->next;
// //             curr->next=prev;
// //             prev=curr;
// //             curr=nextNode;
// //         }
// //         return prev;
// //     }
// // };



// LeetCode 876 – Middle of Linked List
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) 
//     {
//         ListNode* slow=head;
//         ListNode* fast=head;
//         while(fast !=NULL&&fast->next !=NULL)
//         {
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         return slow;
//     }
// };




// LeetCode 141 – Linked List Cycle
// class Solution 
// {
// public:
//     bool hasCycle(ListNode *head) 
//     {
//         ListNode* slow=head;
//         ListNode* fast=head;
//         while(fast !=NULL&&fast->next !=NULL)
//         {
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast)
//             {
//                 return true;
//             }
//         }
//         return false;
//     }
// };




// LeetCode 142 – Linked List Cycle II
// class Solution 
// {
// public:
//     ListNode *detectCycle(ListNode *head) 
//     {
//         ListNode* slow=head;
//         ListNode* fast=head;
//         while(fast !=NULL&&fast->next !=NULL)
//         {
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast)
//             {
//                 ListNode* temp=head;
//                 while(temp !=slow)
//                 {
//                     temp=temp->next;
//                     slow=slow->next;
//                 }
//                 return temp;
//             }
//         }
//         return NULL;
//     }
// };



// LeetCode 234 – Palindrome Linked List
