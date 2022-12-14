#ifndef BINARY
#define BINARY
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
unsigned int expo(unsigned int base, int power);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int countset_bit(int n);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif /*(end BINARY) */
