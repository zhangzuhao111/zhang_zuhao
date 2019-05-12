#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class Rectangle
{
public:
   Rectangle( double = 1.0, double = 1.0 );
   void setWidth( double w );
   void setLength( double l );
   double getWidth();
   double getLength();
   double perimeter();
   double area();
private:
   double length;
   double width;
};

#endif
