#include <stdio.h>
#include <stdlib.h>

//Created on 1/16/2025 by Kyle Shott

int main() {

	printf("Welcome to the user populated array program. Press enter to continue.\n");
	getchar();

	int arraysize;

	printf("Enter array size: ");
	scanf("%d", &arraysize);

	int arr[arraysize];
	
	//Iterate through array and populate according to user input
	for(int i = 0; i < arraysize; i++) {
		printf("Enter integer #%d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	// Print out the user array via for loop
	printf("Here are your numbers: \n");

	for(int i = 0; i < arraysize; i++) {
		printf("%d", arr[i]);
	}

	printf("\n");

	system("pause");
	
	return 0;

}

