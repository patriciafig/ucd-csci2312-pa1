//
// Created by Patricia Figueroa on 2/4/16.
//

 #include <cmath>
//allows sqrt function to be implemented
 #include "Point.h"

// Default Constructor

Point::Point ()
{
    x=0.0;
    y=0.0;
    z=0.0;

}
// constructor for the three arguments
Point::Point (double initX, double initY, double initZ)

{
    x=initX;
    y=initY;
    z=initZ;

}

// Mutators: stores/changes the value of member variables
void Point::setX(double newX)
{
    x=newX;

}
void Point::setY(double newY)
{
    y=newY;
}
void Point::setZ(double newZ)
{
    z=newZ;
}

//Accessors: gets the value from the class but does not change it
double Point::getX() const
{
    return x;
}
double Point::getY() const
{
    return y;

}
double Point::getZ() const
{
    return z;

}

//Evaluates the distance between two points and returns it as
// a double precision floating point

double Point::distanceTo(const ::Point::Point &) const
{
    
}