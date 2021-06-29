#include <iostream>

struct Node {
    int data;
    Node *next;
};

void insertElement(int);
void removeNodeByPosition(int);
void searchNode(int);
void print();

//Global variables
Node* head = NULL;

int main() {
    int number, search;
    bool run = true;

    while (run) {
        std::cout << "Please enter a number [press 0 to exit]: "; std::cin >> number;
        if (number == 0)
            run = false;
        else {
            insertElement(number);
            print();
        }
        std::cout << '\n';
    }

    std::cout << "What number are you looking for?: "; std::cin >> search;
    searchNode(search);

    std::cin.get();
    return 0;
}

void insertElement(int number) {
    Node *newNode = new Node();
    newNode->data = number;

    Node *aux1 = head;
    Node *aux2 = nullptr;

    while ((aux1 != nullptr) && (aux1->data < number)) {
        aux2 = aux1;
        aux1 = aux1->next;
    }

    if (aux1 == head) {
        head = newNode;
    } else {
        aux2->next = newNode;
    }
    newNode->next = aux1;

}

void searchNode(int number) {
    Node* seekNode = head;
    
    while (seekNode != nullptr) {
        if (seekNode->data == number) {
            std::cout << "Number " << seekNode->data << " was found!" << std::endl;
            return;
        }
        seekNode = seekNode->next;

        if (seekNode == nullptr)
            std::cout << "Number was not found!" << std::endl;
        
    }
}

void print() {
    Node* print = head;
    std::cout << "List is: ";

    while (print != nullptr) {
        std::cout << print->data << "->";
        print = print->next;
    }
}

void removeNodeByPosition(int position) {
    Node* temp = head;

    if (temp != nullptr) {

        if (position == 1) {
            head = temp->next;
            delete temp;
            return;
        }

        for (int i = 0; i < position-2; ++i) {
            temp = temp->next;
        }

        Node* del = temp->next;

        if (del == nullptr) {
            std::cout << "Node was not found!" << std::endl;
            return;
        } else {
            temp->next = del->next;
            delete del;
        }
    } else
        std::cout << "There is no any Node to delete!" << std::endl;
}