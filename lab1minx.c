#include<stdio.h>


int main(){
	
	int n1 ;
	int n2 ;
	printf("n1=");
	scanf("%d",&n1);
	printf("n2=");
	scanf("%d",&n2);

	if(n1 > n2){
		printf("n1 is greater than n2 %d",n1-n2);
	}else{
		printf("n2 is greater than n1 %d",n2-n1);
	}
}
