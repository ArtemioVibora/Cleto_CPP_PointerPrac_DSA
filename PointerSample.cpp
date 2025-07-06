#include <iostream>

using namespace std;

int main()
{
    char name[50];
    char *p;

    cout << "Enter a string in lower case: ";
    cin.get(name, 50);

    for (p = name; *p != '\0'; ++p)
    {
        *p = toupper(*p);
    }

    cout << "To upper name: " << name << endl;
}
