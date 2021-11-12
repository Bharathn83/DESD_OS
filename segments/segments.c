/** 
  * $gcc -Wall -save-temps segments.c -o segments
  * $size segments.o
  *    text	   data	    bss	    dec	    hex	filename
  *  	128	      8	      0	    136	     88	segments.o
  *
  * $size segments
  *    text	   data	    bss	    dec	    hex	filename
  * 	1571	    608	      8	   2187	    88b	segments
  */

#include <stdio.h>
#include <stdlib.h>
int a;		//global unintialised - bss section - stores with value 0
int x = 10;	//global intilised - data section - stores with x = 10
int y = 20;

int main()
{
    int b;	//local variable - stack section - stores garbage
    int c = 13;	//local vaiable - stack section - stores c = 13
    int *d = (int*)malloc(10 * sizeof(int)); //dynamic allocated - heap section - stores 40 bytes if size of int is 4
    return 0;
}
