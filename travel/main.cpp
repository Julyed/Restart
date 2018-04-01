//travel.cpp -- using structures with functions
#include <iostream>

struct travel_time
{
    int hours;
    int minutes;
};

const int MINS_PER_HOUR = 60;

travel_time sum(const travel_time a, const travel_time b);
void show_time(const travel_time a);

using namespace std;

int main()
{
    travel_time day1 = {1, 30};
    travel_time day2 = {3, 40};
    travel_time trip = sum(day1, day2);
    show_time(trip);

    travel_time day3 = {4, 20};
    show_time(sum(trip, day3));

    return 0;
}

travel_time sum(const travel_time a, const travel_time b)
{
    travel_time res;
    res.minutes = (a.minutes + b.minutes) % MINS_PER_HOUR;
    res.hours = (a.minutes + b.minutes) / MINS_PER_HOUR + a.hours + b.hours;
    return res;
}
void show_time(const travel_time a)
{
    cout << "The sum of these days is " << a.hours << " hours and " << a.minutes << " minutes.\n";
    return;
}
