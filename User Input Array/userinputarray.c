#include <stdio.h>

int main() {

	printf("Welcome to the user populated array program. Press enter to continue.\n");
	getchar();

	int arraysize;

	printf("Enter array size: ");
	scanf("%d", &arraysize);

	int arr[arraysize];

	for(int i = 0; i < arraysize; i++) {
		printf("Enter integer #%d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf("Here are your numbers: \n");

	for(int i = 0; i < arraysize; i++) {
		printf("%d", arr[i]);
	}

	return 0;

}

