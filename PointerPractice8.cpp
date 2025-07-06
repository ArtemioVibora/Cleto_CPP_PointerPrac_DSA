#include <iostream>

using namespace std;

int main()
{
    char name[50];
    char *p;

    cout << "Enter a string: ";
    cin.get(name, 50);

    p = &name[6];
    
    cout << "The name of the selected is: " << p << endl;


    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *x; //integer pointer x

    x = &numbers[7];

    cout << x << endl;
    cout << *x << endl;

}