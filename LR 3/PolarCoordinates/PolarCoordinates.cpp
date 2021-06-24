#include <iostream>
#include <math.h>
#include <Windows.h>

#define M_PI 3.1415926535897932384
using namespace std;

class PolarCoordinates
{
    double r; // радиус
    double phi; // угол

public:
    PolarCoordinates operator + (PolarCoordinates& h); // перегруженный оператор +
    PolarCoordinates& operator += (PolarCoordinates& h); // перегруженный оператор +=
    PolarCoordinates operator - (PolarCoordinates& h); // перегруженный оператор -
    PolarCoordinates& operator -= (PolarCoordinates& h); // перегруженный оператор -=
    // Конструктор копирования
    PolarCoordinates(const PolarCoordinates& a);
    // Конструктор по умолчанию
    PolarCoordinates();
    // Конструктор из r
    PolarCoordinates(double radius);
    // Конструктор из r и phi
    PolarCoordinates(double radius, double ygol);

    double get_x();
    double get_r();
    double get_phi();
    double get_y();
    double distance(PolarCoordinates& my);
    // Перегруженный ввод и вывод
    friend std::istream& operator >> (std::istream& in, PolarCoordinates& r);
    friend std::ostream& operator << (std::ostream& out, const PolarCoordinates& r);
};

using namespace std;
PolarCoordinates PolarCoordinates::operator + (PolarCoordinates& h) 
{
    PolarCoordinates temp(*this);
    temp += h;
    return temp;
}
PolarCoordinates& PolarCoordinates::operator += (PolarCoordinates& h)
{
    double x = get_x() + h.get_x();
    double y = get_y() + h.get_y();
    r = sqrt(x * x + y * y);

    if (r == 0)
    {
        phi = 0;
    }

    if ((x > 0) && (y >= 0))
    {
        phi = atan(x / y);
    }

    if ((x > 0) && (y < 0))
    {
        phi = atan(x / y) + 2 * M_PI;
    }

    if ((x < 0) && (y < 0))
    {
        phi = atan(x / y) + M_PI;
    }

    if ((x == 0) && (y > 0))
    {
        phi = M_PI / 2;
    }

    if ((x == 0) && (y < 0))
    {
        phi = (M_PI) / 2;
    }

    if ((x == 0) && (y == 0))
    {
        phi = 0;
    }

    return *this;
}
PolarCoordinates PolarCoordinates::operator - (PolarCoordinates& h)
{
    PolarCoordinates temp(*this);
    temp -= h;
    return temp;
}
PolarCoordinates& PolarCoordinates::operator -= (PolarCoordinates& h)
{
    double x = get_x() - h.get_x();
    double y = get_y() - h.get_y();

    r = sqrt(x * x + y * y);

    if (r == 0)
    {
        phi = 0;
    }

    if ((x > 0) && (y >= 0))
    {
        phi = atan(x / y);
    }

    if ((x > 0) && (y < 0))
    {
        phi = atan(x / y) + 2 * M_PI;
    }

    if ((x < 0) && (y < 0))
    {
        phi = atan(x / y) + M_PI;
    }

    if ((x == 0) && (y > 0))
    {
        phi = M_PI / 2;
    }

    if ((x == 0) && (y < 0))
    {
        phi = (M_PI) / 2;
    }

    if ((x == 0) && (y == 0))
    {
        phi = 0;
    }

    return *this;
}
PolarCoordinates::PolarCoordinates(const PolarCoordinates& a)
{
    r = a.r;
    phi = a.phi;
}
PolarCoordinates::PolarCoordinates()
{
    r = 0;
    phi = 0;
}

PolarCoordinates::PolarCoordinates(double radius)
{
    r = radius;
    phi = 0;
}

PolarCoordinates::PolarCoordinates(double radius, double ygol)
{
    r = radius;
    phi = ygol;
}

double PolarCoordinates::get_x()
{
    return r * cos(phi);
}

double PolarCoordinates::get_y()
{
    return r * sin(phi);
}

double PolarCoordinates::get_r()
{
    return r;
}

double PolarCoordinates::get_phi()
{
    return phi;
}

double PolarCoordinates::distance(PolarCoordinates& my)
{
    return (sqrt((r * cos(phi) - my.r * cos(my.phi)) * (r * cos(phi) - my.r * cos(my.phi)) +
        (r * sin(phi) - my.r * sin(my.phi)) * (r * sin(phi) - my.r * sin(my.phi))));
}

istream& operator >> (istream& cin, PolarCoordinates& r)
{
    cin >> r.r >> r.phi;
    return cin;
}

ostream& operator << (ostream& out, const PolarCoordinates& r)
{
    out << r.r << " " << r.phi;
    return out;
}

using namespace std;
int main()
{
    HWND hwnd = GetConsoleWindow();
    HDC hdc = GetDC(hwnd);

    for (float i = 0; i < 500; i++) // X
    {
        SetPixel(hdc, 300, i, RGB(255, 255, 255));
    }
    for (float i = 0; i < 700; i++) // Y
    {
        SetPixel(hdc, i, 250, RGB(255, 255, 255));
    }

    for (double i = 0; i <= 2 * M_PI + 0, 1; i += (M_PI / 8) * 0.0001)
    {
        PolarCoordinates point(3 * sin(6 * i), i); // r, fi // сюда вводится уравнение
        SetPixel(hdc, 35 * point.get_x() + 300, -35 * point.get_y() + 250, RGB(255, 255, 255));
    }
    cin.ignore();
    return 0;
}
