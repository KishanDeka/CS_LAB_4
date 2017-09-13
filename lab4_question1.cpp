#include <iostream>
using namespace std;

int cube(float a, int b)
{int c, i;
 c=1;
 for (i=1;i<=b;i++)
{ c=a*c;}
return c;
}
int main () {
 float x,k;
 int y;
 y=3;
 cout << "enter a  number :"<< endl;
 cin >> x;
 k= cube(x,y);
 cout << k;
 return 0;
}
