//write a code for finding area of rectangles,triangles,circle in c++
#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "Enter 1 for rectangle, 2 for triangle, 3 for circle: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        int l, b;
        cout << "Enter length and breadth of rectangle: ";
        cin >> l >> b;
        cout << "Area of rectangle: " << l * b;
        break;
    }
    case 2:
    {
        int b, h;
        cout << "Enter base and height of triangle: ";
        cin >> b >> h;
        cout << "Area of triangle: " << 0.5 * b * h;
        break;
    }
    case 3:
    {
        int r;
        cout << "Enter radius of circle: ";
        cin >> r;
        cout << "Area of circle: " << 3.14 * r * r;
        break;
    }
    default:
        cout << "Invalid choice";
    }
    return 0;
}