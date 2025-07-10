#include <iostream>

using namespace std;

void printArray(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Index " << i << " : " << *(a + i) << endl;
    }
}

int main()
{
    const int size;
    size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    printArray(arr, size);
}
