/*
  This is basic array manipulation and query interprecion 
  

*/

#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std ;

int main()
{
    int   n, T, i, j, no_of_query, input, num, num1, k, num2 ;

    //vector<int> a ;

    int a[100];
    char query ;
    cin >> T ;

    for(i = 1 ; i <= T; i++)
    {
        cin >> n >> no_of_query ;

        ///input of array
        for( j = 0 ; j < n ; j++)
        {
            cin >> a[j] ;
        }


        for(j = 0 ; j < no_of_query ; j++)
        {
            //cout << "No_of query " << no_of_query <<endl;
            cin >> query ;
            //cout <<"query" <<query <<endl;
            if(query == 'S')
            {
                cin >> num ;
                for( k = 0 ; k< n ; k++ )
                {
                    a[k] = a[k]+ num ;
                }
            }

            else if(query == 'M')
            {
                cin >> num ;

                for(k = 0 ; k <  n ; k++)
                {
                    a[k] = a[k] * num;
                }
            }

            else if(query == 'D')
            {
                cin >> num ;

                for(k = 0 ; k < n ; k++)
                {
                    a[k] = a[k] / num;
                }
            }

            else if(query == 'R')
            {
                reverse(a,a+n);
            }

            else if(query == 'P')
            {
                cin>> num1 >> num2 ;

                swap(a[num1], a[num2]);
            }
        }
        cout << "Case "<<i << ":"<<endl;
        ///printing
        for(k = 0 ; k <  n ; k++)
        {
            cout << a[k];
            if( k!= n-1)
                cout << " ";
        }
        cout<<endl;
        /*///printing
        for(k = 0 ; k <  n ; k++)
        {
            cout << a[k]<<" ";
        }*/

    }

return 0 ;
}





