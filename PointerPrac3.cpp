#include <iostream>

using namespace std;

int main()
{
    int point = 0;
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int *start = &arr[3];
    point = *start;

    cout << point << endl;
    cout << arr[3] << endl;

    cout << *(start + 1) << endl;


}
