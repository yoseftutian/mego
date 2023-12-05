#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
#define SIZE 7
#define MAX_VALUE 100
 
// return max counter with count array
int getMaxCountValue(int arr[], int length) {
 
   	int countArr[MAX_VALUE + 1] = { 0 },i;
 
   	int countMax=0, countMaxValue=0;
 
 
   	for (i = 0; i < length; i++)
         	countArr[arr[i]]++;
 
   	for(i=0;i< MAX_VALUE + 1;i++)
         	if (countArr[i] > countMax) {
 
                	countMax = countArr[i];
                	countMaxValue = i;
 
         	}
 
   	return countMaxValue;
 
}
 
 
void main() {
 
   	int array[] = { 2,3,7,3,8,3,9 };
 
   	int result = getMaxCountValue(array, SIZE);
 
   	printf("%d \n\n", result);
 
} 
 

