// Implement Doubly Linked List Class
// #include<iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node* prev;
//     Node* next;
//     Node(int x)
//     {
//         data=x;
//         prev=NULL;
//         next=NULL;
//     }
// };
// class DoublyLinkedList
// {
// public:
//     Node* head;
//     DoublyLinkedList(){
//         head=NULL;
//     }
// };
// int main()
// {
//     DoublyLinkedList dll;
//     return 0;
// }




// Insert Front
// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int x){
//         data = x;
//         prev = NULL;
//         next = NULL;
//     }
// };

// void insertFront(Node*& head, int x){

//     Node* node = new Node(x);

//     node->next = head;

//     if(head != NULL){
//         head->prev = node;
//     }

//     head = node;
// }






// Insert End
// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int x){
//         data = x;
//         prev = NULL;
//         next = NULL;
//     }
// };

// void insertEnd(Node*& head, int x){

//     Node* node = new Node(x);

//     if(head == NULL){
//         head = node;
//         return;
//     }

//     Node* temp = head;

//     while(temp->next != NULL){
//         temp = temp->next;
//     }

//     temp->next = node;
//     node->prev = temp;
// }






// Delete Node
// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int x){
//         data = x;
//         prev = NULL;
//         next = NULL;
//     }
// };

// void deleteNode(Node* node){

//     if(node == NULL){
//         return;
//     }

//     if(node->prev != NULL){
//         node->prev->next = node->next;
//     }

//     if(node->next != NULL){
//         node->next->prev = node->prev;
//     }

//     delete node;
// }






// Reverse Doubly Linked List
// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int x){
//         data = x;
//         prev = NULL;
//         next = NULL;
//     }
// };

// Node* reverseDLL(Node* head){

//     Node* curr = head;
//     Node* temp = NULL;

//     while(curr != NULL){

//         temp = curr->prev;
//         curr->prev = curr->next;
//         curr->next = temp;

//         curr = curr->prev;
//     }

//     if(temp != NULL){
//         head = temp->prev;
//     }

//     return head;
// }






// Traverse Circular Linked List
// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int x){
//         data = x;
//         next = NULL;
//     }
// };

// void print(Node* head){

//     if(head == NULL){
//         return;
//     }

//     Node* temp = head;

//     do{
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     while(temp != head);
// }







(LEETCODE QUESTIONS)

LeetCode 707 – Design Linked List


class MyLinkedList {
public:

    class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
    };

    Node* head;

    MyLinkedList() {
        head = NULL;
    }

    int get(int index) {

        Node* temp = head;
        int i = 0;

        while(temp != NULL){

            if(i == index){
                return temp->data;
            }

            temp = temp->next;
            i++;
        }

        return -1;
    }

    void addAtHead(int val) {

        Node* node = new Node(val);

        node->next = head;
        head = node;
    }

    void addAtTail(int val) {

        Node* node = new Node(val);

        if(head == NULL){
            head = node;
            return;
        }

        Node* temp = head;

        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = node;
    }

    void addAtIndex(int index, int val) {

        if(index == 0){
            addAtHead(val);
            return;
        }

        Node* temp = head;
        int i = 0;

        while(temp != NULL && i < index - 1){
            temp = temp->next;
            i++;
        }

        if(temp == NULL){
            return;
        }

        Node* node = new Node(val);

        node->next = temp->next;
        temp->next = node;
    }

    void deleteAtIndex(int index) {

        if(head == NULL){
            return;
        }

        if(index == 0){

            Node* temp = head;
            head = head->next;

            delete temp;
            return;
        }
        Node* temp = head;
        int i = 0;
        while(temp != NULL && i < index - 1){
            temp = temp->next;
            i++;
        }
        if(temp == NULL || temp->next == NULL){
            return;
        }
        Node* del = temp->next;
        temp->next = del->next;
        delete del;
    }
};






LeetCode 430 – Flatten a Multilevel Doubly Linked List








LeetCode 146 – LRU Cache (Theory Only)