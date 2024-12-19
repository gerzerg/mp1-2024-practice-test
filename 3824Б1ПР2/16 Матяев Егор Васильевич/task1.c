#include <stdio.h>

int task1(unsigned A[], size_t N) {
    if (N == 0) {
        return -1; 
    }

    int first_max_index = 0; 
    int last_min_index = 0;   
    unsigned max_value = A[0];
    unsigned min_value = A[0];

    for (size_t i = 1; i < N; i++) {
        if (A[i] > max_value) {
            max_value = A[i];
            first_max_index = i;
        }
        if (A[i] < min_value) {
            min_value = A[i];
            last_min_index = i;
        }
        else if (A[i] == min_value) {
            last_min_index = i;
        }
    }

    if (first_max_index >= last_min_index) {
        return 0;
    }

    return last_min_index - first_max_index - 1;
}

int main() {
    unsigned A[] = { 1, 3, 5, 2, 5, 0, 4, 2 };
    size_t N = sizeof(A) / sizeof(A[0]);

    int result = task1(A, N);
    printf("Количество элементов между первым максимальным и последним минимальным: %d\n", result);

    return 0;
}
