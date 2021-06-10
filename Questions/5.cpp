/*
 To reverse given string
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{ string str;
  cin>> str;
  string str_rev;

  // method 1
  for(int i=str.size()-1;i>=0;i--)
  { str_rev = str_rev + str[i];
  }
  cout << str_rev << endl;

  //method 2
  string str1;
  cin>> str1;
  string str_rev1;
  for(int i=str1.size()-1;i>=0;i--)
  { str_rev1.push_back(str1[i]);
  }
  cout << str_rev1 << endl;
}
