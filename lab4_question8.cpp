#include <iostream>
using namespace std;

void armstrong(int a, int b)
{ int c, d, f, g, q, n, t, r;
  for (c=a+1;c<b;c++)
  { n=c;
    t=0;
    q=0;
    d=c;
    while (n>0) { n=n/10;
                  t++;
                }

    while (d>0) { r=d%10;
                  d=d/10;
                  g=1;
                  for (f=1;f<=t;f++)
                      { g=r*g;}
                  q=g+q; }
    if (q==c) {cout << c<<endl;}
  }
}
int main () 
{   int x, y;
    cout << "Enter the endpoints of the interval : ";
    cin >> x>>y;
    cout<<"The armstrong Numbers between "<<x<<" and "<<y<<" are : "<<endl;
    armstrong(x,y);
return 0;
}
