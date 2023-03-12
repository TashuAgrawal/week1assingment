#include <stdio.h>
int main() {
    int p,q,m;
    printf("enter your choice :");
    scanf("%d",&m);
    printf ("enter two numbers:\n ");
    scanf ("%d%d",&p,&q);
    switch(m)
    {
    case 1 : printf("sum =%d",p+q);
    break;
    case 2 : printf("sub =%d" , p-q);
    break;
    case 3 :printf("multiplication = %d",p*q);
    break;
    
    case 4 :printf("div =%d",p/q);
    break;

   case 5 :printf("mod=%d", p%q);
   break;
   default :printf("not applicable");
   break;
    }
    return 0;
}
