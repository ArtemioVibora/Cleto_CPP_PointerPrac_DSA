#include <iostream>

using namespace std;

#define PI 3.1416

void inputData(float &r)
{
    cout << "Please enter the radius of the circle: ";
    cin >> r;
}

void computeArea(float &a, float r)
{
    a = PI * r * r;
}

void printArea(float a)
{
    cout << "The area of the circle is " << a << endl;
}

int main()
{
    float area, radius;

    inputData(radius);
    computeArea(area, radius);
    printArea(area);
}