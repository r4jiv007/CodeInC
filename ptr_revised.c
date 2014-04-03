#include<stdio.h>
#include<malloc.h>
int main(){

    int *ptr = (int *)malloc(4*sizeof(int));

/*    *ptr = 0;
    *(ptr +1) =1;
    *(ptr +2)= 2;
    *(ptr +3) =3;
*/
    printf("%d\n",*(ptr+3));



return 0;
}
