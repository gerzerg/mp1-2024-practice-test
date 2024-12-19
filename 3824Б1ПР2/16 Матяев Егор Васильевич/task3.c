#include <stdio.h>
#include <ctype.h>

int task3(char* s) {
    if (s == NULL || *s == '0') { 
        return -1;
    }

    int count = 0; 
    int in_word = 0; 

    while (*s) { 
        if (isspace(*s)) { 
            in_word = 0; 
        }
        else if (!in_word) { 
            in_word = 1; 
            count++; 
        }
        s++;
    }

    return count;
}

int main() {
    char str[] = " Hello   world! This is a test string for task. ";
    int result = task3(str);

    if (result == -1) {
        printf("Строка пуста.\n");
    }
    else {
        printf("Количество слов в строке: %d\n", result);
    }

    return 0;
}
