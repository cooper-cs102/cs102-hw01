#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 4) return -1;

    const char op = argv[1][0];
    const double l = atof(argv[2]);
    const double r = atof(argv[3]);

    double result;

    switch (op) {
    case '+': result = l + r; break;
    case '-': result = l - r; break;
    case 'x': result = l * r; break;
    case '/': result = l / r; break;
    default: return -1;
    }

    printf("%g\n", result);
    return 0;
}
