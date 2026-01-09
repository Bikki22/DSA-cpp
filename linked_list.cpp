#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node()
    {
        next = NULL;
    }
};

class LinkedList
{
    node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void print()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            node *temp = head;
            while (temp != NULL)
            {
                cout << temp->data << "-->";
                temp = temp->next;
            }
        }
    }
    void insert_at_the_beginning(int value)
    {
        node *temp = new node();
        temp->data = value;
        temp->next = head;
        head = temp;
    };

    void insert_at_the_end(int value)
    {
        node *temp = new node();
        temp->data = value;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            node *t = head;
            while (t->next != NULL)
                t = t->next;
            t->next = temp;
        }
    }

    void insert_at_the_position(int value, int position)
    {
        node *temp = new node();
        temp->data = value;

        if (position == 1)
        {
            temp->next = head;
            head = temp;
        }
        else
        {
            node *t = head;
            while ((position - 2) != 0 && (t->next != NULL))
            {

                t = t->next;
                position--;
            }
            temp->next = t->next;
            t->next = temp;
        }
    }

    void deletion_in_the_beginning()
    {
        if (head == NULL)
        {
            cout << "deletion Not Possible" << endl;
        }
        else
        {
            node *temp = head;
            head = head->next;
            delete (temp);
        }
    }

    void deletion_in_the_end()
    {
        if (head == NULL)
        {
            cout << "List is empty";
        }
        else if (head->next == NULL)
        {
            delete (head);
            head = NULL;
        }
        else
        {
            node *t = head;
            while (t->next->next != NULL)
                t = t->next;
            delete (t->next);
            t->next = NULL;
        }
    }

    void deleteion_at_position(int pos)
    {
        if (head == NULL)
        {
            cout << "Not Possible";
        }
        else if (pos == 1)
        {
            node *t = head;
            head = head->next;
            delete (t);
        }
        else
        {
            node *t = head;
            while (((pos - 2) != 0) && (t->next != NULL))
            {
                t = t->next;
                pos--;
            }
            node *temp = t->next;
            t->next = temp->next;
            delete (temp);
        }
    }
};

int main()
{

    LinkedList ll;
    ll.insert_at_the_beginning(10);
    ll.insert_at_the_beginning(20);
    ll.insert_at_the_beginning(30);
    ll.insert_at_the_end(20);
    ll.insert_at_the_end(50);
    ll.insert_at_the_position(100, 3);
    ll.deletion_in_the_beginning();
    ll.deletion_in_the_end();
    ll.deleteion_at_position(2);
    ll.print();

    return 0;
}