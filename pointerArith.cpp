#include <iostream>

using namespace std;

int main()
{
    int x;
    x = 18;
    int *p = &x;
    int *myPointer;
    
    cout << p << endl; // will print the location of p
    cout << *p << endl; // will print the value of the address p is pointing at
    cout << ++p << endl; //will print the next integer location
    
    
    int y[5] = {5, 10, 15, 20, 25};
    cout << y << endl << endl; //will print the address
    
    cout << "Contents of an array without pointers using for loop" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << y[i] << " ";
    }
    cout << endl;
    
    cout << "Test on first element ----> " << y[0] << endl;
    cout << "Address ----> " << &y[0] << endl; //Will be the address of the array
    
    cout << endl << "Contents of an array using a pointer" << endl;
    cout << *y << endl;
    cout << *(y + 1) << endl;
    cout << *(y + 2) << endl;
    cout << "\n==================================================" << endl;
    myPointer = y;
    cout << myPointer << endl; //this will show address of the array y
    cout << *myPointer << endl;
    cout << *(myPointer + 1) << endl;
    ++myPointer;
    
    cout << *myPointer << endl;
}
