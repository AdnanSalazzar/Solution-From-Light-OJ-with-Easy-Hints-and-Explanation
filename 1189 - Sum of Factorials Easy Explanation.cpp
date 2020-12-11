/*
  brute force will onlly give you TLE 
  
  so look at the limit 10^18  
  try 20! --> is over 10^18 
  
  so if u predefine 20! in an array at the beginning then keep on minusing them 
  
  and if the num after minusing is 0 then its possible else not 
  
  if u stil dont get it comment in my You Tube channel The Dark Coders (link Below) I'll explain by animation 
  
  https://www.youtube.com/channel/UC7SYiKGhxSuihRfYEOjk0Dg?view_as=subscriber

*/


#include<iostream>
#include<vector>
 
using namespace std ;
 
int main()
{
    long long int i, j, T, fact[21], num , k;
 
    fact[0] = 1;
 
    for (i = 1; i <= 20; i++)
    {
        fact[i] = fact[i - 1] * i;
       // cout << fact[i]<<endl;
    }
 
    cin >> T;
    for (i = 1; i <= T; i++)
    {   int flag = 0 ;
        vector<int> a ;
        cin >> num;
        j = 20;
        while (num >= 0)
        {
 
            if (fact[j] <= num)
            {
                a.push_back(j);
                //cout <<"J = "<<j<<endl;
                num = num - fact[j];
                //cout <<"Num = "<< num <<endl;
            }
 
            if (num == 0)
            {
                flag = 1;
                break;
            }
            j--;
        }
        cout << "Case " << i <<": ";
 
 
        if(a[a.size()-1] < 0)
        {
 
            cout << "impossible" << endl;
        }
 
 
        else if (flag)
        {
           /* for(k = 0 ; k < a.size() ; k++)
                cout << a[k] <<endl;*/
 
            for (j = a.size() -1 ; j >= 0 ; j--)
            {
               cout << a[j] << "!";
                //printf("%d!" , a[j]);
                if(j > 0)
                {
                    cout << "+";
                }
            }
            cout << endl;
        }
 
 
    }
    return 0;
 
}
