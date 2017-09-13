#include <iostream>
using namespace std;

float diam(float r)
{ float d;
  d= 2*r;
  return d;
}
float circ(float r)
{ float c;
  c=2*3.14159*r;
  return c;
}
float area(float r)
{ float A;
  A=3.14159*r*r;
  return A;
}
int main ()
{ float R, x, y, z;
  cout << "enter the radius of circle :";
  cin >> R;
  x=diam(R);
  y=circ(R);
  z=area(R);
  cout << "the diameter of the circle is = "<< x<<endl;
  cout << "the circumference of the circle is = "<< y<<endl;
  cout << "the area of the circle is = "<< z <<endl;
return 0;
}
