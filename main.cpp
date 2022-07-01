#include <iostream>
#include <string>
using namespace std;

string FirstReverse(string str) {
  
  // code goes here
  string temp="";
  int size=str.size();
  for(int i=0;i<size;++i)
    temp += str[size-1-i];
  return temp;

}

int main(void) { 
   
  // keep this function call here
  cout << FirstReverse(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}
