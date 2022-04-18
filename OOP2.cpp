#include <iostream>
using namespace std;
int main() {

for (int row = 0; row < 5; row++) 
{ 
   if(row %2==0)
   {
    
     for (int col = 0; col <10 ; col++) 
    {
     cout <<"<";
    }
    cout << endl; 
  } 
  else {
  for (int col = 0; col <10 ; col++) 
  {
    cout <<">";
  }
  cout << endl; 
}}
  return 0;
}
