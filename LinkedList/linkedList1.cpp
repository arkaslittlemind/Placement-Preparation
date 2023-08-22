#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class linked_list()
{
    ll data;
    linked_list *next;
    linked_list()
    {
        this->next = NULL;
    }
    linked_list(ll data)
    {
        this->data = data;
        this->next = NULL;
    }
    linked_list *add(ll data, linked_list * head)
    {
        // CASE:1
        if (head == NULL)
        {
            linked_list *temp = new linked_list(data);
            head = temp;
        }
        else
        {
            // CASE:2
            linked_list *temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = new linked_list(data);
        }
        return head;
    }
    void print(linked_list * head)
    {
        auto temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    linked_list *head1 = NULL, *head2 = NULL;
    head1 = head1->add(6, head1);
    head1 = head1->add(2, head1);
    head1 = head1->add(5, head1);
    head1 = head1->add(4, head1);
    head1 = head1->add(5, head1);
    head1 = head1->add(1, head1);

    // head1=head1->mergesort(head1);
    head1->print(head1);
}