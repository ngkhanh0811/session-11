#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int num[5];
	int i;
	num[0] = 10;
	num[1] = 20;
	num[2] = 30;
	num[4] = 40;
	num[5] = 50;
	for(i=0;i<=5;i++)
	{
		printf("Gia tri thu [%d] la : %d\n", i, num[i]);
	}
}
