#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string data;
    Node *next;
    Node *prev;
};
void append(Node **head_ref, string new_data)
{
    Node *new_node = new Node();
    Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    new_node->prev = last;
    return;
}
void printList(Node *node)
{
    Node *last;
    while (node != NULL)
    {
        cout << " " << node->data << " ";
        last = node;
        node = node->next;
    }
}
void replace(Node *head, string newString, int pos)
{
    Node *temp = head;
    while (pos > 0)
    {
        temp = temp->next;
        pos--;
    }
    temp->data = newString;
}
int main()
{
    Node *head = NULL;
    int n;
    cout << "Enter The number of Strings : " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string temp;
        cout << "Enter String : " << endl;
        cin >> temp;
        append(&head, temp);
    }
    cout << "Created DLL is: ";
    printList(head);
    string temp;
    cout << "\nEnter the new String : " << endl;
    cin >> temp;
    cout << "Enter the position to be replaced :" << endl;
    int pos;
    cin >> pos;
    replace(head, temp, pos - 1);
    cout << "New DLL is \n ";
    printList(head);
    return 0;
}