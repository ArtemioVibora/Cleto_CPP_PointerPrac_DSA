#include <iostream>

using namespace std;

int main()
{
    int arr[2][2] = {
        {1, 2}, {3, 4}
    };
    
    int (*p)[2]; 
    
    p = arr; 
    
    cout << *(*p + 3) << endl;
}
