#include<stdio.h>
#include<malloc.h>


int main(){
        
	int j=0;
	int* i = (int*)malloc(4*sizeof(int));
	
	for(j=0;j<4;j++){
	
		*(i+j)=j;		
	

	} 

	for(j=0;j<4;j++){
	
		printf("%d\n",&i[j]);		
	}


	return 0;

}