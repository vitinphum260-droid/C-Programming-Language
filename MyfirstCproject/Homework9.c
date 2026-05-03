#include <stdio.h>
int main() {
    int c = 1;
    while(1) {     // 1 = true ; 0 = false
        if(c == 5){ // 5=5 true break the loop
            break;
        }
        printf("\t%d\n", c);
        c++;
    }
    return 0;

    /*int c;
    for(;;){    // three terminal components are omitted.
                //So condition is automatically replaced by a non-zero constant, which evaluates to true or 1.

        if(c == 5)
            break;
        printf("\t %d\n", c);
        c++;

    }
    return 0;*/
}
