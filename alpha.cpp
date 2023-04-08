//A program to display patern of numbers in the shape of X.

#include<iostream>

using namespace std;

int main()
{
  int row; // integer to store the number of raws of the patern
a:
   cout<<"\t\t__________PRINT NUMBER IN PATTERN OF X__________\t\t\n"<<endl;
   cout<<"Enter number of rows: "; 
    cin>>row;  //prompt the user to enter number of rows.
  
 if(row>0)  // NUmber of rows has to be positive. There is no such thing as 0 row or -1 rows.
  {
    
    /*This loop is for the upper part of the shape. which looks like an inverted triangle.
    it contains 3 loops with in it.
    it subtracts 1 from out input after all 3 loops are done.
    builds toward the inside.
    */
     for (int i=row; i>=0; --i)
     {
       

       //this loop is for calculating and putting the needed space before the numbers start to apear.
        for (int j= row - i;j>0; --j) 
        {
            cout<<"  "; //two space to acout for the space given after every number in the next loop.
        }

        for (int k=0; k<i; ++k)//listing the numbers in acending order, goes right up to the middle of the shape.
        {
            cout<<k<<" ";// just one space.(acouted for in lin 26 with the first loop)
        }

        for(int l=i; l>=0; --l) //listing the numbers in decending order starting from (l=i) which is the mid-point of the shape.
        {
            cout<<l<<" "; //again with one space.
        }
        cout<<endl; //jump to the next line before the loop starts. all 3 loops before this were performed on the same line.
    
     }

     /*This loop is for the lower part of the shape, looks like uppright triangle, but with a flat tip to connect it to the top.
      it contains 3 loops also.
      it adds 1 to to our variable i untill it is equivalent to the row number.
      builds from inside out
      */
     for (int i=1; i<=row; ++i)
     {
        //this loop calculates and putts the needed spaces before the numbers.
        for (int j = row - i; j>0; --j) 
        {
            cout<<"  "; //two spaces 
        }

          // this loop is for listing the numbers after the space loop right up to the middle in acending order.
        for (int k=0; k<i; ++k)
        {
            cout<<k<<" "; //only one space between the numbers here.
        }

          //this loop is for listing the rest of the numbers in the line starting from the middle in decending order till we hit 0.
        for (int l=i; l>=0; l--)
        {
            cout<<l<<" ";
        }

        cout<<endl; // start a new line.
     }
   
  
  
  }
else  // if the user enteres 0 or -ve number for the number of rows.
{
    
    cout<<"invalid input"<<endl;

}
    // incase the user wants to do it again.
  int again; 
    
    cout<<"DO YOU WANT TO TRY IT AGAIN? [Y/N]"<<endl;
    cin>>again;

    if (again == 'y' || again == 'Y')
      {
        goto a; // a is at the start of the program line 10. 
      }
    else if (again == 'n' || again == 'N')
    {
        cout<<" Have a good day."<<endl;
    }
    else       // if inputs other than Y,y,N or n are pressed it will be taken as a no.
    {
        cout<<" We will take that as a no\nHave a good day."<<endl;
    }





return 0;
}