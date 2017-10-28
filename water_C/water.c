#include <stdio.h>
#include <cs50.h>

int main(void){
    get_int();
    int n;
    int b;
    do {
        n = get_int();
        
    }
    while (n == true);
    {
        printf("Minutes: %i \n", n);
        b = n * 12;
        printf("Bottles: %i \n", b);
    }
}