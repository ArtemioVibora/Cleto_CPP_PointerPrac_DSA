#include <iostream>

using namespace std;

struct NODE 
{
    int value;
    NODE *next;
};

void addElements(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter: ";
        cin >> arr[i];
    }
    cout << endl;
}

void printElements(int arr[])
{
    cout << "{";
    for (int i = 0; i < 10; i++)
    {
        if (i != 9)
        {
            cout << arr[i] << ", ";
        }
        else
        {
            cout << arr[i];
        }
    }
    cout << "}" << endl;
}

int main()
{
    cout << "Array and Pointers " << endl;
    int arr[10];
    addElements(arr);
    printElements(arr);

    cout << "Memory Address" << endl;
    cout << arr << endl; //This is going to output address
    int *ptr = arr; 

    cout << "Pointer Arithmetic for loop ---------->";
    cout << "{";
    for (int i = 0; i < 10; i++)
    {
        if (i != 9)
        {
            cout << *(ptr + i) << ", ";
        }
        else
        {
            cout << *(ptr + i);
        }
    }
    cout << "}" << endl;

    cout << endl << endl;
    cout << "=====================================================" << endl;
    cout << "Memory address using pointer: " << ptr << endl;
    cout << "Memory address of array: " << arr << endl;

}