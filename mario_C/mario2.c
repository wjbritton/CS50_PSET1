#include <stdio.h>
#include <cs50.h>
int main(void){
    
    //promp and validate user input
    int input;
    int space =0;
    int block =0;
    int diff =0;
    do{ printf("Enter the height of mario's castle.  Must be no greater than 23! \n");
        input = get_int();
    }
    
    while(input == true && input<24);{
        if(input == 1){
        printf("# #\n");
        return 0;
            
        }
        
        else {
            
            for(block = 0;block < input;block++){
          
            
            for(diff = input - block;0<diff;--diff){
            printf(" ");
            }
            for(space =1; space<block+2;space++){
            
                printf("#");
                
            }
            printf("  ");
            
                for(space =1; space<block+2;space++){
                    printf("#");
                }
        printf("\n");}
            
}
        return 0;
}
}