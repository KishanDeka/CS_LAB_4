#include <iostream>
using namespace std;

void check(int a)
{ int m, r, k, c, d, q, n, t, e, f, g;
  k=0;
  for (e=2;e<=a/2;e++) { r=a%e;
                        if (r==0) {k++;}
                       }
  if (k==0) { cout << "The number is prime number."<<endl;}
  d=a;
  q=0;
  t=0;
  n=a;
  while (n>0) { 
                n=n/10;
                t++;
              }
  while (d>0) { c=d%10;
                  d=d/10;
                  g=1;
                  for (f=1;f<=t;f++)
                      { g=c*g;} 
                  q=g+q; }
  if (q==a) {cout << "The number is an armstrong number."<<endl;}
}
int main ()
{ int x;
  cout << "enter a positive integer : ";
  cin >> x;
  check(x);
return 0;
}
