#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int ary[10];
	int i;
	int total, high;
	for(i=0;i<10;i++)
	{
		printf("Nhap vao cac gia tri cua mang : \n");
		scanf("%d", &ary[i]);
	}
	high = ary[0];
	for(i=0;i<10;i++)
	{
		if(ary[i]>high)
		high=ary[i];
	}
	printf("Gia tri lon nhat cua mang la : %d \n", high);
	for(i=0, total=0;i<10;i++)
	total = ary[i] + total;
	printf("Tong cac gia tri cua mang la : %d", total);
	
}
