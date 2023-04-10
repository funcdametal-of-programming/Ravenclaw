//how to convert octal to binary and decimal
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int convertToDecimal(int octal, int base)
{
    int remainder, n=0;
     int decimalValue=0;

        while(octal!=0){
            remainder=octal%10;
            octal/=10;
        decimalValue+=remainder * pow(8,n);
            ++n;

        }
        return decimalValue;
}

int convertToBinary(int octal,int base)
{
     int remainder,n=0;
     int decimalValue=0;
     long binaryValue=0;

     while(octal!=0) {
         remainder=octal%10;
            octal/=10;
        decimalValue+=remainder * pow(8,n);
            ++n;
     }

    n=1;
        while(decimalValue!=0){
            remainder =decimalValue%2;
            decimalValue/=2;
            binaryValue+=remainder*n;
            n*=10;
     }

    return binaryValue;

}

int main()
  {

    int octal=0, base=0;
     cout<<"enter an octal number: ";
    cin>>octal;
    int decimal = convertToDecimal(octal,base);
        cout << "decimal value is "<< decimal << endl;
    int binary = convertToBinary(octal,base);
        cout << "binary value is"<< binary << endl;
    return 0;
  }



