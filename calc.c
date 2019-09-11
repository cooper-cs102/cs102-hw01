#include <stdio.h>
#include <stdlib.h>
#define M main
#define f(x,y) double f##x(a,b)double a,b;{return a y b;}
#define g " operator"
#define h " arg"
#define i "no"
#define j "u"
#define k "!\n"
#define l "men"
#define m "%s"
#define n "%c"
#define o " "

/*
Heavily obfuscated implementation of HW1.
Compile it and us it to test the input/output, 
but I do NOT suggest trying to understand or emulate
the code below.
*/

typedef double d;
typedef char c;
c*um=j m n n n":"n m g"[+-*/]"h"1"h"2"m;
c*am=i n n n i j m"h"h j l n m k;
c*km=j m"k"i"w"m g n"'"n"'"k;
double (*z[0x100])();
u(c *a)
{
    fprintf(stderr, um, m+1, h[1], h[3], l[1], *g, a, k+1);
    exit(1);
}
f(a,+) f(b,-) f(c,*) f(d,/) M(a, b) c **b;
{
    z['+'] = fa;
    z['-'] = fb;
    z['x'] = fc;
    z['/'] = fd;
    if (a < 4) {
        fprintf(stderr, am, g[6], *g, l[1], h+3, g[6], m+1);
        u(*b);
    }
    c f  = **++b;
    d d1 = atof(*++b);
    d d2 = atof(*++b);
    if (0x29 == (f & ~06) && f & 6 || f == 0170) {
        printf("%g\n", z[f](d1, d2));
        return 0;
    }
    fprintf(stderr, km, l+2, l+2, *g, *b[-2]);
    u(b[-3]);
}
