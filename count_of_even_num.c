#include <stdio.h>

int main() {
    int first = 2;
    int last = 200;
    int count = (last - first) / 2 + 1; // Number of even numbers
    int sum = count * (first + last) / 2; // Sum of arithmetic progression

    printf("Count of even numbers from 1 to 200: %d\n", count);
    printf("Sum of even numbers from 1 to 200: %d\n", sum);

    return 0;
}
