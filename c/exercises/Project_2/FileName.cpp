#include<stdio.h>
#include<math.h>

// check if a number special
int isSpecial(int num) {

    int i, sumSpecial = 0;

    // check all dividers -> add to sum
    for (i = 1; i <= num / 2; i++)
        if (num % i == 0) {
            sumSpecial += i;
            //printf("%d   ", i);
        }

    if (sumSpecial == num)
        return 1;

    return 0;
}

// check of number equals to sum of dividers
void displayPerfects(int limit) {

    int i, isSpecialResult;

    // loop to check each number
    for (i = 1; i <= limit; i++) {

        // if checked number is perfect -> display it
        isSpecialResult = isSpecial(i);

        if (isSpecialResult == 1)
            printf("%d  ", i);
    }
}





// display all special numbers till num (parameter)


void main() {

    /*
        if(isSpecial(33550336)==1)
                printf("special \n\n");
        else
                printf("NOT special \n\n");
    */
    displayPerfects(20000);
}

