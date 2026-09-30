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

    
    int x = 3;
    int value = 30;

    node* temp = head;

    
    for (int i = 1; i < x; i++) {
        temp = temp->next;
    }

    node* temp2 = new node(value);


    temp2->next = temp->next;
    temp->next = temp2;

    
    temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}