/*
  This is just taking input of amount of dust (positive value) and sum it up 

*/

#include<iostream>
using namespace std ;

int main()
{
    int i , T , sum = 0 ,no_students ,dust  , j ;

    cin >> T ;

    for(i = 1 ; i <= T ; i++)
    {
        cin>> no_students;
        for(j = 1 ; j <= no_students ; j++)
        {
            cin >> dust ;
            if (dust >= 0)
            {
                sum = sum + dust;
            }

        }

        cout << "Case " << i <<":" <<" " << sum<<endl;

        sum = 0 ;
    }

    return 0 ;

}
