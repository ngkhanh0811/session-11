#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	char alpha[26];
	int i, j;
	for(i=65,j=0;i<91;i++,j++)
	{
		alpha[j] = i;
		printf("Cac ky tu trong bang chu cai la : %c \t %c \t \n", alpha[j], alpha[j] + 32);
	}
	getch();
}
