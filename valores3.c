#include <stdio.h>

int main(void){
    int x, a, b;

    x = 20;
    a =  -10000;
    b = 10000;

    while (x!=0) {
        printf("digite o  valor:");
        scanf("%d", &x);

        if (x>a && x!=0)
            a = x;
        if (x<b && x!=0)
            b = x;
    }

    printf("maior foi: %d\n menor foi: %d", a, b);

    return 0;
}
