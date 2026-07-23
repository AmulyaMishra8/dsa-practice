#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
        int value;
        Node* next;

        Node(int value) : value(value), next(nullptr) {}
};

void arrayToLinkedList(Node* head, vector<int> arr){
    Node* temp = head;
    
    for(size_t i = 1; i < arr.size(); i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
}

void printLinkedList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->value;
        temp = temp->next;
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    Node* head = new Node(arr[0]);
    arrayToLinkedList(head, arr);
    printLinkedList(head);
    return 0;
}