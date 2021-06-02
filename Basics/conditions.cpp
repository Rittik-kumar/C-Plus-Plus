#include<bits/stdc++.h>
using namespace std;

int main()
{ int a=2;
  int b=3;
  int c=4;
  cout<< (a<=b) <<endl;

  // && ||
  cout<< ((b>a) && (b>c)) <<endl;
  cout<< ((b>a) || (b>c)) <<endl;

  //if
  int n;
  cin>>n;
  if(n%2==0)
  {
      cout<< "Divisible by 2" <<endl;
  }
  else if(n%3==0)
  {
      cout<< "Divisible by 3" <<endl;
  }
  else
  {
      cout<< "Not divisible by 2 and 3" <<endl;
  }
}
