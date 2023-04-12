#include <iostream>
#include <string>
using name space std;
int main() {
string hex;
int dec =0 , oct =0, bin =0, i =0,j =1;
cout <<"Enter a hexadecimal number: ";
  cin >> hex;
// convert hexadecimal to decimal
  for (int k= hex.length)()-1; k >=0; k--) {
    if (hex[k] >='0' && hex[k] <= '9') {
      dec += (hex[k] -48)*j;
    }else if (hex[k] >='A'&& hex[k])<= 'F'){
         dec+=( hex[k] -55)*j;
    }else if (hex[k] >='a'&&hex[k] <='f') {
       dec += (hex[k]-87)*j;
     }
    j *= 16;
    }
     //convert decimal to octal
  j =1 ;
  while (dec !=0) {
     oct += (dec % 8) *j;
      dec /=8;
       j *=10;
  }
  // convert decimal to binary
    j = 1;
   while (dec !=0) {
      bin += (dec % 2)*j;
      dec/=2;
     j *=10; 
   }
  cout << "Decimal equivalent:" << dec << endl; 
  cout << "Octal equivalent:" << oct << endl;
  cout << "Binary equivalent:" <<bin <<endl;
  return 0
  }
