//
//
///*An array of integers should be initialized with 13 integers representing
//random number student scores (between 40 and 100). 2 functions must be written:
//The first one receives an array and its size and presents its members to the 
//output.The second one receives an array and its size and is used as a factor 
//(increasing the grade by 7 points for all students) information and the 
//average is failed.A student cannot get more than 100.*/
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//#define SIZE 13
//
//// display grades
//void displayGrades(int arr[], int length) {
//
//    // var i
//    int i;
//
//    // loop for display grades in arr
//    for (i = 0; i < length; i++)
//        printf("%d  ", arr[i]);
//
//    printf("\n\n");
//}
//
//
//
//// factor if average below grade 55
//void factor(int arr[], int length) {
//
//    // calculate average
//    int i, sum = 0;
//    float average;
//    const int FACTOR_VALUE = 7;
//
//    // if average below 55 -> add 7 to all
//    for (i = 0; i < length; i++)
//        sum += arr[i];
//
//    // calculate average
//    average = sum / length;
//
//    if (average < 55)
//        for (i = 0; i < length; i++) {
//
//            // adding factor
//            arr[i] += FACTOR_VALUE;
//            if (arr[i] > 100)
//                arr[i] = 100;
//        }
//}
//
//
//void main() {
//
//    srand(time(NULL));
//
//    int gradesArr[SIZE], i;
//
//    // generate random grades
//
//    for (i = 0; i < SIZE; i++)
//        gradesArr[i] = rand() % 101;
//
//    // display grades
//    displayGrades(gradesArr, SIZE);
//
//    // run factor
//    factor(gradesArr, SIZE);
//
//    // display grades
//    displayGrades(gradesArr, SIZE);
//
//    // printf("%d %d \n\n", gradesArr, &gradesArr[0]); 
//}
//
//
