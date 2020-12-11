/*
  This problem is done by utter observation 
  
  write down the series T and its sum Tn 
  
  the sum each T --> Tn can be found using  T * (T-1) / 2
  
  observer there is a pattern 
  1. Make the number in 3 groups ... the first numer is not divisibke by 3 and other are divisible.
  
  
  T  = |1  2  3 | 4  5  6 | 7  8  9 | 10  11  12 |
            * *      *  *      *  *        *   * 
  Tn = |1  3  6 |10 15 21 |28 36 45 | 55  66  78 |
  
  now few condition can be set .
  
  figure it out :) .... 
  
  if u dont ... comment 
  Happy Coding !
*/



#include<iostream>
using namespace std ;
 
int main()
{
    long long int j, i, T,num1, num2, sum, counter = 0, total_between_number;
    cin >> T;
 
    for(i = 1 ; i <= T ; i++ )
    {
        cin >> num1 >> num2 ;
 
 
        if(num2 == 0 )
        {
            cout << "Case "<< i << ": " << 0<<endl;
            counter = 0 ;
            continue;
        }
 
        if(num2 % 3 == 0)
        {
            if((num1+1) == num2)
            {
                cout << "Case "<< i << ": " << 2<<endl;
                counter = 0;
                continue ;
            }
        }
 
 
        sum = (num2 * (num2 +1)) / 2 ;
 
        while (sum % 3 == 0)
        {
            counter++;
            num2-- ;
            sum = (num2 * (num2 +1)) / 2 ;
            //cout << "Sum "<< sum <<endl;
        }
        sum = (num1 * (num1 +1)) / 2 ;
        while( sum % 3 == 0)
        {
            counter++;
            num1++;
            sum = (num1 * (num1 +1)) / 2 ;
        }
 
        total_between_number = num2 - num1;
 
        //cout << "Total number between "<<total_between_number <<endl;
 
 
            counter = counter + 2*(total_between_number / 3);
 
 
        cout << "Case "<< i << ": " << counter<<endl;
        counter = 0 ;
 
    }
    return 0 ;
}
