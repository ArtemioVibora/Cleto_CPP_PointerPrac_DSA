#include <iostream>

using namespace std;

struct NODE 
{
    int value;
    NODE *next;
};

int main()
{
    NODE n1, n2, n3, n4, n5, *start, *ptr;
    n1.value = 5;
    n2.value = 10;
    n3.value = 15;
    n4.value = 20;
    n5.value = 25;

    start = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = NULL;
    
    ptr = &n1;
    int i = 1;

    while (ptr != NULL)
    {
        cout << "Node " << i << ": " << ptr->value << endl;
        ++i;
        ptr = ptr->next; 
    }
}
