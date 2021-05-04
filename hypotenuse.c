/**
* The pythagorean theorem solving "c". Modified by Marvalena, 2021-05-04
*
**/
#include <math.h>

double hypotenuse(int a, int b)
{
    double c;

    c = sqrt(pow((double)a, 2) + pow((double)b, 2));
    return c;
}


