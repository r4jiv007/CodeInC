#include<stdio.h>
#include<malloc.h>
int main(){

int *ptr= (int*)malloc(sizeof(int)*10);
int i=0;
for(i=0;i<10;i++){
    ptr[i]=i;
}
for(i=0;i<10;i++){
    printf("%d \n",ptr[i]);
}

return 0;
}
