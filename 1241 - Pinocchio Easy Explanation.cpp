/*
   think like this 
   
   given the size of nose 
   
   2  12 13 15
   
   from 2 to 12 there are two of 5 so --> (12 -2) / 5 --> basically finding number of 5 ina given range
   
   but from 12 to 13 there are zero number of 5 but if u do ceil (a[i] - a[i-1]/5) it still gonna give 1 so nothing to worry 
   
   add them up by keeping a  variable++ .
   

*/

#include<bits/stdc++.h>
#include<cmath>
using namespace std ;
 
int main()
{
    int i, j, T , N , lies = 0 , temp ;
 
    cin >> T ;
 
    for(i = 1 ; i<= T ; i++)
    {
        lies = 0;
        cin >> N ;
        int a[N];
 
        for(j = 0 ; j < N ; j++)
        {
            cin >> a[j] ;
        }
 
        temp = a[0] - 2 ;
 
        lies = ceil( temp / 5.0);
 
        for(j = 1 ; j < N ; j++)
        {
            temp = a[j] - a[j -1];
            lies = lies + ceil(temp / 5.0);
        }
 
        printf("Case %d: %d\n" , i , lies);
 
 
    }
    return 0 ;
 
}
