#include <stdio.h>
int main (){
	int num,count = 1,rem,sum,a;
	printf("Enter a number:");

	fflush(stdin);
		scanf("%d",&a);

	while(count <=a){
		num=count;
		sum=0;
		
		while(num>0){
			rem = num % 10;
			sum = sum + (rem*rem*rem);
			num = num / 10;
		}
		//printf("num=%d,sum=%d ",count,sum);
		if(sum==count)
			printf("\n%d",count);
		
		count++;
	}
	return 0;
}

