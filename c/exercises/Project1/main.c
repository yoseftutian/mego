//#include<stdio.h>
//#include<math.h>
//
//// check if a number special
//int isSpecial(int num) {
//
//    int i, sumSpecial = 0;
//
//    // check all dividers -> add to sum
//    for (i = 1; i <= num / 2; i++)
//        if (num % i == 0) {
//            sumSpecial += i;
//            //printf("%d   ", i);
//        }
//
//    if (sumSpecial == num)
//        return 1;
//
//    return 0;
//}
//
//// check of number equals to sum of dividers
//void displayPerfects(int limit) {
//
//    int i, isSpecialResult;
//
//    // loop to check each number
//    for (i = 1; i <= limit; i++) {
//
//        // if checked number is perfect -> display it
//        isSpecialResult = isSpecial(i);
//
//        if (isSpecialResult == 1)
//            printf("%d  ", i);
//    }
//}
//
//
//
//
//
//// display all special numbers till num (parameter)
//
//
//void main() {
//
//    /*
//        if(isSpecial(33550336)==1)
//                printf("special \n\n");
//        else
//                printf("NOT special \n\n");
//    */
//    displayPerfects(20000);
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//// count dividers
//int countDividers(int num) {
//
//    int counter = 0, i;
//
//    for (i = 1; i <= num / 2; i++)
//        if (num % i == 0) // i is divider
//            counter++; // count as divider
//
//    return counter;
//
//}
//
//// display number with max dividers
//void displayNumWithMaxDividers(int max) {
//
//    int number, maxDividers = 0, maxNumber = 0, i;
//
//    for (i = 1; i <= 10; i++) {
//
//        number = rand() % (max)+1;
//        printf("%d: %d\n", i, number);
//
//        if (countDividers(number) > maxDividers) {
//            maxNumber = number;
//            maxDividers = countDividers(maxNumber);
//        }
//
//    }
//    printf("\n\nnumber is: %d, dividers: %d \n\n", maxNumber, maxDividers);
//
//}
//
//void main() {
//
//    srand(time(NULL)); // synch with clock
//
//    displayNumWithMaxDividers(1000);
//
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//#define SIZE 9
//
//void main() {
//
//    srand(time(NULL));
//
//    int arr1[SIZE], i;
//    int arr2[] = { 2,6,5,4,3,4,5,88,9 };
//    //arr1[0] = 1000;
//
//    //arr1[6] = 12;
//
//    //printf("%d", arr1[0]);
//
//
//    for (i = 0; i < SIZE; i++)
//        arr1[i] = i + 1;//rand() % 101;
//
//
//    for (i = 0; i < SIZE; i++)
//        printf("%d  ", arr1[i]);
//
//    printf("\n\n%d  ", arr2[-1]);
//
//
//}
//
//#include<stdio.h>
//
//
//void disply(int array[],int num) {
//
//    int i;
//    for (i = 12; i >=0 ; i--)
//           printf("%d\n", array[i]);
//
//
//}
//void main() {
//
//    int arr1[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
//
//
//    disply(arr1, 13);
//}
//#include <stdio.h>
//
//
//void reverseArray(int array[], int length) {
//    int start = 0;
//    int end = length - 1;
//
//    while (start <= end) {
//        int temp = array[start];
//        array[start] = array[end];
//        array[end] = temp;
//
//
//        start++;
//        end--;
//    }
//
//
//    for (int i = 0; i < length; i++) {
//        printf("%d ", array[i]);
//
//    }
//
//}
//
//void main() {
//    int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 ,13};
//    int length = sizeof(arr1) / sizeof(arr1[0]);
//
//    reverseArray(arr1, length);
//
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//#define SIZE 6
//#define MAX_VALUE 34
//#define MIN_VALUE 1
//
//// check already in array
//int isInArray(int arr[], int length, int num) {
//
//    int i;
//
//    for (i = 0; i < length; i++)
//        if (arr[i] == num)
//            return 1;
//
//    return 0;
//}
//
//// display all elements
//void displayArray(int array[], int length) {
//
//    int i;
//    for (i = 0; i < length; i++)
//        printf("%d  ", array[i]);
//}
//
//
//
//// generate lottery numbers
//void generateLotteryNumbers() {
//
//int lotteryArr[SIZE] = { 0 }, i;
//int ballValue = 0;
//int anotherBallValue = 0;
//
//for (i = 0; i < SIZE; i++) {
//
//    // generate ball with values between 1 to 34
//    ballValue = rand() % MAX_VALUE + MIN_VALUE;
//
//    // check if already found
//    if (isInArray(lotteryArr, i, ballValue) == 1) {
//        i--;
//        continue;
//    }
//    // if not -> insert
//    else
//        lotteryArr[i] = ballValue;
//}
//
//anotherBallValue = rand() % 7 + 1;
//
//displayArray(lotteryArr, SIZE);
//
//printf("\n\nExtra ball: %d\n", anotherBallValue);
//
//
//}
//
//void main() {
//
//    srand(time(NULL));
//
//    generateLotteryNumbers();
//
//}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 7
#define MAX_VALUE 100

// return max counter with count array
int getMaxCountValue(int arr[], int length) {

    int countArr[MAX_VALUE + 1] = { 0 }, i;

    int countMax = 0, countMaxValue = 0;


    for (i = 0; i < length; i++)
        countArr[arr[i]]++;
    printf("%d \n", countArr);


    for (i = 0; i < MAX_VALUE + 1; i++)
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


