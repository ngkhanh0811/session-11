#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int arr[3][4];
	int dong, cot;
	for(dong=0;dong<3;dong++)
	{
		for(cot=0;cot<4;cot++)
		{
		printf("\nNhap gia tri o dong va cot [%d][%d]", dong, cot);
		scanf("%d", &arr[dong][cot]);
	}
}
    for(dong=0;dong<3;dong++)
    {
    	for(cot=0;cot<4;cot++)
    	printf("\nGia tri o dong va cot [%d][%d] la : %d ", dong, cot, arr[dong][cot]);
	}
}
