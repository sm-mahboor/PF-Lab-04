// A company is hiring and need MS students
// An interview will be taken, and only those MS students who pass the interview will be hired

#include <stdio.h>

int main(){
	char Qualification;
	char Interview;
	printf("Have you completed your MS?  (Y/N)");
	scanf(" %c",&Qualification);
	if (Qualification == 'Y' || Qualification == 'y'){
		printf("Have you passed the interview?  (Y/N)");
		scanf(" %c",&Interview);
		if (Interview == 'Y' || Interview == 'y'){
			printf("You are hired!");
		} else{
			printf("You must pass the interview!");
		}
	} else{
		printf("You must complete your MS!");
	}
}
