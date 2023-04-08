//A program to convert any integer number from decimal to binary, octal and hexadecimal and vise-versa.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int short unsigned type;  
  int number;

//prompting the user to input a number.
a:
cout<<"This is a program that converts decimal to binary,octal and hexadecimal and vice-versa."<<endl;
cout<<"\nEnter a number to be converted"<<endl;
cin>>number;

//specifying the base of the number the user entered.
b:
cout<<"What is the base of the number you entered.\n enter 1 if it is decimal. 2 for binary... "<<endl;
cout<<"1)Decimal."<<endl<<"2)Binary."<<endl<<"3)Octal."<<endl<<"4)Hexa-decimal."<<endl;
cin>>type;

       //contigency for an unwanted input in the type specification.
     if(type < 0 || type > 4)
        {
            char cont;
            cout<<"You can only enter numbers from 1 - 4 to choose."<<endl;
        c:  cout<<"Press Y to choose base again or\nN to restart the whole program."<<endl;
             cin>>cont;
                if (cont == 'y' || cont == 'Y')    
                {
                    goto b;
                }    
                else if (cont == 'n' || cont == 'N')    
                {
                     goto a;
                }  
                else 
                {
                    cout<<"You have entered the wrong character!!"<<endl;
                    goto c;
                }
                
        } 
        


 //the user choose correctly.
 switch (type)
 
 // if the user choose decimal.
 
 case 1:
 {
      
       int sizeO; // the size of the array we will use for number of max octal digits.
       int sizeH; // the size of the array we will use for number max hexa-decimal digits.


//this block is for decimal to binary conversion.
{

       int rem; // 'rem' for remainder.
       int sizeB; // the size of the array we will use for number of max binary digits or bits.


    //for positive numbers.   
     if (number >= 0) 

      {
        //specifyiing how many bits we will need.
        if (number <= 255 ) 
             {
                 sizeB=8;
             }
         else 
             {
                 for (int i; pow(2,i) <= number; ++i)
                 {
                    sizeB=i;
                 }
             }

      /*operation of conversion using a nested for loop inside a while loop to recursively devide by 2 
      and store the remainder in an aray.*/
            
            
            int binary [sizeB]; // aray to hold the resultant binary.
            int Tnumber = number; // temporary variable so that we dont alter the original input. 
            int j; 

                    for (j = 0; Tnumber>0; ++j)  
                    {
                        binary[j] = Tnumber%2;
                         Tnumber /=2;
                    }

                    //assignning the result reversed.
                   
                    cout<<"the binary equivalent of the number you entered is:  ";
                   
                    for ( j= j-1 ; j>=0 ; --j)
                    {
                        cout<<binary[j];
                    }

     }
    

     //for  negative numbers.
     else 
      {
        //specifyiing how many bits we will need for negative nember.   
             if (number >= -255 ) 
             {
                sizeB=8;
             }
              else 
             {
                for (int i; pow(2,i) >= number; ++i)
                  {
                  sizeB=i;
                  }
             }


            int binary [sizeB]; // aray to hold the resultant binary.
            int Tnumber = number; // temporary variable so that we dont alter the original input. 
            int j; 

                    for (j = 0; Tnumber<0; ++j)  
                    {
                         binary[j] = Tnumber%2;
                         Tnumber /=2;
                    }

                    //assignning the result reversed.
                   
                    cout<<"the binary equivalent of the number you entered is:  -";
                   
                    for ( j= j-1 ; j>=0 ; --j)
                    {
                        cout<<binary[j];
                    }




      }
     
}    
    

 }









return 0;
}