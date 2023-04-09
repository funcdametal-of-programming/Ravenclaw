//A program to convert any integer number from decimal to binary, octal and hexadecimal and vise-versa.
#include <iostream>
#include <cmath>
#include <cstdlib>
#include<cstring>
#include<algorithm>

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
{
 // if the user choose decimal.
case 1:
{
      cout<<"To which base do you want to change it to. "<<endl;
      cout<<"1) To binary.\n2) To Octal.\n3) To Hexa-decimal."<<endl;
      int change;
      cin>>change;

switch (change)
    {
        case 1:
        {
//this block is for decimal to binary conversion.
{


     
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

       /*operation of conversion using a nested for loop to recursively devide by 2 
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
            int Tnumber = abs(number); // temporary variable so that we dont alter the original input. abs() is absolute value. 
            int j; 

                    for (j = 0; Tnumber>0; ++j)  
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
       break;
        }
        case 2:
        {
    //this block is for decimal to octal.
 {
    int sizeO; // the size of the array we will use for number of max octal digits.


     //for positive numbers.   
     if (number >= 0) 

      {
        //specifyiing how many bits we will need.
        if (number <= 511 ) 
             {
                 sizeO=3;
             }
         else 
             {
                 for (int i; pow(8,i) <= number; ++i)
                 {
                    sizeO=i;
                 }
             }

       /*operation of conversion using a nested for loop to recursively devide by 8
        and store the remainder in an aray.*/
            
            
            int octal [sizeO]; // aray to hold the resultant binary.
            int Tnumber = number; // temporary variable so that we dont alter the original input. 
            int j; 

                    for (j = 0; Tnumber>0; ++j)  
                    {
                        octal[j] = Tnumber%8;
                         Tnumber /=8;
                    }

                    //assignning the result reversed.
                   
                    cout<<"\nthe octal equivalent of the number you entered is:  ";
                   
                    for ( j= j-1 ; j>=0 ; --j)
                    {
                        cout<<octal[j];
                    }

     }
    

     //for  negative numbers.
     else 
      {
        //specifyiing how many bits we will need for negative nember.   
             if (number >= -511 ) 
             {
                sizeO=3;
             }
              else 
             {
                for (int i; pow(8,i) >= number; ++i)
                  {
                  sizeO=i;
                  }
             }


            int octal [sizeO]; // aray to hold the resultant binary.
            int Tnumber = abs(number); // temporary variable so that we dont alter the original input. abs() is absolute value.
            int j; 


                     //recursively dividing by 8.
                    for (j = 0; Tnumber>0; ++j)  
                    {
                         octal[j] = Tnumber%8;
                         Tnumber /=8;
                    }

                    //assignning the result reversed.
                   
                    cout<<"\nthe octal equivalent of the number you entered is:  -";
                   
                    for ( j= j-1 ; j>=0 ; --j)
                    {
                        cout<<octal[j];
                    }
            

 }
 
 
 
 }
        break;
        }
        case 3:
        {
//this block is for decimal to hexa-decimal.
{

int i=0,remainder,digit,j;
char hexadecimalNumber[100];

            while(number>0){
             int remainder = number % 16;
        if (remainder < 10)
            hexadecimalNumber[i] = remainder + 48;
        else
            hexadecimalNumber[i] = remainder + 55;
        number = number/ 16;
        i++;
            }
            cout<<"The Hexa-decimal equivalent of the number you entered is: ";
        for (int j = i - 1; j >= 0; j--)
    cout<< hexadecimalNumber[j];
    
    
          
  
}
        break;
        }
    }
break;
 }
case 2:
{

    int num16;
    int dec = 0, i = 0, rem,Num=number;
    bool test=true;// to check the input is valid

    while(Num)
        // process to check the input is appropriate for base 2
        {
            int y;
            y=Num%10;
            if(y<2)
                {
                    test&=true;
                }
            else
                {
                    test&=false;
                }
            Num/=10;
        }
    if(test)//process continue if valid base
        {
            while (number!=0)
            //convert to base 10
                {
                    rem = number % 10;
                    number/= 10;
                    dec += rem * pow(2, i);
                    ++i;
                }
            {
                int base2;
                string converted,z;
e:
                cout<<"to which do you want to change "<<endl;
                cout<<"1) decimal\n2) octal\n3)hexa decimal\n";
                cin>>base2;
                switch(base2)
                    {

                    case 1:
                    {
                        bool tester=dec<0;// to deal with negative numbers
                        if(dec==0)
                            {
                                cout<<"decimal representation is "<<dec;
                            }
                        else //
                            {
                                while(dec!=0)
                                    {
                                        dec=abs(dec);
                                        int y;
                                        y=dec%10;
                                        z=to_string(y);
                                        converted.append(z);
                                        dec/=10;
                                    }
                                reverse(converted.begin(),converted.end());
                                cout<<"decimal representation is ";
                            }


                        if(tester)
                            cout<<"-";
                        for(auto x:converted)
                            //print all elements of string
                            {
                                cout<<x;
                            }

                    }

                    break;
                    case 2:
                    {
                        bool tester=dec<0;
                        if(dec==0)
                            {
                                cout<<"Octal representation is "<<dec;
                            }
                        else
                            {
                                while(dec!=0)
                                    {
                                        dec=abs(dec);
                                        int y;
                                        y=dec%8;
                                        z=to_string(y);
                                        converted.append(z);
                                        dec/=8;
                                    }
                                reverse(converted.begin(),converted.end());
                                cout<<"octal representation is ";
                            }


                        if(tester)
                            cout<<"-";
                        for(auto x:converted)
                            {
                                cout<<x;
                            }

                    }

                    break;
                    case 3:
                    {
                        bool tester=dec<0;
                        if(dec==0)
                            {
                                cout<<"hexadecimal representation is "<<dec;
                            }
                        else
                            {
                                while(dec!=0)
                                    {
                                        dec=abs(dec);
                                        int y;
                                        y=dec%16;
                                        switch(y)
                                            {
                                            case 10:
                                                converted.append("A");
                                                break;
                                            case 11:
                                                converted.append("B");
                                                break;
                                            case 12:
                                                converted.append("C");
                                                break;
                                            case 13:
                                                converted.append("D");
                                                break;
                                            case 14:
                                                converted.append("E");
                                                break;
                                            case 15:
                                                converted.append("F");
                                                break;
                                            default:
                                                z=to_string(y);
                                                converted.append(z);
                                                break;
                                            }
                                        dec/=16;
                                    }
                                reverse(converted.begin(),converted.end());
                                cout<<"hexadecimal representation is ";
                            }


                        if(tester)
                            cout<<"-";
                        for(auto x:converted)
                            {
                                cout<<x;
                            }

                    }
                    break;
                    default://give chance to choose appropriate base
                        cout<<"invalid input"<<endl;
                        goto e;
                    }


            }

        }
        else{
                //improper input
            cout<<"invalid input"<<endl;
            main();
        }

}

}

return 0;
}