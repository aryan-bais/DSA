#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {

    node* head = NULL;

    int arr[] = {2, 3, 4, 5, 6};

    
    for (int i = 0; i < 5; i++) {

        if (head == NULL) {
            head = new node(arr[i]);
        }
        else {
            node* temp = head;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = new node(arr[i]);
        }
    }

    node*curr=head;
    node*prev=NULL;

    while(curr->next!=NULL){
        prev=curr;
        curr=curr->next;
    }
    delete curr;
    prev->next=NULL;

        node* temp = head;


      while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    
    }
}
