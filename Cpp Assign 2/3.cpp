#include <iostream>
using namespace std;

class Complex {
    int real, img;

public:
    Complex(int r = 0, int i = 0) : real(r), img(i) {}

    Complex operator+( Complex &c) {
        return Complex(real + c.real, img + c.img);
    }

    Complex operator-( Complex &c) {
        return Complex(real - c.real, img - c.img);
    }

    bool operator==( Complex &c) {
        return (real == c.real && img == c.img);
    }

    void display() {
        if (img >= 0)
            cout << real << " + " << img << "i" << endl;
        else
            cout << real << " - " << -img << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, -2);

    Complex c3 = c1 + c2;
    cout << "c1 + c2 = ";
    c3.display();

    Complex c4 = c1 - c2;
    cout << "c1 - c2 = ";
    c4.display();

    if (c1 == c2)
        cout << "c1 and c2 are equal." << endl;
    else
        cout << "c1 and c2 are not equal." << endl;

    return 0;
}
