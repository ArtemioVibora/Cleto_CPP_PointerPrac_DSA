#include <iostream>

using namespace std;

int main()
{
    char name[50], *ptr;
    int index;

    cout << "Enter a string in lower case letters: ";
    cin.get(name, 50);

    ptr = name;

    for (index = 0; ptr[index] != '\0'; ++index)
    {
        ptr[index] = toupper(ptr[index]);
    }

    cout << "The string in upper case letters: " << name << endl;
}