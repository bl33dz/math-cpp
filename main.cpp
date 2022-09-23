// Example
#include <iostream>
#include "math.h"

using namespace std;

int main(int argc, char *argv[]) {
    int r = 10;
    cout << "Area of a circle with radius " << r << " is " << circle_area(r, true) << endl;
    int height = 5, base = 5;
    cout << "Area of a triangle with height " << height << " and base " << base << " is " << triangle_area(base, height) << endl;
    int n = 5;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
}
