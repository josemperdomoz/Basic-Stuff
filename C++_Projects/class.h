
class Point {
public:
  double x;
  double y;
  Point(double nx,double ny);
  void offset(double offsetX, double offsetY);
  void print();

};

class Vector {
 public:
  Point startPoint;
  Point endPoint;
  void offset(double offsetX, double offsetY);
  void print();
};
