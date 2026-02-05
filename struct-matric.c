#include <stdio.h>
#define SIZE 10

typedef struct MA_TRAN{
	int a[SIZE][SIZE];
	int d,c;
}MT;

void nhap(MT *a);
void xuat(MT a);

int main(){
	MT a;
	nhap(&a);
	xuat(a);
	return 0;
}

void nhap(MT *a){
	printf("\nnhap dong ma tran(1->10): ");
	scanf("%d", &a->d);
	
	printf("\nnhap cot ma tran(1->10): ");
	scanf("%d", &a->c);
	int i,j;
	for(i=0;i<a->d;i++){
		for(j=0;j<a->c;j++){
			printf("\na[%d][%d]= ", i,j);
			scanf("%d", &a->a[i][j]);
		}
	}
}

void xuat(MT a){
	int i,j;
	printf("\nMa Tran vua nhap:\n");
	for(i=0;i<a.d;i++){
		for(j=0;j<a.c;j++){
			printf("%5d", a.a[i][j]);
		}
		printf("\n");
	}	
}
