#include "interface.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
	
if(argc != 2) {
printf("Error! Invalid number of args");
return 1;
}
	
srand(time(NULL));
	
int arraySize = atoi(argv[1]);
int array[arraySize];
printf("Array: ");
for (int i = 0; i < arraySize; i++){
array[i] = rand() % 100;
printf("%d ", array[i]);
}
printf("\n");
int count=0;
for (int i = 0; i < arraySize; i++){

if(checkOnPalindrom(array[i])==1) count++;
}
printf("The number of palindromes is %d", count);
printf("\n");
return 0;
}