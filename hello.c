#include<stdio.h>
void main(){
int n;
int f=1,i,num;
int sum=0,num1=123,r=0;
int j,temp,num2;
printf("enter your table number\n");
scanf("%d",&num2);
for(j=1;j<=20;j++){
temp=num2*j;
printf("%d*%d=%d\n",num2,j,temp);

}





printf("enter the number\n");
scanf("%d",&num);
for(i=2;i<=num;i++)
{
f=f*i;

}
printf("factorial of your number=%d\n",f);
printf("enter the individual number=");
scanf("%d",&num1);
while(num1!=0){
r=num1%10;
sum=sum+r;
num1=num1/10;
}
printf("sum of individual numbers=%d\n",sum);










printf("hello world\n");
printf("enter number\n");
scanf("%d",&n);
if(n%2==0)
printf("your enterd even number\n");
else
printf("your enterd odd number\n");


}