#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    char digits[N + 1]; // Additional space for '\0'
    scanf("%s", digits);

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += digits[i] - '0'; // Convert char to int by subtracting '0'
    }

    printf("%d\n", sum);

    return 0;
}
