#include <iostream>
using namespace std;

int check(int a)
{ int b=2, c;
  c= a%b;
  return c;
}

int main ()
{ int x, k;
  cout << "enter a integer number : ";
  cin >> x;
  k=check(x);
  if (k==0) {cout << "the number "<<x<<" is even.";}
  else {cout << "the number " <<x<< " is odd.";}
return 0;
}
