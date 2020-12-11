/*
  Simple math 
  
  Find the length of sqare -- > radius * 2 
  Area of sqare = leghth * length
  Find area of circle ---> acos(-2) * r * r
  
  Pie = acos(-1) 
  
  
  Then minus Area of square - Circle 
*/

#include<iostream>
#include<cmath>
#include<iomanip>
#define pi acos(-1)
using namespace std ;

int main()
{
    cout << setprecision(2) << fixed ;

     int i , T , j ;
     double radius , shaded_area   ;

     cin >> T ;

     for(i = 1 ; i <=T ; i++)
     {
         cin >> radius;
         shaded_area =  pow((radius * 2) , 2) - (pi * pow(radius , 2));

         cout << "Case " << i << ": " <<shaded_area <<endl ;
     }
return 0 ;
}
