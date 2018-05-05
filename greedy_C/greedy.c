#include <stdio.h>
#include <cs50.h>
int main(void){
float q =0.25;
float d =0.1;
float n =0.05;
float p =0.01;
int qcount =0;
int dcount =0;
int ncount =0;
int pcount =0;
int finalCount =0;
//int runtotal=0;

printf("How much change do you need?");
  float input =get_float();


if(input>q){
    qcount= input/q;
    input = input-qcount*q;

}
if(input>d){
    dcount= input/d;
    input = input-dcount*d;
}
if(input>n){
    ncount= input/n;
    input = input-ncount*n;
}
if(input>p){
    pcount= input/p;
}

finalCount = qcount + dcount + ncount + pcount;
printf("Final Count:%i\n", finalCount);
//printf("Quarters: %i\nDimes: %i\nNickles: %i\nPennys: %i\n", qcount, dcount, ncount, pcount);
return 0;

}