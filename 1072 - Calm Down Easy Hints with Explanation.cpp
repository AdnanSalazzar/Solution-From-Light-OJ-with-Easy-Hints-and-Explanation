/*
  This is Math with observation.
  
  remember we did sin theta = opposite / hypotaneous in calss 5 ?
  so,
  
  if u draw the diagram yoy will see -->  sin theta = r / (r-R)
  
  so to find theta 
  
  angle created by one circle  = 2 pie{total angle} / number of circle 
  
  to create the triangle we need half  the angle created by circle so , 
  
  angle created by one circle / 2
  or
  (2 pie{total angle} / number of circle )/2
  or
  pie{total angle} / number of circle
  
  so 
  theta = pie{total angle} / number of circle
  
  so 
  
  from line 7 
  sin theta = r / (r-R)
  u know everything except r .... rearrange it 
  u get this .
  small_radius = (sin(pi / number_of_bullets) * big_radius) / (sin(pi / number_of_bullets) +1 )
  
  if u still dont understand give me a comment in My Youtube channel The Dark Coders (link Below) I'll Explain by animation.
  https://www.youtube.com/channel/UC7SYiKGhxSuihRfYEOjk0Dg?view_as=subscriber

*/
#include<iostream>
#include<cmath>
#include<iomanip>
#define pi acos(-1)
using namespace std ;
int main()
{
    std::cout << std::setprecision(8)<<std::fixed ;
    int T , i ;
    double big_radius,number_of_bullets , small_radius;
    cin >> T ;
    for(i = 1 ; i <= T ; i++)
    {
        cin >> big_radius >> number_of_bullets ;

        small_radius = (sin(pi / number_of_bullets) * big_radius) / (sin(pi / number_of_bullets) +1 );

        cout <<"Case "<<i<<":"<<" " <<small_radius<<endl;

        
    }
return 0 ;
}
