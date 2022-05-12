//Q3)

#include<stdio.h>
main()
{
int x;
x=(0xFF>>8)<<8;  // right shift 0xff by 8 & then left shift by 8
printf("%x\n",x) ;
}
