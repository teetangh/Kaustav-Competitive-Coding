#include <iostream>
using namespace std;
#include "../include/Node.cpp"

Node *takeInput_Better()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        // Static allocation leads to deallocation at every iteration
        // Node n(data);
        Node *newNode = new Node(data);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }

        else
        {
            tail->next = newNode;
            tail = tail->next;
            // OR
            // tail = newNode;
        }

        cin >> data;
    }
    return head;
}
Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    while (data != -1)
    {
        // Static allocation leads to deallocation at every iteration
        // Node n(data);
        Node *newNode = new Node(data);

        if (head == NULL)
            head = newNode;

        else
        {
            // head->next = newNode;
            Node *temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }

        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = takeInput();
    print(head);
    printf("\n");
    Node *head2 = takeInput_Better();
    print(head2);
}

// Sample IO
// 10 20 30 40 -1
// 10 20 30 40
// 1 2 3 4 -1
// 1 2 3 4