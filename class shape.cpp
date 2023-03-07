#include <iostream>
using namespace std;
class Shape {
public:
  void print() {
    cout << "This is a shape." << endl;
  }
};

class Polygon : public Shape {
public:
  void print() {
    cout << "Polygon is a shape." << endl;
  }
};

class Rectangle : public Polygon {
public:
  void print() {
    cout << "Rectangle is a polygon." << endl;
  }
};

class Triangle : public Polygon {
public:
  void print() {
    cout << "Triangle is a polygon." << endl;
  }
};

class Square : public Polygon {
public:
  void print() {
    cout << "Square is a polygon." << endl;
  }
};
int main() 
{
  Shape s;
  Polygon p;
  Rectangle r;
  Triangle t;
  Square sq;

  s.print();
  p.print();
  r.print();
  t.print();
  sq.print();
}
