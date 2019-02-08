#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void print_graph(struct node*ad[],int no_of_nodes)
{
	struct node*ptr=NULL;
	int i;
	for(i=0;i<no_of_nodes;i++)
	{
		ptr=ad[i];
		printf("\nthe neighbours of%d are : ",i+1);
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
	}
}
void read_graph(struct node*ad[],int no_of_nodes)
{
struct node*new_node;
int i,j,k,val;
for(i=0;i<no_of_nodes;i++)
{
	struct node *last=NULL;
	printf("\n enter no of neighbours of %d ",i+1);
	scanf("%d",&k);
	for(j=0;j<k;j++)
	{
		printf("enter the value of %d neighbour of %d ",j+1,i+1);
		scanf("%d",&val);
		new_node=(struct node*)malloc(sizeof(struct node*));
		new_node->data=val;
		new_node->next=NULL;
		if(ad[i]==NULL)
			ad[i]=new_node;
			else
			last->next=new_node;
			last=new_node;
	}
	}	
}

int main()
{
	int i,j,k,nodes;
	printf("enter the nodes");
	scanf("%d",&nodes);
	struct node* ad[nodes];
	for(i=0;i<nodes;i++)
	ad[i]=NULL;
	read_graph(ad,nodes);
	print_graph(ad,nodes);
	int a=0;
}

