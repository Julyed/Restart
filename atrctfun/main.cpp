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

polar rec_to_polar(rect rec);
void show_polar(polar pol);

int main()
{
    polar point_p;
    rect point_r;

    cout << "Enter the rect point; ";
    while(cin >> point_r.x >> point_r.y)
    {
        point_p = rec_to_polar(point_r);
        show_polar(point_p);
        cout << "Enter the next rect point; ";
    }
    cout << "Done!" << endl;

    return 0;
}

polar rec_to_polar(rect p)
{
    polar ans;

    ans.distance = sqrt(p.x * p.x + p.y * p.y);
    ans.angle = atan2(p.y, p.x);
    return ans;
}

void show_polar(polar p)
{
    const double rad_to_deg = 57.29577951;

    cout << "The distance of this point is " << p.distance;
    cout << " and the angle is " << p.angle * rad_to_deg << ".\n";
    return;
}
