#include <iostream>
using namespace std;

class Informer
{
public:
    Informer() { cout << "Utworzylem obiekt" << endl; }
    ~Informer() { cout << "Zniszczylem obiekt" << endl; }
};

class wektor2D
{
public:
    wektor2D(double a, double b)
    {
        x = a;
        y = b;
        print();
    }

    ~wektor2D()
    {
        print();
    }
    double norm(double x, double y)
    {
        return sqrt(x * x + y * y);
    }

    void print()
    {
        cout << "Wspolrzedne wektora[ " << x << "," << y << "]" << endl;
    }
    void setX(int a) {
        x = a;
    }
    void setY(int b) {
        y = b;
    }
    double getX() {
        return x;
    }
    double getY() {
        return y;
    }

private:
    double x;
    double y;
    Informer informator;
};

wektor2D operator+(wektor2D A, wektor2D B) {
    return wektor2D{ A.getX() + B.getX(),A.getY() + B.getY() };
}
