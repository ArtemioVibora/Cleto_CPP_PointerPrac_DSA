#include <iostream>

using namespace std;

void addElements(int arr[])
{
    int *p;
    p = arr;
    
    for (int i = 0; i < 25; i++)
    {
        *(p + i) = i + 1;
    }
}

void printElements(int arr[])
{
    int *p;
    p = arr;
    
    for (int i = 0; i < 25; i++)
    {
        cout << *(p + i) << " ";
    }
}

int main()
{
    int arr[25];
    addElements(arr);
    printElements(arr);
}
