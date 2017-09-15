#include <iostream>
using namespace std;

void perfect(int a, int b)
{ int c, n, r, i, m;
  for (c=a+1;c<b;c++)
  { n=c;
    m=0;
	for(i=2; i<=c; i++)
	   { r=c%i;
	     n=c/i;
	     switch (r)
	     {
	         case 0: m=m+n;
	     }

       }
   if (m==c) {cout << c <<endl;}
  }
}
int main ()
{   int x, y;
    cout << "Enter the endpoints of the interval : "<<endl;
    cin >> x>>y;
    cout<< "The perfect numbers between "<<x<<" and "<<y<<" are : "<<endl;
    perfect(x,y);
return 0;
}
