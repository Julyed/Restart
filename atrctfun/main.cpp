// atrctfun.cpp -- functions with a structure argument
#include <iostream>
#include <cmath>

using namespace std;

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

void rec_to_polar(const rect *rec, polar *pol);
void show_polar(const polar *pol);

int main()
{
    polar *point_p = new polar;
    rect *point_r = new rect;

    cout << "Enter the rect point(q to quit): ";
    while(cin >> point_r->x >> point_r->y)
    {
        rec_to_polar(point_r, point_p);
        show_polar(point_p);
        cout << "Enter the next rect point(q to quit): ";
    }
    cout << "Done!" << endl;

    return 0;
}

void rec_to_polar(const rect *p, polar *ans)
{
    ans->distance = sqrt(p->x * p->x + p->y * p->y);
    ans->angle = atan2(p->y, p->x);
}

void show_polar(const polar *p)
{
    const double rad_to_deg = 57.29577951;

    cout << "The distance of this point is " << p->distance;
    cout << " and the angle is " << p->angle * rad_to_deg << ".\n";
    return;
}
