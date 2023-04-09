/* a program that accepts a number in decimal,binary,octal and hexadecimal then converts it to any of those*/
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

string convertToBase(int decimal,int base)
{
    string resultArray = "";       //initializing an empty string to store the remainder
    int remainder;
    while (decimal>0){
        remainder=decimal%base;
        decimal/=base;
        if (base==16&& remainder>=10){
            switch(remainder){
            case 10: resultArray +='A';
            break;
            case 11: resultArray +='B';
            break;
            case 12: resultArray +='C';
            break;
            case 13: resultArray +='D';
            break;
            case 14: resultArray +='E';
            break;
            case 15: resultArray +='F';
            break;
            }
        }
        else {
            resultArray+=to_string(remainder);
        }
    }

    reverse(resultArray.begin(),resultArray.end());
    return resultArray;
}



//converts any of the binary,octal and hexadecimal to decimal form
int convertTodecimal(string inputValue,int base)
{
    int decimalValue=0, power=0;
    if (base==16){
        int n=0;
        power= inputValue.length() -1;

        while (n< inputValue.length()){
            if(inputValue[n]>='A'&& inputValue[n] <='F'){
                decimalValue+=(inputValue[n] - 55) * pow(16,power);
            }
            n++;
            power--;
        }
    }
    else {
          int inputNumber = stoi (inputValue);
          while(inputNumber !=0){
            int remainder=inputNumber % 10;
            inputNumber/=10;
            decimalValue+= remainder * pow(base,power);
            power++;
          }
    }
    return decimalValue;

}


int main(){
      int decimal,base;
      string inputValue;
      string result = convertToBase(decimal,base);
      cout<<result<<endl;
      int decimalValue =convertTodecimal(inputValue,base);
      cout<<decimalValue<<endl;
      return 0;
}








