#include<iostream>

using namespace std;
#include <cstdlib>
int cnt=0;
struct node
{
	int data;
	node* next;
	
};node *top=NULL,*temp,*start;
void Display_Stack()
{
	temp=start;
	cout<<"Elements are : ";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
node* Create_Node(int data)//Creating the node 
{	cnt++;
	node* newnode=(node*)malloc(sizeof(node));
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}

void push(int data)//to Push the node to Stack
{	node* creatednode=Create_Node(data);
	if(top!=NULL)
	top->next=creatednode;
	if(top==NULL)
	start=creatednode;
	top=creatednode;
	Display_Stack();
}
void pop()//to Pop the node to Stack
{
	temp=start;
	while(temp->next!=top)
	temp=temp->next;
	temp->next=NULL;
	Display_Stack();
}
int main()
{	bool ch=true;
	int ch1;
	do
	{
	int ch,data,pos;
	cout<<"1.Insertion\t2.Deletion\t3.Display\nEnter the Choice : ";
	cin>>ch;
	if(ch==1)
	{	cout<<"Enter the Data : ";
		cin>>data;
		push(data);
	}
	else if(ch==2)
		pop();
	else if(ch==3)
	Display_Stack();
	cout<<"\nDo you Wish to Enter... : ";
	cin>>ch;	
	}while(ch);
	}

