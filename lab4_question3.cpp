#include <iostream>
using namespace std;

float max(float a, float b)
{ float max;
  if (a-b > 0) { max=a;}
  else {max = b;}
return max;
}

float min(float a, float b)
{ float min;
  if (a-b<0) { min = a;}
  else { min = b;}
return min;
}

int main ()
{ float x, y, m, n;
  cout << "enter any two number :"<<endl;
  cin >> x >> y;
  m=max(x,y);
  n=min(x,y);
  cout << "maximum number is = "<<m<<endl;
  cout << "minimum nimber is = "<<n;
return 0;
}

 
