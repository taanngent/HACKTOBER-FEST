//Q1b 
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int coeff;
	int pow;
	struct Node* next;
};
void create_node(int x, int y, struct Node** temp)
{
	struct Node *r, *z;
	z = *temp;
	if (z == NULL) {
		r = (struct Node*)malloc(sizeof(struct Node));
		r->coeff = x;
		r->pow = y;
		*temp = r;
		r->next = (struct Node*)malloc(sizeof(struct Node));
		r = r->next;
		r->next = NULL;
	}
	else {
		r->coeff = x;
		r->pow = y;
		r->next = (struct Node*)malloc(sizeof(struct Node));
		r = r->next;
		r->next = NULL;
	}
}
void show(struct Node* node)
{
	while (node->next != NULL) {
		printf("%dx^%d", node->coeff, node->pow);
		node = node->next;
		if (node->coeff >= 0) {
			if (node->next != NULL)
				printf("+");
		}
	}
}

int main()
{
	struct Node *poly1 = NULL, *poly2 = NULL, *poly = NULL;
    int n;
    cout << "Enter the max power of x: ";
    cin >> n;
    int a[n+1];
    cout << "Enter the values of coeff: ";
    for(int i = 0; i<n+1; i++)
    {
        cin >> a[i];
    }
    for(int i = n; i >= 0 ; i--)
    {
	    create_node(a[i], i, &poly1);
    }

	printf("Polynomial: ");
	show(poly1);

	return 0;
}