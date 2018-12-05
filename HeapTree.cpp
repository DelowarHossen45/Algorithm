#include<bits/stdc++.h>
using namespace std;
struct node
{
	int b,h;
	node *left,*right;
};
void spilt(node *T,node **L,node **R,int x)
{ 
	node *TL,*TR;
	if(T==NULL)
	{
		*L=*R=NULL;
	}
	else if(T->b<x)
	{
		spilt(T->right,&TL,&TR,x);
		T->right=TL;
		*L=T;
		*R=TR;
	}
	else
	{
		spilt(T->left,&TR,&TL,x);
		T->right=TL;
		*L=TL;
		*R=T;

	}
	
}
void print(node *T)
{
	if(T==NULL)
	return ;
	print(T->left);
		printf("%d ",T->b);
	print(T->right);
}
node *create_node(int k)
{
	node *x=(node*)malloc(sizeof(node));
	x->b=k;
	x->h=rand();
	x->left=x->right=NULL;
	return x;	
}
int main()
{
	node *T=create_node(3);
	print(T);
	node *L,*R;
	spilt(T,&L,&R,3);
	print(L);
	print(R);
	return 0;
}
