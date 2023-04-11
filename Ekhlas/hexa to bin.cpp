#include <iostream>
#include <string>
#include <bitset>

using namespace std;
int main (){
  
 string hexNum;
  cout << "Enter a hexadecimal number: ";
  cin>> hexNum;
  int decNum = stoi(hexNum, nullptr, 16);
  bitset<32> binNum(decNum);
  
  cout << "Binary equivalent: " << binNum.to_string().substr(binNum.to_string().find('1')) << endl;
  
return 0;}
