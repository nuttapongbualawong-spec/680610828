#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979323846;
double deg2rad(double deg) {
    return deg * (PI / 180.0);
}

double rad2deg(double rad) {
    return rad * (180.0 / PI);
}

double findXComponent(double l, double a) {
    double a_rad = deg2rad(a);
    return l * cos(a_rad);
}

double findYComponent(double l, double a) {
    double a_rad = deg2rad(a);
    return l * sin(a_rad);
}

double pythagoras(double xcomp, double ycomp) {
    return sqrt(xcomp * xcomp + ycomp * ycomp);
}

void showResult(double result_vec_length, double result_vec_direction) {
    cout << "***************************************************" << endl;
    cout << "Length of the resultant vector = " << result_vec_length << endl;
    cout << "Direction of the resultant vector (deg) = " << result_vec_direction << endl;
    cout << "***************************************************" << endl;
}

int main() {
    double l1, l2, a1, a2, xcomp, ycomp, result_vec_length, result_vec_direction;

    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;

    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;

    double xcomp1 = findXComponent(l1, a1);
    double ycomp1 = findYComponent(l1, a1);
    double xcomp2 = findXComponent(l2, a2);
    double ycomp2 = findYComponent(l2, a2);

    xcomp = xcomp1 + xcomp2;
    ycomp = ycomp1 + ycomp2;

    result_vec_length = pythagoras(xcomp, ycomp);
    
    result_vec_direction = rad2deg(atan2(ycomp, xcomp));

    showResult(result_vec_length, result_vec_direction);

    return 0;
}