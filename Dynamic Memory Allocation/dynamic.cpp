#include <iostream>
using namespace std;

class LinkedList {
private:
    struct Node {
        int data;
        Node* next;
    };

    Node* head;

public:
    // Constructor
    LinkedList() {
        head = NULL;
    }

    // Append at end
    void append(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Insert at beginning
    void insert_at_beginning(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }

    // Search element
    void search(int key) {
        Node* temp = head;
        int position = 1;

        while (temp != NULL) {
            if (temp->data == key) {
                cout << "Element " << key << " found at position " << position << endl;
                return;
            }
            
            temp = temp->next;
            position++;
        }
        cout << "Element not found!" << endl;
    }

    // Delete node by value
    void delete_node(int key) {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }

        if (head->data == key) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Node deleted successfully." << endl;
            return;
        }

        Node* curr = head;
        Node* prev = NULL;

        while (curr != NULL && curr->data != key) {
            prev = curr;
            curr = curr->next;
        }

        if (curr == NULL) {
            cout << "Element not found!" << endl;
            return;
        }

        prev->next = curr->next;
        delete curr;
        cout << "Node deleted successfully." << endl;
    }

    // Reverse linked list
    void reverse() {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
        cout << "Linked list reversed successfully." << endl;
    }

    // Display list
    void display() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* temp = head;
        cout << "Linked List: ";

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;
    int choice, value;

    do {
        cout << "\n----- Linked List Menu -----\n";
        cout << "1. Append\n";
        cout << "2. Insert at Beginning\n";
        cout << "3. Search\n";
        cout << "4. Delete Node\n";
        cout << "5. Reverse List\n";
        cout << "6. Display List\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            list.append(value);
            break;

        case 2:
            cout << "Enter value: ";
            cin >> value;
            list.insert_at_beginning(value);
            break;

        case 3:
            cout << "Enter value to search: ";
            cin >> value;
            list.search(value);
            break;

        case 4:
            cout << "Enter value to delete: ";
            cin >> value;
            list.delete_node(value);
            break;

        case 5:
            list.reverse();
            break;

        case 6:
            list.display();
            break;

        case 0:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 0);

    return 0;
}