#include <bits/stdc++.h>

using namespace std;

class ListNode{
    public: 
        int value;
        ListNode* next;

        ListNode(int value) : value(value), next(nullptr){} 
};

void arrayToLinkedList(ListNode* head, vector<int> arr){
    ListNode* temp = head;
    for(size_t i = 1; i < arr.size(); i++){
        temp->next = new ListNode(arr[i]);
        temp = temp->next; 
    }
}

ListNode* reverseLinkedList(ListNode* head){
    if(head->next == nullptr) return head;
    ListNode* curr = head;
    ListNode* prev = nullptr;
    while(curr != nullptr){
        ListNode* next = curr->next;
        curr->next = prev;           
        prev = curr;                 
        curr = next; 
    }
    return prev;
}

void printLinkedList(ListNode* head){
    ListNode* temp = head;
    while(temp != nullptr){
        cout << temp->value;
        temp = temp->next;
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    ListNode* head = new ListNode(arr[0]);
    arrayToLinkedList(head,arr);
    printLinkedList(head);
    cout << endl;
    head = reverseLinkedList(head);
    printLinkedList(head);
    cout << endl;
    return 0;
}