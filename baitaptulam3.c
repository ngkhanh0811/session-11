#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int l, i, num[5], desnum[5];
	int k, j, temp;
	for(l=0;l<5;l++)
	{
		printf("\nNhap vao gia tri thu %d : ", l+1);
		scanf("%d", &num[l]);
	}
	for(k=0;k<5;k++)
	desnum[k]=num[k];
    for(i=0;i<4;i++)
	{
		for(j = i + 1;j<5;j++)
	{
	if(desnum[i]<desnum[j])
	{
		temp=desnum[i];
		desnum[i]= desnum[j];
		desnum[j] = temp;
	}
}
}
    for (i=0;i<5;i++)
    printf("\nSo dung thu [%d] la : %d", i+1, desnum[i]);
}
