#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2;

    cout << "Enter x1 y1: ";
    cin >> x1 >> y1;

    cout << "Enter x2 y2: ";
    cin >> x2 >> y2;

    if (x1 == x2) {
        cout << "Slope is undefined (vertical line)" << endl;
    }
    else {
        double m = (y2 - y1) / (x2 - x1);

        cout << fixed << setprecision(2);
        cout << "Slope m = " << m;

        if (m > 0)
            cout << " (positive)";
        else if (m < 0)
            cout << " (negative)";
        else
            cout << " (zero)";

        if (abs(m) <= 1)
            cout << ", |m| <= 1";
        else
            cout << ", |m| > 1";

        cout << endl;
    }

    return 0;
}