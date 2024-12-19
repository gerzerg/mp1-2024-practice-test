#include <stdio.h>

int task2(unsigned A[], size_t n) {
    if (n == 0) {
        return -1; 
    }

    int series_cnt = 1; 

    
    for (size_t i = 1; i < n; i++) {
        if (A[i] != A[i - 1]) { 
            series_cnt++; 
        }
    }
    return series_cnt; 
}

int main() {
    unsigned A[] = { 1, 1, 2, 2, 3, 3, 3, 4, 5 };
    size_t n = sizeof(A) / sizeof(A[0]);

    int result = task2(A, n);

    if (result == -1) {
        printf("Массив пустой.\n");
    }
    else {
        printf("Количество серий в массиве: %d\n", result);
    }

    return 0;
}
