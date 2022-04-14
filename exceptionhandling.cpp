//exceptions provide a way to handle exceptional circumstances in programs(like runtime errors) by transferring control to special functions called handlers
//try should be immediately followed by catch,any nonsense between will cause an error.

#include<iostream>
using namespace std;
int main()
{
 try
 {
   throw 20;
   
   }
   
   catch(int p)
   {
      cout << p << endl;
      
      } }
