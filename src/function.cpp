#include "head.hpp"       /*    This function calculates and prints the day 				of the week using the following formula*/ 
int date(int d,int m,int y)
{
    int a;
    int R;
    a = (14 - m) / 12;
    y = y - a;
    m = m + 12 * a - 2;
    R = 7000 + (d + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12);
    R=R % 7;
	Switch(R);

return 0;
}
