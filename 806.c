#include<stdlib.h>
#include<stdio.h>

void multiply(int); //宣告副程式 
void printstar(int);

int main(){
	int mul, star;
	
	printf("請輸入您要幾成己的乘法表(最多10):"); //使用者輸入 
	scanf("%d", &mul);
	printf("請輸入您要幾個星星(*):");
	scanf("%d",&star);
	
	printstar(star); //呼叫副程式並印出星星 
	
	if (mul <= 10){
		multiply(mul); //若小於十印出乘法表 
	}
	
	printstar(star); //呼叫副程式並印出星星
}

void multiply(int n){ //乘法副程式 
	int i, j;
	
	for (i = 1; i <= n; i++){
		for (j = 1; j <= n; j++){
			printf("%d*%d=%d ", i, j, (i * j));
		}
		printf("\n");
	}
}

void printstar(int n){
	int i; 
	for (i = 0;i < n; i++){
		printf("*");
	}
	printf("\n");
}
