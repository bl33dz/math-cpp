#include <iostream>
#include <cmath>

using namespace std;

double circle_area(double r, bool pi_rounded = false) {
    if(pi_rounded)
        return 3.14 * r * r;
    else
        return 22.0 / 7.0 * r * r;
}

double circle_circumference(double r, bool pi_rounded = false) {
    if(pi_rounded)
        return 2.0 * 3.14 * r;
    else
        return 2.0 * 22.0 / 7.0 * r;
}

double rectangle_area(double l, double w) {
    return l * w;
}

double rectangle_perimeter(double l, double w) {
    return 2.0 * (l + w);
}

double square_area(double s) {
    return s * s;
}

double square_perimeter(double s) {
    return 4.0 * s;
}

double triangle_area(double b, double h) {
    return h * b / 2.0;
}

double pythagoras_c(double a, double b) {
    return (a * a) + (b * b);
}

double pythagoras_ab(double x, double c) {
    return (c * c) - (x * x);
}

double trapezoid_area(double a, double b, double h) {
    return (a + b) / 2.0 * h;
}

// can be used to calculate kite_area
double rhombus_area(double p, double q) {
    return p * q / 2.0;
}

double pentagon_area(double s) {
    return 1.0 / 4.0 * sqrt(5.0 * (5.0 + 2.0 * sqrt(5))) * s * s;
}

double pentagon_perimeter(double s) {
    return 5.0 * s;
}

double pentagon_diagonal(double s) {
    return (1.0 + sqrt(5)) / 2.0 * s;
}

double hexagon_area(double s) {
    return (3.0 * sqrt(3)) / 2.0 * s * s;
}

double hexagon_perimeter(double s) {
    return 6.0 * s;
}

int main(int argc, char *argv[]) {
    int a = 10;
    cout << hexagon_area(a) << endl;
    cout << circle_circumference(a) << endl;
    return 0;
}
