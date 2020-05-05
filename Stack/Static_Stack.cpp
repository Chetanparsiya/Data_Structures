#include<iostream>
using namespace std;
int top=-1;//Pointing to the Last Element in Stack
void push(int stack[],int data,int stack_size)//Push Function
{
	if(top==stack_size-1)//Stack Reach to Maximum Size
	cout<<"Overflow.....!";
	else 
	stack[++top]=data;//Pushing of Element
}
void pop()//Pop Function
{
	if(top==-1)//No Element is Present in Stack
	cout<<"UnderFlow.....!";
	else top--;//Popping of Element
}
void Display_Stack(int stack[])//Displaying Element
{	cout<<"\nStack Element are : ";
	for(int i=0;i<=top;i++)
	cout<<stack[i]<<" ";
}

int main()
{	int Ch,stack_size,ch;
	cout<<"Enter the size of Stack : ";
	cin>>stack_size;
	int stack[stack_size],data;
	do{
		cout<<"1.Insertion\t2.Deletion\t3.Display\nEnter the Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1://Insertion in Stack
				cout<<"Enter the Data : ";
				cin>>data;
				push(stack,data,stack_size);
				Display_Stack(stack);
				break;
			case 2:
				pop();//Deletion in stack
				Display_Stack(stack);
				break;
			case 3:
				Display_Stack(stack);//Display
		}
	
		cout<<"\nDo you Wish To Continue...... : ";
		cin>>Ch;
	}while(Ch);
}
