#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class Rectangle
{
public:
   Rectangle( Point = Point( 0.0, 1.0 ), Point = Point( 1.0, 1.0 ),
      Point = Point( 1.0, 0.0 ), Point = Point( 0.0, 0.0 ) );


   void setCoord( Point, Point, Point, Point );
   double length();
   double width();
   void perimeter();
   void area();
   bool square();
private:
   Point point1;
   Point point2;
   Point point3;
   Point point4;
};

#endif // RECTANGLE_H_INCLUDED
