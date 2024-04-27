#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ar[1001];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    
    // Find minimum and maximum
    int min = ar[0], max = ar[0];
    for (int i = 1; i < n; i++) {
        if (ar[i] < min) {
            min = ar[i];
        }
        if (ar[i] > max) {
            max = ar[i];
        }
    }

    // Swap minimum and maximum
    for (int i = 0; i < n; i++) {
        if (ar[i] == min) {
            ar[i] = max;
        } else if (ar[i] == max) {
            ar[i] = min;
        }
        printf("%d ", ar[i]); // Print the modified array
    }
    
    return 0;
}
