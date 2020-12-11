/*
  first of all no matter what happens the door wil open and close 3 times ... 3 +3 +3  
  person will get in and get out 5 + 5
  
  so 19 min will be taken no matter what 
  
  now difference in lift and position of u is abs(P -L) * 4 min
  
  and lif to go down is P * 4 min 
  
  thus sum them up !
  
*/

#include<bits/stdc++.h>
#include<cmath>
using namespace std ;

int main()
{
    int T , i , P , L  ,updown;

    cin >> T ;

    for(i = 1 ; i<= T ; i++)
    {
        cin >> P >> L ;

        updown  = abs( P - L)* 4;

        updown = updown + (4*P);

        printf("Case %d: %d\n" , i , updown + 19);

    }
    return 0 ;
}
