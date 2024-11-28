#include<stdio.h>


int main(){
	
	int n1;
	int n2;
	scanf("%d \n %d",&n1,&n2);
	if(n1 > n2){
		printf("n1>n2 %d",n1-n2);
	}else{
		printf("n2>n1 %d",n2-n1);
	}
}
