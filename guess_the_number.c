#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    //renew the seed of rand function
    srand(time(NULL));

    //get the answer between 0 to 99
    int answer = rand() % 100;

    //initialize
    int guess = -1;
    int counter = 0;

    //prompt message
    printf("0到100，猜一個數字。");

    //get input
    scanf("%d", &guess);

    while (guess != answer) { //go on if not correct
        counter++;
        printf("你猜的是︰%d，", guess);
        if (guess > answer) {
            printf("低一點。");
        } else {
            printf("高一點。");
        }
        //get input
        scanf("%d", &guess);
    }
    printf("你猜的是︰%d，", guess);
    printf("恭喜猜中了。");
    printf("一共猜了%d次。\n", counter);
    
    return 0;
}
