#include<stdio.h>
#include<stdlib.h>
int main(int arg, char* argv[]){


	int x1=0,y1=0,x2=0,y2=0;
	int i,j;
	x1=atoi(argv[1]);
	y1=atoi(argv[2]);
	x2=atoi(argv[3]);
	y2=atoi(argv[4]);
	printf("x1 = %d \ny1 = %d\n\nx2 = %d\ny2 = %d",x1,y1,x2,y2);
	printf("\n\n\n");
	for(i=1;i<=15;i++){
		printf("|");
		for(j=1;j<=15;j++){
			if((15-i<=y1||15-i<=y2) && (x1==j||x2==j)) printf("*");
			else if((x1!=j||x2!=j) && i!=15) printf(" ");
			if(i==15 && (j!=x1||j!=x2)) printf("_");
		}
		printf("\n");
	}
		
	
	
	
	
	
	return 0;
}

