/*
  to do this draw a chess table 
  
  observe ........
  a bishop will only capture another bishop if both their coordinate sum up to be odd or even each 
  
  if a bishop at  2 , 3  .... 5 --> odd
           and
   another bishop 3 , 2 ...  5  --> odd 
   
  they will collide 
  
  if one is odd another is even then it is impossioble.
  
  Secomnd Observation 
  
  if the two bishop are in the same line(diagonally)  then their difference of moves are same 
  try it out !
  
*/

#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
 
    int T, i, x1, x2, y1, y2 ;
    cin >> T ;
 
    for(i = 1 ; i <= T ; i++)
    {
        cin >> x1 >>y1 >> x2 >> y2 ;
 
        if((x1 + y1) % 2 != (x2 + y2) % 2)
        {
            cout << "Case " << i<< ": " << "impossible"  << endl ;
        }
 
        else
         {
               if((abs(x2 - x1) == abs(y2 - y1)))
           {
                cout << "Case " << i<< ": " << 1  << endl ;
 
        }
            else
            {
               cout << "Case " << i<< ": " << 2  << endl ;
 
             }
    }
 
}
return 0 ;
}
