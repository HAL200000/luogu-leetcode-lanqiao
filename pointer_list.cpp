
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
int a;
int main()
{
    node *head, *p, *q;
    head = NULL;

    for(int i=1; i<=3; i++)
    {
        p = (node *)malloc(sizeof(node));
        cin>>a;
        p->data = a;
        p->next = NULL;

        if(head == NULL) head = p;
        else q->next = p;
        q = p;
    }

    node *h = head;

    while(head != NULL)
    {
        if(head->next->data > 6)
        {
            p = (node *)malloc(sizeof(node));
            p->data = 6;
            p->next = head->next;

            head->next = p;
            break;
        }
        head = head->next;
    }
    

    while(h != NULL)
    {
        cout<<h->data<<endl;
        h = h->next;
    }


    system("pause");
    return 0;
}
