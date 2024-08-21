//Riley Barnes CS 12600
//Due March 31st
//Problem 1: Find factorial then add factorial's digits together

#include<stdio.h>

void Fact(int,int*);

void findSum(int,int*);

int main(){
int x, f, n, s;

printf("Enter the number: ");

scanf("%d",&n);

Fact(n,&f);

printf("The factorial of %d is %d",n,f);

findSum(f,&s);

printf("\nThe sum of the factorial's digits are: %d",s);
}

void Fact(int n, int *f){
int x;

*f = 1;

for(x=1; x<=n; x++){ //loop for factorial (ex 5!=5*4*3*2*1)
	*f=*f*x;
	}
}

void findSum(int n, int *s){
int x;
*s = 0;
//while n is greater than 0, iterate through each digit of factorial 
//once n = 0 the factorial's digits have been added
while (n > 0){ 
x=n%10;
*s=*s+x;
n=n/10;
	}
}