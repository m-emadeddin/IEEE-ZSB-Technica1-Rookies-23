#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/**
 *   Implement Linked List
 */


class Node {
    public:
        int data;
        Node* next;
        
        Node(){
            data = 0;
            next = NULL;
        }

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class Linkedlist {
    Node* head;
    public:
        Linkedlist() { head = NULL; }
    
        void append(int);

        void Print();
        
        void deleteAt(int);
};
    
void Linkedlist::deleteAt(int nodeOffset){
    Node *temp1 = head, *temp2 = NULL;
    nodeOffset++;
    int ListLen = 0;

    if (head == NULL){
        cout << "Empty list" << endl;
        return;
    }

    while (temp1 != NULL){
        temp1 = temp1->next;
        ListLen++;
    }

    if (ListLen < nodeOffset){
        cout << "OUT OF BOUND!!\nNo Elements to delete." << endl;
        return;
    }

    temp1 = head;

    if (nodeOffset == 1){
        head = head->next;
        delete temp1;
        return;
    }

    while (nodeOffset-- > 1){
        temp2 = temp1;
        temp1 = temp1->next;
    }

    temp2->next = temp1->next;
    delete temp1;
}

void Linkedlist::append(int data){
    Node* New = new Node(data);
    if (head == NULL) {
        head = New;
        return;
}

Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = New;
}

void Linkedlist::Print(){
Node* temp = head;

    if (head == NULL){
        cout << "List is empty" << endl;
        return;
    }

    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);

    Linkedlist list; // 0-Based

    list.append(1);
    list.append(5);
    list.append(3);
    list.append(4);

    cout << "Elements in the list:\n";
    list.Print();
    cout << endl;

    list.deleteAt(0);

    cout << "Elements in the list:\n";
    list.Print();
    cout << endl;
    

}