#include<iostream>
//#include "class.h"

using namespace std;

class Point {
public:
  double x;
  double y;

  Point(){
    x=0.0;
    y=0.0;
    cout << "default constructor" << endl;
  }

  Point(double nx, double ny){
    x=nx;
    y=ny;
    cout << "2-parameters constructor" << endl;
  }

void offset(double offsetX, double offsetY){
  x += offsetX;
  y += offsetY;
  }

void print() {
  cout << "(" << x << "," << y << ")" ;
  }

};


class Vector {
public:
  Point startPoint;
  Point endPoint;

Vector(double sx,double sy, double ex, double ey){
  startPoint.x = sx;
  startPoint.y = sy;
  endPoint.x = ex;
  endPoint.y = ey;
  cout << "2D Vector Created" << endl;
}

Vector(){
  startPoint.x = 0;
  startPoint.y = 0;
  endPoint.x = 0;
  endPoint.y = 0;
  cout << "Null Vector Created" << endl;
}

void offset(double offsetX, double offsetY){
  startPoint.offset(offsetX, offsetY);
  endPoint.offset(offsetX,offsetY);
  }


void print() {
  startPoint.print();
  cout << " -> ";
  endPoint.print();
  cout << endl;
  }
};

// A vector consists of 2 points
// A point consists of  2 coordinates/components


//void Point::offset(double offsetX, double offsetY){
//  x += offsetX;
//  y += offsetY;
//}

//void Point::print(){
//  cout << "(" << x << "," << y << ")" ;
//}

// Constructor Function for Point Class
//Point::Point(double nx, double ny){
//  x=nx;
//  y=ny;
//  cout << "2-parameter constructor" << endl;
//  }


//void Vector::offset(double offsetX, double offsetY){
//  startPoint.offset(offsetX, offsetY);
//  endPoint.offset(offsetX, offsetY);
//}

//void Vector::print(){
//  startPoint.print();
//  cout << " -> ";
//  endPoint.print();
//  cout << endl;
//}
void printVector(double x0, double x1, double y0, double y1) {
    cout << "(" << x0 << "," << y0 << ") -> (" << x1 << "," << y1 << ")" << endl;
   }
void offsetVector(double &x0, double &x1, double &y0, double &y1, double offsetX, double offsetY) {
   x0 = x0 + offsetX; // - > the same as x0 = x0 + offsetX
   x1 = x1 + offsetX;
   y0 = y0 + offsetY;
   y1 = y1 + offsetY;
  }

void offsetPoint(Point &p, double x, double y) {
  p.x = p.x + x;
  p.y = p.y + y;
}

void offsetVector(Vector &v, double offsetX, double offsetY){
  v.startPoint.x = v.startPoint.x + offsetX;
  v.endPoint.x = v.endPoint.x + offsetX;
  v.startPoint.y = v.startPoint.y + offsetY;
  v.endPoint.y = v.endPoint.y + offsetY;
}


//void printVector(Vector v){
//  cout << "(" << v.startPoint.x << "," << v.start.y << ") -> (" << v.end.x << "," << v.end.y << ")" << endl;
//}

int main() {
  Point p;
  Point q(2.0,3.0);
  //p.x = 3.0;
  //p.y = 4.0;
  //offsetPoint(p,1.0,2.0); // does nothing
  //cout << "(" << p.x << "," << p.y << ")" <<endl;
  Vector vec(1.2,0.4,2.0,1.6);
  Vector vec2;
  //Vector vec2;
  //vec.startPoint.x = 1.2;
  //vec.startPoint.y = 0.4;
  //vec.endPoint.x = 2.0;
  //vec.endPoint.y = 1.6;
  //offsetVector(vec,1.0,1.5);
  //printVector(vec);
  //vec.print();
  vec.print();
  vec.offset(1.0,2.0);
  vec2 = vec;
  vec2.print();
  //vec.print();
  //Vector vecoff = vec.offset(1.0,2.0);




  //Vector vec2;
  //vec2.start = vec1.start;
  //vec2.start.x = 7.0;


  //double xStart = 1.2;
  //double xEnd = 2.0;
  //double yStart = 0.4;
  //double yEnd = 1.6;
  //offsetVector(xStart,xEnd,yStart,yEnd,1.0,1.5);
  //printVector(xStart, xEnd, yStart, yEnd);
}
