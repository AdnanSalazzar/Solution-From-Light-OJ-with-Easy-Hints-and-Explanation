/*
  For this you have to observe factors of numbers
  
  1. Numbers that are not power of 2 
  2. Numbers that are not odd number 
  
  Number cannot be odd number because then a even multiple cannot be found 
  so , 
  
  First check if a number is odd or not --> if( number & 1 ) --> bitwise check to see if a number is odd or not 
  
  now observe 
  For number 10 
  multiples are 
  
  1 2 5 10 
  
  for these kind of numbers 
  if u keep on dividing 10 / 2 there will be a number where u will encounter an odd multiple 
  and from beginning there has to be a number starting from multiple 2 ... so 
  
  keep on dividing from 2 from end 
  and start multiplying 2 from start 
  
  there will be a point where "odd variable" will meet an odd number and "even variable" will meet an even number 
  thus while loop ends all is left is output .
  
  
  
*/
#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
    unsigned long long int T, i, N, M, W, j , flag = 0 , odd  , even ;

    cin >> T ;

    for(i = 1 ; i <= T; i++)
    {
        cin >> W ;


        if( W & 1 )
        {
            cout <<"Case "<< i <<": " <<"Impossible"<<endl;
            continue;
        }

        odd = W / 2 ;
        even = 2 ;

        while(odd % 2 == 0 )
        {
            odd = odd / 2 ;
            even = even * 2 ;
        }

        cout <<"Case "<< i <<": " << odd <<" "<<even <<endl;


    }
    return 0 ;
}
