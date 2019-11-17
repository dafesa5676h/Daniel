#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    int area1, area2, inter, areaT, aux, a, b, c, d;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d %d %d %d", &x3, &y3, &x4, &y4);
    area1 = abs(x1 - x2) * abs(y1 - y2);
    area2 = abs(x3 - x4) * abs(y3 - y4);
    if (x1 > x2)
    {
        aux = x2;
        x2 = x1;
        x1 = aux;
    }
    if (y1 > y2)
    {
        aux = y2;
        y2 = y1;
        y1 = aux;
    }
    if (x3 > x4)
    {
        aux = x4;
        x4 = x3;
        x3 = aux;
    }
    if (y3 > y4)
    {
        aux = y4;
        y4 = y3;
        y3 = aux;
    }

    a = max(x1, x3);
    b = min(x2, x4);
    c = max(y1, y3);
    d = min(y2, y4);
    inter = max(0, (b - a)) * max(0, (d - c));
    areaT = area1 + area2 - inter;
    printf("%d\n", areaT);
}