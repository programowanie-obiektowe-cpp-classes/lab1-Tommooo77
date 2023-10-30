#include <iostream>

class Wektor2D
{
public:
    Wektor2D() : x(0), y(0) {}
    Wektor2D(double xx, double yy)
    {
        x = xx;
        y = yy;
    }

    double getX()
    {
        return x;
    }

    double getY()
    {
        return y;
    }

    void   setX(double xx)
    {
        x = xx;
    }

    void   setY(double yy)
    {
        y = yy;
    }


    Wektor2D& operator=(const Wektor2D& W)
    {
        if (this != &W)
        {
            x = W.x;
            y = W.y;
        }
        return *this;
    }
    Wektor2D& operator+(const Wektor2D& wek2)
    {
        Wektor2D* wek1 = new Wektor2D();
        wek1->x = this->x + wek2.x;
        wek1->y = this->y + wek2.y;
        return *wek1;
    }
    double  operator*(const Wektor2D& wek2)
    {
        Wektor2D wek1;
        wek1.x = this->x * wek2.x;
        wek1.y = this->y * wek2.y;
        double sum = wek1.x + wek1.y;
        return sum;
    }
private:
    double x;
    double y;
};