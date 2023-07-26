#include<iostream>
using namespace std;
int const MAX = 10;

void enque(int que[], int &front, int &rear,int value)
{
	if(front == 0 && rear == MAX-1 || front == rear+1)
		cout<<"Overflow - Queue is Full"<<endl;
	else if(front==-1)
	{
		front = rear = 0;
		que[0] = value;
	}
	else
	{
		rear++;
		rear %= MAX;
		que[rear]=value;
	}
}
void display(int que[],int front,int rear)
{
	if(front==-1)
	{
		cout<<"Queue is Empty"<<endl;
	}
	else
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<que[i]<<endl;
		}
	}
}

int deque(int que[],int &front, int &rear)
{
	int val=0;
	if(front==-1)
	{
		cout<<"Underflow - Queue is Empty"<<endl;
	}
	else if(front==rear)
	{
		val = que[front];
		front=rear=-1;
	}
	else
	{
		val = que[front];
		if(front==MAX-1)
		{
			front=0;
		}
		else
		front++;
	}
	return val;
}
int main()
{
	int queue[MAX],front=-1,rear=-1,num,ch;
	do
	{
		cout<<"Press 1 - Add an Element"<<endl;
		cout<<"Press 2 - Remove an Element"<<endl;
		cout<<"Press 3 - Display All"<<endl;
		cout<<"Press 4 - Exit"<<endl;
		cin>>ch;
		if(ch==1)
		{
			cout<<"Enter number ot be inserted : ";
			cin>>num;
			enque(queue,front,rear,num);
		}
		else if(ch==2)
		{
			num = deque(queue,front,rear);
			if (num!=0)
			{
				cout<<"Deleted Number is : "<<num<<endl;
			}
			else
			{
				cout<<"queue is Empty"<<endl;
			}
		}
		else if(ch==3)
		{
			display(queue,front,rear);
		}
	}while(ch!=4);
	return 0;
}
