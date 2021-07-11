#include<stdio.h>
//Question1
  double sum(int n){
  double i;
  double s=0.0;
	for(i=1;i<=n;i++){
		s=s+1/i;
	}
	return s;
}
int main(){
int num;
printf("Enter a number:");
scanf("%d",&num);	
printf("Sum is %lf",sum(num));
}
//Question2
void swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int main(){
	int n1,n2;
	swap(&n1,&n2);
	printf("enter value of a=");
	scanf("%d",&n1);
	printf("enter value of b=");
	scanf("%d",&n2);
	swap(&n1,&n2);
	printf("After swapping a=%d,b=%d",n1,n2);
	return 0;
}
//Question3
void main()
{
    while(1){
        char x;
        int a,b;
        printf("Enter an Operator (+,-,*,/) :");
        scanf(" %c",&x);
        //if entered . then terminates
        if(x=='.'){
            break;
        }
        if(x=='+'){
            printf("Enter two operands : ");
            scanf("%d%d",&a,&b);
            Add(a,b);
        }
        else if(x=='-'){
            printf("Enter two operands : ");
            scanf("%d%d",&a,&b);
            Subtract(a,b);
        }
        else if(x=='*'){
            printf("Enter two operands : ");
            scanf("%d%d",&a,&b);
            Multiplication(a,b);
        }
        else if(x=='/'){
            printf("Enter two operands : ");
            scanf("%d%d",&a,&b);
            division(a,b);
        }else{
            printf("error. operation is not defined\n");
        }
    }
    return;
}
//function for adding
void Add(int a, int b){
    printf("sum = %d\n",a+b);
    return;
}
//function for subtraction
void Subtract(int a, int b){
    printf("subtraction = %d\n",a-b);
    return;
}
//function for division
void division(int a, int b){
    int x = a/b;
    printf("division = %d\n",x);
    return;
}
//function for multiplication
void Multiplication(int a, int b){
    printf("Multiplication = %d\n",a*b);
    return;
}
//Question4
#include <stdio.h>
#include<math.h>
int sumSquare(int num){
    int sum=0,i;
    for(i=1;i<=num;i++){
        sum+=(i*i);
    }
    return sum;
    
}
int squareSum(int num){
    int n,sum=0;
    for(n=1;n<=num;n++){
        sum=pow(n*(n+1)/2,2);
    }
    return sum;
    
}
int main()
{
int num;
int result;
printf("enter a number:");
scanf("%d",&num);
printf("square of sum: %d\n",squareSum(num));
printf("sum of square:%d\n",sumSquare(num));
result=squareSum(num)-sumSquare(num);
printf("result=%d\n",result);

}





