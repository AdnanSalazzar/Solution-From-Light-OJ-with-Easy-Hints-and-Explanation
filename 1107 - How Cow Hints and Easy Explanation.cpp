/*
  This is implementation 
  
  Basically take input then make sure the Coordinate of the freaking cows are in the field 
  
  field space is found by 
  
  (x1 < cx && x2 > cx) && ( y1 < cy && y2 > cy)
  
  draw it in ur note book to see better 
  
  if the coordinate of cow is inside that condition then it is TRUE.

*/

#include<iostream>
using namespace std ;

int main()
{
    int T , x1 , y1  ,x2, y2 , i , j , cow , cx , cy;

    cin >> T;

    for(i = 1 ; i <= T ; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2 ;

        cin >> cow ;
        cout << "Case "<< i <<":"<< endl;
        for(j = 1 ; j <= cow ; j++)
        {
            cin >> cx >> cy ;

///cout << x1 <<" "<<x2 <<" "<< y1 << " "<<y2 <<" "<< cx <<" "<<cy;
            if((x1 < cx && x2 > cx) && ( y1 < cy && y2 > cy) )
            {
                cout << "Yes"<<endl;
            }
            else
                cout << "No"<<endl;

        }
    }

    return 0 ;
}
