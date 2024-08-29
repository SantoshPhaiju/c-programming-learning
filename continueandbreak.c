#include <stdio.h>

int main() {

    int i;
    for (i = 1; i <= 10; i++) {
        if(i % 2 == 0) {
            continue; // yo vanda muni ko execute hunna like skip yedi break; use garne ho vaney loop nei terminate hunxa hehehehehehe.......
        }
        printf("%d\n", i);
    }



    return 0;
}