#include <iostream>
using namespace std;

class poly
{
public:
    int coeff;
    int pow_val;
    poly *next;
};
poly *head = NULL;
int curr_coef = 0;
void insert(int co)
{
    poly *n_node = new poly();
    n_node->coeff = co;
    n_node->pow_val = curr_coef;
    curr_coef++;
    if (head == NULL)
    {
        head = n_node;
        n_node->next = NULL;
    }
    else
    {
        poly *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n_node;
        n_node->next = NULL;
    }
}
void display()
{
    poly *temp = head;
    int coe = 0;
    while (temp != NULL)
    {
        if (temp->coeff < 0)
        {
            cout << temp->coeff << "x" << coe++;
        }
        else if (temp->coeff > 0)
        {
            cout << "+" << temp->coeff << "x" << coe++;
        }
        else
        {
            cout << "x" << coe++;
        }
        temp = temp->next;
    }
}
int main()
{
    cout << "Enter the number of Coefficients" << endl;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int coef;
        cout << "Enter Coefficent: " << endl;
        cin >> coef;
        insert(coef);
    }
    display();
}