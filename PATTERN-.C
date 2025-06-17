#include<stdio.h>

void main(){
	int i, limit = 100;
	clrscr();

	for(i=0;i<=limit;i++) {
	       if(i%10==0)
		printf("\n");
		if(i%2==0)
		  printf((i/10)%2==0 ? "*\t" : " \t");
		else
		  printf((i/10)%2!=0 ? " \t" : "*\t");
	}

	getchar();
}