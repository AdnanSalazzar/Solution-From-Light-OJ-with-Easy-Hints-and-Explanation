/*
    There is a formula to find the volume of a cup 
    
    V = pie / 3 ( r1 ^2 + r2 ^2 + r1 * r2 )
    
    but we know r1 and r2 but we dont know r3 which is radius of the juice 
    
    so to find it 
    
    r1 - r2 = increased radius 
    
    h --> (r2 - r1)
    1 --> (r2 - r1)/h 
    p --> p * (r3 -r1) /h
    
    r2 = r1 + (p*(r2 -r1) /h)
    
*/


#include<bits/stdc++.h>
#include<cmath>
#include<iomanip>
#define PI acos(-1)
using namespace std ;
 
int main()
{
    double  r1,r2,r3 , p , h  , vol;
    int i , T ;
    std::cout << std::setprecision(9) << std::fixed;
 
 
 
    cin >> T ;
 
    for(i = 1 ; i <= T ; i++)
    {
        cin >> r3 >> r1 >> h >> p ;
 
        r2 = r1 + (p * (r3 - r1)/ h);
 
        vol = p *PI * (r2*r2 + r1 *r1 + (r2 *r1) );
 
        cout << "Case "<< i <<": " << vol/3 <<endl;
    }
    return 0 ;
}
