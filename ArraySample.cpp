#include <iostream>

using namespace std;

int main()
{
    char name[50];
    
    cout << "Enter a string in lower case: ";
    cin.get(name, 50);

    for (int i = 0; name[i] != '\0'; ++i)
    {
        name[i] = toupper(name[i]);
    }

    cout << "Name in upper case: " << name << endl;
}
