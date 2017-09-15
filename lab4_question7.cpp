#include <iostream>
using namespace std;

void strong(int A, int B)
{    int a, b, r, e, i, d;
     for (a=A;a<=B;a++)
    { b=a;
      d=0;
     while (b>0)
       {   r=b%10;
           e=r;
           for (i=e-1;i>0;i--) {e=e*i;}
           d=d+e;
           b=b/10;
       }
      if (d==a) {cout << a <<endl;}
     }

}

int main ()
{   int x, y;
    cout << "Enter the endpoints of the interval : "<<endl;
    cin >> x>>y;
    cout<< "The strong numbers between "<<x<<" and "<<y<<" are : "<<endl;
    strong(x,y);
return 0;
}
