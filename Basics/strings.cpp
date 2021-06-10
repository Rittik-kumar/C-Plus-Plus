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

  // to find size of string
  cout<< str1.size() << endl;
  for(int i=0;i<str1.size();i++)
  {
      cout<<str1[i];
  }

  // getline
  string str2;
  getline(cin,str2);
  cout<< str2 << endl;

  int t;
  cin>> t;
  cin.ignore();
  while(t--)
  {
      string s;
      getline(cin,s);
      cout<< s << endl;
  }
}
