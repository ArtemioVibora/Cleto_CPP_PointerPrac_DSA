#include <iostream>
#include <malloc.h>

using namespace std;

struct Node
{
    int value;
    Node *next;
};

bool isListEmpty(Node *pStart)
{
    if (pStart == NULL)
    {
        return true;
    }
    return false;
}

int countNode(Node *pStart)
{
    Node *ptr;
    int numOfNodes = 0;

    ptr = pStart;
    while(ptr != NULL)
    {
        ptr = ptr->next;
        ++numOfNodes;
    }
    return numOfNodes;
}

void printMenu(int count)
{
    cout << "=============================" << endl;
    cout << "<1> Add rear" << endl;
    cout << "<2> Add within " << endl;
    cout << "<3> Delete " << endl;
    cout << "<4> Locate " << endl;
    cout << "<5> Print all nodes" << endl;
    cout << "<6> EXIT" << endl;
    cout << "=============================" << endl;
    cout << "There are " << count << " in the list" << endl;
    cout << ">>>> ";
}

void printAllNodes(Node *pStart)
{
    Node *ptr;
    int ctr;
    ptr = pStart;
    
    if (isListEmpty(pStart))
    {
        cout << "The list is empty!" << endl;
    }
    else
    {
        ctr = 1;
        while (ptr != NULL)
        {
            cout << "The value of node " << ctr << " is " << ptr->value << ". " << endl;
            ptr = ptr->next;
            ++ctr;
        }
    }
}

void locateNode(Node *pStart, int data)
{
    Node *ptr;
    int ctr = 1;
    ptr = pStart;
    if (isListEmpty(pStart))
    {
        cout << "The list is empty!" << endl;
    }
    else
    {
        while (ptr != NULL && ptr->value != data)
        {
            ptr = ptr->next; //this will increment until the data is found or node is == NULL
            ++ctr;
        }
        if (ptr == NULL)
        {
            cout << "Node does not exist!" << endl;
        }
        else
        {
            cout << "Node found on node " << ctr << "." << endl;
        }

    }
}

void deleteNode(Node **pStart, int data)
{
    Node *discard, *before;
    discard = *pStart;

    if (isListEmpty(*pStart))
    {
        cout << "List is empty!" << endl;
    }
    else
    {
        //should be inside (*something)->something otherwise it would return an error
        if ((*pStart)->value == data)
        {
            *pStart = (*pStart)->next;
            free(discard);
            cout << "The value of node containing " << data << " is deleted " << endl;
        }
        else
        {
            //if the first node is not the target while loop will then execute
            while(discard != NULL && discard->value != data)
            {
                //before becomes similar to an int temp
                before = discard;
                discard = discard->next;
            }
            //If not found execute this if statement
            if (discard == NULL)
            {
                cout << "Node is not found!" << endl;
            }
            //If found it would trigger this
            else
            {
                //Linking the node after discard node using discard->next which point to the next address before discard
                before->next = discard->next;
                cout << "The value of node containing " << data << " is deleted " << endl;
            }
        }
    }

}

void addNodeRear(Node **pStart, int data)
{
    Node *ptr1, *ptr2;
    ptr1 = (Node*)malloc(sizeof(Node));
    ptr1->value = data;
    ptr1->next = NULL; 
    if (*pStart == NULL)
    {
        *pStart = ptr1;
    }
    else
    {
        ptr2 = *pStart;
        while(ptr2->next != NULL)
        {
            ptr2 = ptr2->next;
        }
        ptr2->next = ptr1;
    }
}

void addNodeWithin(Node **pStart, int data, int pos)
{
    Node *ptr, *before, *here;
    int ctr;

    //Creating a node with memory allocation
    ptr = (Node*)malloc(sizeof(Node));
    ptr->value = data;
    ptr->next = NULL;

    if (pos == 1)
    {
        ptr->next = *pStart;
        *pStart = ptr; //start would then store the address of pointer 
    }
    else
    {
        before = *pStart;
        here = (*pStart)->next;
        ctr = 1;
        //This while loop divides
        while (ctr <= pos - 2)
        {
            before = before->next;
            here = here->next;
            ++ctr;
        }
        before->next = ptr;
        ptr->next = here;
        ++ctr;
    }

    cout << endl << "Insertion completed!" << endl;
}

void runProgram()
{
    Node *start;
    start = NULL;
    int choice;
    int counter = 0;
    counter = countNode(start);

    int data, pos;


    while(choice != 6)
    {
        counter = countNode(start);
        printMenu(counter);
        cin >> choice;

        switch(choice)
        {
            //Add rear
            case 1:
                cout << "Enter data: ";
                cin >> data;
                addNodeRear(&start, data);
                break;
            //Add within
            case 2:
                cout << "Enter data: ";
                cin >> data;
                cout << "Enter position: ";
                cin >> pos;
                addNodeWithin(&start, data, pos);
                break;
            //Delete
            case 3:
                cout << "Enter data: ";
                cin >> data;
                deleteNode(&start, data);
                break;
            //Locate
            case 4:
                cout << "Enter data: ";
                cin >> data;
                locateNode(start, data);
                break;
            //Print all
            case 5:
                printAllNodes(start);
                break;
            //Exit
            case 6:
                //Message of goodbye LMAO
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "ERROR! INVALID INPUT!" << endl;
                break;
        }
    }
}

int main()
{
    runProgram();
}

