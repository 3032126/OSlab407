#include <stdio.h>
int main(){
	int a,b,c,sum;
	while(1){
	printf("enter a number :");
	scanf("%d",&a);
	if (a <= 0){
		printf("error\n");
		break;
	}
	printf("enter two number : ");
	scanf("%d %d",&b,&c);
	if (b <= 0){
		printf("error\n");
		break;
	}
	if (c <= 0){
		printf("error\n");
		break;
	}
	sum = a+b+c;
	printf("summition = %d\n",sum);
	printf("average = %d\n",sum/(int)3);
	}
	return 0;
}
