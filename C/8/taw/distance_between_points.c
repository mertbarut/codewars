#include <math.h>

typedef struct Point {
    double x;
    double y;
} point;

double distance_between_points(point a, point b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}