#include<bits/stdc++.h>
using namespace std;

int main()
{ // cin cout
  string str = "Hello";
  string str1;
  cin>> str1;
  cout<< str << endl;
  cout<< str1 << endl;

  // concatination
  string result =str + str1;
  cout<< result << endl;

  // comparison
  if(str == str1)
    cout<< "Equal" << endl;
  else
    cout<< "Not equal" << endl;

  // to access specific character of string
  cout<< str[0] << endl;
  cout<< str[1] << endl;
  cout<< str[2] << endl;
  cout<< str[3] << endl;
  cout<< str[4] << endl;

  // to replace character of string
  str[0] = 'A';
  cout<< str << endl;
  str[0] = 'H';

  //  to find size of string
  cout<< str.size() << endl;
}
