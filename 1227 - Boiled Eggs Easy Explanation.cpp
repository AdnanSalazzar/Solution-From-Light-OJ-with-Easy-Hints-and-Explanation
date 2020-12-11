/*  
  take number of eggs in put 
  
  then keep on doing eggs++
  
  stop when it reaches limit on mass and number 
*/

#include<stdio.h>
#include<string.h>
int main()
{
    int i,t;
 
    scanf("%d",&t);
 
    for(i=0; i<t; i++)
    {
        int n,p,q,j,k,t,sum=0 , eggs = 0;
        scanf("%d%d%d",&n,&p,&q);
        int a[n];
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
            sum+=a[j];
 
            if(sum <= q && eggs < p)
                eggs++ ;
 
 
        }
        printf("Case %d: %d\n",i+1,eggs);
 
    }
    return 0;
}
