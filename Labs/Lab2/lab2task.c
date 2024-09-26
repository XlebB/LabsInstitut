#include <stdio.h>
#include <math.h>

int main(){
    int x = 25;
    float t = 2.4E+8;
    float z = -1.6E-3;
    float f;

    f = ((3*x)-(t/12)+(6.7E+4*z))/(++x+t-z--);

    printf("%.3f",f);
    getchar();
    return 0;
}
