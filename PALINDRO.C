/* Write a program to check the word is palidrome or not \
without using in-built functions */

#include<stdio.h>

void main() {
	char words[25];
	char reversed[25];
	int i, size, count = 0, j = 0;
	clrscr();
	printf("Palindrome Check Program\n");
	// Step 1: Get the input from user
	scanf("%s", words);

	size = (sizeof(words))/(sizeof(words[0]));
	for(i = 0; i < size; i++) {
		if(words[i] == '\0')
			break;
		count++;
	}
	for(i = count-1; i >= 0; i--) {
		reversed[j++] = words[i];
	}
	reversed[j] = '\0';
	printf("Given word: %s\n", words);
	printf("Reversed word: %s\n", reversed);
	if(words == reversed) {
		printf("The given word is palindrome");
	} else {
		printf("The given word is not palindrome");
	}
	getch();
}
