#include<iostream>
using namespace std ;
 
int main()
{
    int i , T , sum = 0 , no_query , num , j;
    string query ;
 
    cin >> T ;
 
    for(i = 1 ; i <= T ; i++)
    {
        cout << "Case "<< i <<":"<<endl;
 
        sum = 0 ;
        cin >> no_query ;
        for( j = 1 ; j <= no_query ; j++)
        {
            cin >> query ;
 
            if(query == "donate")
            {
                cin >> num ;
 
                sum  += num ;
            }
 
            if(query == "report")
            {
                cout <<  sum <<endl;
            }
        }
    }
    return 0 ;
}
