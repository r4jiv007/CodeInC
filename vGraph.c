#include<stdio.h>
#include<stdlib.h>
int main(int arg, char* argv[]){


	int x=0,y=0;
	int i,j;
	x=atoi(argv[1]);
	y=atoi(argv[2]);
	printf("x = %d \ny = %d",x,y);
	printf("\n\n\n");
	for(i=1;i<=15;i++){
		printf("|");
		for(j=1;j<=15;j++){
			if(15-i<=y && x==j) printf("*");
			else if(x!=j && i!=15) printf(" ");
			if(i==15 && j!=x) printf("_");
		}
		printf("\n");
	}
		
	
	
	
	
	
	return 0;
}

