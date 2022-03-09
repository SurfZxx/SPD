#include <stdio.h>

#define MAX_SIZE 500000

int is_even(int number) {
    if (number%2 == 0) {
        return 1;
    }
    return 0;
}

int multiple(int number) {
    if (number%3 == 0) {
        return 1;
    } else if (number%5 == 0) {
        return 1;
    } else if (number%7 == 0) {
        return 1;
    } else if (number%9 == 0) {
        return 1;
    }
    return 0;
}

void test(void) {
    int number = 100000;
    //scanf("%d", &number);
    int array[MAX_SIZE];
    int elements = 0; //nr de elementos no array de primos
    int i = 10; //vai incrementar ate MAX_SIZE
    int result = 0;
    int count = 0;
    for (int j = 0; j < 8; j++) {
        result = is_even(j);
        if (result == 0) {
            if (count <= number) {
            array[elements] = j;
            elements++;
            count++;
            }
        }
    }

    while(i < MAX_SIZE) {
        result = is_even(i);
        if (result == 0) {
            result = multiple(i);
            if (result == 0) {
                if (count <= number) {
                array[elements] = i;
                elements++;
                count++;
                }
            }
        }
        i++;
    }

    //int lenght = sizeof(array)/sizeof(array[0]);
    for (int nr = 0; nr < elements; nr++) {
        printf("%d\n", array[nr]);
    }

}

int main(int argc, char const *argv[]) {
    test();
    return 0;
}
