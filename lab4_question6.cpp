#include <iostream>
using namespace std;

void prime(int a, int b)
{ int c, d, k, r;
  for (c=a+1;c<b;c++)
  { k=0;
    for (d=2;d<=c/2;d++)
    { r=c%d;
      if (r==0) {k++;
                 break;}
    }
  if (k==0) {cout << c<<" ";}
  }
}

int main ()
{ int x, y;
  cout << "enter any two number :"<<endl;
  cin >> x>> y;
  cout << "prime numbers are : "<< endl;
  prime(x,y);
return 0;
}
