/*
 * Advanced Calculator
 *
 * This is a quick and dirty ncurses based calculator written
 * as practice to brush up on C. This will also be used as 
 * a program for to port to as many languages as cared.
 *
 * Author: Cameron Roy
 * Date Begun: 2020/12/31
 * Date Completed:
 *
 */

//Libraries included
#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

//Global variables

//Genuinely simple addition functions, move down later
long addition(long a,long b) {
    return a + b;
}

double Daddition(double a, double b) {
    return a + b;
}

//Prototyping functions area
//Binary
long DtoB(long x);
int BtoD(int x);

//Hexadecimal
int HtoD(char x[]);
char DtoH(int x);

//Octal Numbering

int main(void){

//For testing, just runs the BtoD loop with the value in brackets.
printf("Binary to Decimal: %d\n", BtoD(1010));

char Array[8] = {"0","0","0","0","0","0","0","0"};
//printf("Hexadecimal to Decmial: %d\n", HtoD(char *Array));
HtoD(*Array);

//Setting up various ncurses stuff for the window
/*
initscr();
clear();
curs_set(TRUE);
cbreak();
noecho();
timeout(1);
//Screen space related variables
int xMax, yMax;
getmaxyx(stdscr, yMax, xMax);
mvprintw(2,2, "weed");
refresh();
usleep(50000);
*/
return 0;
}

/*
 * This is a loop that converts a base 2 number into a base 10 number.
 * Currently 16bit, but will be expanded to up to 64 bit, as
 * anymore than 64bit doesnt really make sense as current 
 * processors are only 64bit anyways.
 */
int BtoD(int x) {

    //Variable declaration area
    int bArray[16];
    int dArray[16];
    int binaryNum = x;    
    int buffer, power;

    //This section basically reverses the binary number
    for(int i=0;i>=0 && i<16;i++){
        bArray[i] = binaryNum % 10;
        binaryNum /= 10;
    //Only here for testing
    //printf("%d",bArray[i]);
    //printf("|");
    }
    
    //This is where the actual conversion between binary to decimal
    //occurs. basically, it goes from 0 to 15 in the array, at each
    //stage it multiplies the value in that array location by
    //2 to the power of the index. That should give us a pattern
    //of (2^0, 2^1, 2^2...) similar to how you would solve a 
    //conversion as a human. It then stores those values in an
    //array, and finally adds up all the values in the array for
    //the final result
    for(int i=0;i>=0 && i<16;i++){
    power = pow(2,i);
    dArray[i]=bArray[i] * power;
    //printf("\n%d",dArray[i]);
    buffer += dArray[i];
    //printf("\nBUFFER=%d",buffer);
    }
    
    return buffer;
}

int HtoD(char x[]){

        //Variable declaration area
        char hArray[8];
        int dArray[8];
        int buffer, power;
        
        //This section just reverses the order of the array
        for (int i=15,j=0;i>=0;i--,j++){
            hArray[j] = x[i];
            printf("HArray %d\n",hArray[j]);
            printf("X %d\n",x[i]);
        }

}

long DtoB(long x) {

int bin[64];

for (int i=0; i<64; i++){
}

}
