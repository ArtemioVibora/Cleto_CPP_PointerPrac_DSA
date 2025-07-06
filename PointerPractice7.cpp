#include <iostream>

using namespace std;

int main()
{
    char name[50], *charPointer;
    int index;

    charPointer = name;

    cout << "Enter name: ";
    cin.get(name, 50);

    for (index = 0; charPointer[index] != '\0'; ++index)
    {
        charPointer[index] = tolower(charPointer[index]);
        if(charPointer[index] == 'o')
        {
            charPointer[index] = 'A';
        }
    }

    cout << "Name: " << name;
}