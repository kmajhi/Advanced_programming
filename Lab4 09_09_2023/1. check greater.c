#include <stdio.h>
/*
This Git repository is
exclusively intended for students in the
Computer Science and Engineering program
at Eastern University.
*/

void printResult(int result) {
    printf("The greater number is: %d\n", result);
}

int checkGreater(int m, int n) {
    if (m > n) {
        return m;
    } else {
        return n;
    }
}

int main() {
    int x, y;
    printf("Input the first number: ");
    scanf("%d", &x);

    printf("Input the second number: ");
    scanf("%d", &y);

    int result = checkGreater(x, y); // x, y এর ভ্যালু দিয়ে checkGreater ফাংশন কে কল

    /*
     x, y এর ভ্যালু দিয়ে checkGreater ফাংশন কে কল  করার পর যে রেজাল্ট আসবে তা
     result ভ্যারিয়েবল এ value সেট হবে | তারপর  result variable কে পাস করবে void printResult
            ফাংশনে প্রিন্ট করার জন্য
    */

    printResult(result);
    return 0; //
}
