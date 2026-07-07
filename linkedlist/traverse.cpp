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

    node* Head = NULL;
    int arr[] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 6; i++) {

        if (Head == NULL) {
            Head = new node(arr[i]);
        } else {
            node* temp = new node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }

    // Print linked list
    node* temp = Head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}