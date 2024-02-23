#include <stdio.h>

int get_endianness(void) {
    unsigned int x = 1;
    char *c = (char*)&x;
    return (*c == 1); // Returns 1 if little endian, 0 if big endian
}

int main(void) {
    int n = get_endianness();
    if (n != 0) {
        printf("Little Endian\n");
    } else {
        printf("Big Endian\n");
    }
    return 0;
}
