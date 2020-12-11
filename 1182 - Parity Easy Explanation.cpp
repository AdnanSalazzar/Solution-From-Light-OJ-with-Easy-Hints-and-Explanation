/*
  in here first take a number ... num 
  then keep on dividing num by 2 
  if num % 2 == 1 
  keep a counter ... counter++ 
  
  then after that check if number is odd or not 
  
  PS . (counter & 1 ) means checking odd number by bitwise (efficient)

*/
#include<iostream>
using namespace std ;
 
int main()
{
    unsigned long long int T , i , j , num  , counter = 0;
 
    cin >> T ;
 
    for(i = 1 ; i <= T ; i++)
    {
        cin >> num ;
 
        while (num > 0)
        {
            if(num % 2 == 1)
                counter ++;
 
            num = num / 2 ;
        }
 
        if(counter & 1)
        {
            cout << "Case " << i <<": "<< "odd"<<endl;
        }
        else
            cout << "Case " << i <<": "<< "even"<<endl;
        counter = 0;
    }
    return 0 ;
}
