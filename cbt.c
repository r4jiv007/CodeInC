#include <stdio.h>

int factorial(int);
int main()
{
 int no_input=0,i=0;
 int input_Arr[no_input];


 scanf("%d",&no_input);
 for(i=0;i<no_input;i++){

 	scanf("%d",&input_Arr[i]);


 }

 for(i=0;i<no_input;i++){

 	printf("%d\n",factorial(input_Arr[i]));
 }
    return 0;
}

int factorial(int num){
	if (num <=1)
		return 1;
	else
		return num*factorial(num-1);


}


