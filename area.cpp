//
// Created by Patricia Figueroa on 2/5/16.
// computes area of three dimensional triangle
//

#include "Point.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calculateArea(const Point &a, const Point &b, const Point &c)

{
    double semi_perimeter;
    double hypo;
    double opp;
    double adj;

    // sets variables for Area

hypo = c.distanceTo(a);
opp = a.distanceTo(b);
adj = b. distanceTo(c);

    // calculate semiperimeter
  semi_perimeter = (hypo + opp + adj)/2;

    // calculate area

    return sqrt(semi_perimeter * (semi_perimeter-hypo)*(semi_perimeter - opp)* (semi_perimeter - adj));




}
