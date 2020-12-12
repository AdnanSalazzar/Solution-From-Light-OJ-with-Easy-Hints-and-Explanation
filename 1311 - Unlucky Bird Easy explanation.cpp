/*
  use the velocity formula from class in 9 and 10 
  v^2 = U^2 + 2 a s 
  speed = distance / time
  
  find distance of both the train to stop then add 
  
  find the max time for birds to fly then use speed = distance / time.
  
*/
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
 
int main()
{
    double v1 , v2 , v3 , a1 , a2 ,distance_bird , d1 , d2 ,t1 , t2 , t  ;
    int i , T ;
    cin >> T ;
 
    for(i =1 ; i<=T ; i++)
    {
        cin >> v1 >> v2 >> v3 >> a1 >> a2 ;
 
        t2 = v1 / a1;
        t1 = v2 / a2 ;
 
        t = max(t1 , t2);
        distance_bird = t * v3 ;
 
        d1 = (v1 * v1) / (2 * a1);
        d2 = (v2 * v2) / (2 * a2);
 
       /* cout << "d1 ="<<d1;
        cout << "d2 ="<<d2;*/
        printf("Case %d: %.8lf %.8lf\n" ,i, d1+d2 ,distance_bird );
 
 
    }
return 0 ;
}
