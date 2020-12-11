/*
    Draw two cubes intersectedly 
    
    then observe !
*/


#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    int i , j , k , T ,no_of_cube , vol ;
    int a[6] , b[6] ;
    cin >> T ;
 
    for(i = 1 ; i<= T ; i++)
    {
        cin >> no_of_cube ;
 
        for(j = 0 ; j < no_of_cube ; j++)
        {
            for(k = 0 ; k <6 ; k++)
            {
                cin >> a[k];
                if(j == 0)
                {
                    b[k] = a[k];
                }
                if(j > 0)
                {
                    b[0] = max (b[0] , a[0]);
                    b[1] = max (b[1] , a[1]);
                    b[2] = max (b[2] , a[2]);
                    b[3] = min (b[3] , a[3]);
                    b[4] = min (b[4] , a[4]);
                    b[5] = min (b[5] , a[5]);
                }
            }
        }
        vol = ((b[3] - b[0]) * ( b[4] - b[1]) * (b[5] - b[2]));
            if(vol> 0 )
            {
                cout <<"Case " << i <<": "<< vol<<endl;
            }
 
            else
            {
                cout <<"Case " << i <<": "<< 0<<endl;
            }
 
 
 
    }
    return 0 ;
 
}
