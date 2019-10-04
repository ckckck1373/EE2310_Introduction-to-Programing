#include <iostream>
#define PI() 3.14
using namespace std;
float r,a,b;
int main()
{
    cout << "Please enter the radius of a sphere.(in meter)" << endl;
    cin >> r;
    a=4*PI()*r*r;
    b=(1.333333)*PI()*r*r*r;
    cout << "The surface area of the sphere is :" << a << endl;
    cout << "The volume of the sphere is :" << b << endl;
    return 0;
}
