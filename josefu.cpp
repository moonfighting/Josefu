#include<iostream>
#include<stdio.h>
using namespace std;
struct Node
{
	int data;
	Node* next;
};

void josefu(int n,int m)
{
	Node *head=new Node;
	head->next=NULL;
	head->data=1;
	Node *s=head;
	for(int i=2;i<=n;i++)
	{	
		Node *p=new Node;
		p->data=i;
		p->next=NULL;
		s->next=p;
		s=s->next;
	}
        s->next=head;
	Node *p=head;
	cout<<"输入的顺序为:"<<endl;
        for(int j=1;j<=n;j++)
        {
		cout<<p->data<<" ";
		p=p->next;
	}
 	cout<<endl;
	p=head;
	cout<<"输出的顺序为:"<<endl;
	while(p)
	{
		for(int k=1;k<m-1;k++)
		{
			p=p->next;
		}
		cout<<p->next->data<<" ";
		Node*s=p->next;
		p->next=s->next;
		s->next=NULL;
		delete s;
		p=p->next;
		
	}
	cout<<endl;
		
		
}
int main()
{      
	char key;
	while(key!='n')
	{
		int n,m;
		cout<<"请输入总人数n和m:"<<endl;
		cin>>n>>m;
		josefu(n,m);
		cout<<"continue:y"<<" "<<"exit:n"<<endl;
		cin>>key;
		
	}
	return 0;
} 		
