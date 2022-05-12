//Q7)

#include<stdio.h>
main()
{
unsigned int arr_mask[ ]={ Ox1,Ox2,Ox4,Ox8,Ox10,Ox20,Ox40,
Ox80,Ox100,Ox200,Ox400,Ox800,
Ox1000,Ox2000,Ox4000,Ox4000};
int i , num=Ox38F;
for (i=l; i>=O; i--)
    num&arr_mask[il ? printf("1") :printf("O");
printf ("\n");
}
