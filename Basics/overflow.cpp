#include<bits/stdc++.h>
using namespace std;

int main()
{ /* int, char, float, double, long int, long long int

     -10^9 < int < 10^9
     -10^12 < long int < 10^12
     -10^18 < long long int < 10^18
  */

  int a = 100000;
  int b = 100000;
  int c = a*b;
  cout<< c << endl;

  int mx = INT_MAX;
  cout<< mx<< endl;
  cout<< mx+1 << endl;

  // way 1
  long long int d = a* 1LL *b;
  cout<< d << endl;

  // way 2
  long long int x = 100000;
  long long int y = 100000;
  long long int z = x*y;
  cout<< z << endl;

  // double cannot store value more accurately
}
