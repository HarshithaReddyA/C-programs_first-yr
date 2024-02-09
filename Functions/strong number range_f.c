#include <stdio.h>
int fact(int n) 
{
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}
int isStrong(int num)
{
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int d= num % 10;
        sum += fact(d);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int start, end;

    printf("Enter the range to find strong numbers: ");
    scanf("%d %d", &start, &end);

    if (start <= 0 || end <= 0 || start > end) {
        printf("Invalid range.\n");
        return 1;
    }

    printf("Strong numbers in the range [%d, %d] are: ", start, end);

    for (int i = start; i <= end; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}


