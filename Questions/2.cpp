/*
Pattern

Input:
2
5
3

Output:
*
* *
* * *
* * * *
* * * * *
*
* *
* * *
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{  int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>> n;

       for(int i=1;i<=n;i++)
       {
         for(int j=1;j<=i;j++)
          {
            cout<< "* ";
          }
         if(i==n)
          break;
         cout<< endl;
       }
    }

}
