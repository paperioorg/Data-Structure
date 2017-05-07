#include<stdio.h>
int fact(int);
int main(){
	int num;
	printf("enter no");
	scanf("%d",&num);
	
	num=fact(num);
	printf("factorial is: %d",num);
	return 0; 
}
int fact(int n)
    {
	 int fac;                     
	 if(n<1){
	 	return 1;
	 }else
	 {
	 fac=n*fact(n-1);
	 printf("\n");
	 fac=n*fact(n-2);
	 printf("%d",n);
	 
	 
	 return fac;
     }
    }
