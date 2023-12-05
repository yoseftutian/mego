
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
#define SIZE 7
 
 
// count how many times found in array
int countCurrentValue(int arr[], int length, int value) {
 
   	// declare counter
   	int counter = 0,i;
 
   	// loop and count
   	for (i = 0; i < length; i++)
         	if (value == arr[i])
                	counter++;
 
   	return counter;
 
}
 
// return value found max times
int getMaxTimes(int arr[], int length) {
 
   	// declare vars -> maxCount, maxCountValue
   	int maxCount = countCurrentValue(arr, length, arr[0]);
   	int maxCountValue = arr[0];
   	int i, currentCountValue;
 
 
   	// loop -> count all values -> keep the max count value
   	for (i = 1; i < length; i++) {
 
         	currentCountValue = countCurrentValue(arr, SIZE, arr[i]);
 
         	if (currentCountValue > maxCount) {
                	maxCount = currentCountValue;
                	maxCountValue = arr[i];
 
         	}
   	}
 
   	printf("counter: %d\n", maxCount);
 
   	// return max count value
   	return maxCountValue;
}
 
void main() {
 
   	int array[] = { 2,3,7,3,8,3,9 };
 
   	int result = getMaxTimes(array, SIZE);
 
   	printf("value: %d\n\n", result);
 
}

