#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void){
    string input = get_string();
    int sum =0, part1 =0, part2 =0,part3=0,part4=0,i =0,j =0,x=0,y=0, slength =0, validate =0,count =0;
    //printf("%s\n", input);
     slength = strlen(input);
    validate = input[slength -2];
    if(strlen(input) ==15){
      count = (slength/2-1);
      x = x + 1;
    }

    else if(strlen(input) ==13){
        count = slength/2;
    }
    else {
        count = slength/2-1;
        x = x +1;
        y = y -1;


    }
    for(i =0;i<count +x;i++){

    part1 = input[(slength-1)-(2*i)-1];
    part1 = (part1 -48)*2;
    if(part1>9){
        part3 =part1 / 10 % 10;
        part4 =part1 % 10;
        part1 = part3 + part4;
    }

    printf("p2 %i\n", part1);

    sum = sum +part1;
    }
    for(j=0;j<count+1+x+y;j++){
    part2 = input[(slength-1)-(2*j)];
    part2 = (part2 -48);

    printf("p1 %i\n", part2);

    sum = sum +part2;
    }




    printf("%i\n", sum);
    sum = sum % 10;
    printf("%i\n",sum);
    if(sum==0){

        if((strlen(input)==13 || strlen(input)==16) && input[0] == '4'){
        printf("Visa\n");
    }
    else if(strlen(input)==16 && input[0]== '5' && (input[1] == '1' || input[1] == '2' || input[1] == '3' || input[1] == '4' || input[1] == '5')){
        printf("Master Card\n");
    }
    else if(strlen(input) ==15 && input[0]== '3' && (input[1]== '4' || input[1]== '7')){
        printf("American Express\n");
    }
    else{
      printf("invalid1\n");
    }
}
else{
    printf("invalid2\n");
}
}
