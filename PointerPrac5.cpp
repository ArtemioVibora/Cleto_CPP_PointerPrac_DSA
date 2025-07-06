#include <iostream>

using namespace std;

int main()
{
    char name[50], *p;

    cout << "Enter a string in lower case letters: ";
    cin.get(name, 50);

    for (p = name; *p != 0; ++p)
    {
        *p = toupper(*p);
    }
    cout << "The string in upper case letters is " << name;
}