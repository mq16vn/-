#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
double x, y, luy_thua;
printf ("Moi nhap 2 so:");
scanf ("%lf %lf", &x, &y);
if (x < 0 && (y - (int)y != 0)) printf ("Ban da nhap sai tri");
else { luy_thua = pow (x, y);
printf ("Luy thua cua %5.2lf voi %5.2lf la %5.2lf", x, y,luy_thua); }

}