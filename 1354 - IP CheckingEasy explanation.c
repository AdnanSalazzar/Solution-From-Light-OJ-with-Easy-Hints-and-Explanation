/*
  Basically take input convert deci to bin then comapare.
  
  
*/

#include<stdio.h>
 
int decitobin(int num )
{
    int bin = 0 , mul = 1 ;
    while(num > 0 )
    {
 
 
        bin =  bin + ((num % 2) * mul) ;
 
        mul = mul * 10 ;
 
        num = num /2 ;
    }
 
    return bin ;
}
 
 
int main()
{
    int i = 1 , T , j , a , b ,c ,d, e ,f ,g ,h ;
 
    scanf("%d" , &T);
 
    for(i = 1 ; i <= T ; i++)
    {
        scanf("%d. %d . %d .%d", &a , &b , &c , &d);
        scanf("%d. %d . %d .%d", &e , &f , &g , &h);
 
        if(e == decitobin(a) && f == decitobin(b) && g ==decitobin(c) && h == decitobin(d))
        {
            printf("Case %d: Yes\n" , i );
        }
        else
        {
            printf("Case %d: No\n" , i );
        }
    }
return 0 ;
}
