
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
#define SIZE 6
#define MAX_VALUE 34
#define MIN_VALUE 1
 
// check already in array
int isInArray(int arr[], int length, int num) {
 
   	int i;
 
   	for (i = 0; i < length; i++)
         	if (arr[i] == num)
                	return 1;
 
   	return 0;
}
 
// display all elements
void displayArray(int array[], int length) {
 
   	int i;
   	for (i = 0; i < length; i++)
         	printf("%d  ", array[i]);
}
 
 
 
// generate lottery numbers
void generateLotteryNumbers() {
 
   	int lotteryArr[SIZE] = { 0 }, i;
   	int ballValue = 0;
   	int anotherBallValue = 0;
 
   	for (i = 0; i < SIZE; i++) {
 
         	// generate ball with values between 1 to 34
         	ballValue = rand()%MAX_VALUE + MIN_VALUE;
 
         	// check if already found
         	if (isInArray(lotteryArr, i, ballValue) == 1) {
                	i--;
                	continue;
         	}
         	// if not -> insert
         	else
                	lotteryArr[i] = ballValue;
   	}
 
   	anotherBallValue = rand() % 7 + 1;
 
   	displayArray(lotteryArr,SIZE);
 
   	printf("\n\nExtra ball: %d\n", anotherBallValue);
 
 
}
 
void main() {
 
   	srand(time(NULL));
 
   	generateLotteryNumbers();
 
}
 

