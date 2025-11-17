//
// Created by Administrator on 25-11-14.
//
#include<stdio.h>
#include<math.h>

int main() {
    double a, b, c;
    int d;
    b = 3.3;
    c = 1.1;
    a = b / c;
    d = b / c;
    printf("%f,%d", a, d);
    if (3.0 != a)
        printf("\nReally? 3.0!=a");
}
