//Q5)

#include<stdio.h>
main()
{
int k=OxC9FB;  /*1100 1001 1111 1011 */
k&=~ (1<<5);
printf("%x\t",k);
k|=(1<<2) ;
printf("%x\t",k) ;
k^=(1<<14) ;
printf("%x\n",k) ;
}
