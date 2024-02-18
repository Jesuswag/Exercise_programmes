#include <stdio.h>
main() {
    int a, b=0;
    a=b*b+1;
    printf ("Si b=%d, entonces a=%d\n", b, a);
    b=2;
    a=b*b+1;
    printf ("Si b=%d, entonces a=%d\n", b, a);
    b=-2;
    a=b*b+1;
    printf ("Si b=%d, entonces a=%d\n", b, a);
}
