// Patricia Figueroa
// A 3-dimensional point class!
//class declaration for the class Point
// Coordinates are double-precision floating point.

#ifndef __POINT_H
#define __POINT_H

class Point {
    
private:
    double x, y, z; //points for a three dimensional space

public:
    // Constructors
    Point();                      // default constructor
    Point(double x, double y, double z);    // three-argument constructor

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;
double distanceTo(const Point&)const; // new member function distanceTo

};

#endif // __POINT_H
