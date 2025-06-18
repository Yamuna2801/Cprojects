<<<<<<< HEAD
/*#include<stdio.h>
void main() {
       int i, j;
       clrscr();

       for(i=0; i<8; i++) {
	 printf("\n");
	 for(j=0; j<11; j++) {
	   printf("\t*");
	 //}else{
	  //printf("\t ");
	 }
       }
	getchar();
} */

#include<stdio.h>
#include<conio.h>
void main() {
    int a;
    clrscr();

    printf("Enter your number: ");
    scanf("%d", &a);

    printf("Entered number:%d", a);

    getchar();
=======
#include <stdio.h>
#include <string.h>

int main() {
      char word[8];
      int i;
      clrscr();

      printf("Enter your word: ");
      gets(word);

	printf("Entered word: %s ", word[i]);
	for(i=0; i<8; i++) {
	 if(i%2 == 0) {
	   printf("%c", word[i]);
	 }else{
	   printf("*");
	 }
       }

      getchar();
      return 0;
>>>>>>> 029c487 (read user input and mask the alternative characters)
}