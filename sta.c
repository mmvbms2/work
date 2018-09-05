#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size];
int top=-1;
void push();
void pop();
void display();
void main(){
int n;
while(1){
printf("\nenter choice\n");
printf("\n1.push\n2.pop\n3.display\n4.exit\n");
scanf("%d",&n);
switch(n){
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:exit(1);
break;
default:printf("\ninvalid choice\n");
}
}
}
void push(){
	int e,i;
	if(size-1==top)
	{
		
		printf("\nstack is full\n");
	}
	else{
	
		printf("enter the element\n");
		scanf("%d",&e);
		
		stack[++top]=e;}
	
	
}
void display(){
	int i;
	if(top==-1){
		
		printf("stack is emty\n");
	}
	else{
	for(i=0;i<=top;i++){
		
		printf("%d\t",stack[i]);
		
	}
	}
	
}
void pop(){
	
	if(top==-1){
		
		
		printf("stack is emty\n");
		
		
		
	}
	else{
		
		
		printf("you deleted:%d",stack[top--]);
		
	}
	
	
	
}