#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#inlucde <stdlib.h>

typedef struct node {
	int lkey;
	char name[10];
	struct node*next;
	}TNODE;
	
	TNODE *first, *last;
	
	int LoadNode(TNODE*p);
	void FreeNode(TNODE*p);
	void PrintNode(TNODE*p);
	
	void CreateList()
	{
			TNODE*p;
			int n=sizeof(TNODE);
			
			first=last=0;
			for(;;)
			{
				if(p=(TNODE*)malloc(n))==0)
				{
					printf("\nmemory not enough");
					break;
				}
				if(LoadNode(p)!=1)
				{
					FreeNode(p);
					break;
				}
				p->next=0;
				if(first==0)
					first==last=p;
				else{
					last->next=p;
					last=p;
				}
			}
	}
	
	int LoadNode(TNODE*p)
	{
		char opt;
		printf("\nmasukkan node baru?");
		opt=getche();
		opt=toupper(opt);
		if(opt!='N'){
			puts("\nmasukkan data untuk node?");
			printf("\nlkey:\t");
			if(scanf("%d",&(p->lkey))!=1) return 0;
			
			printf("\nname:\t"); if (scanf("%s",p->name)!=1)
		return 0;
			return 1;
			}
			else
				return -1;
	}

void FreeNode(TNODE*p){
		free(p);
	}
	
void ViewAllList()
{
	TNODE*p;
	p=first;
	while(p){
			PrintNode(p);
			p=p->next;
		}
}

TNODE*FindNode(int key)
{
	TNODE*p;
	p=first;
	while(p){
			if(p->lkey==key) return p;
			p=p->next;
		}
		return 0;
}

void PrintNode(TNODE*p)
{
	if(p)printf("\n%d\t%s",p->lkey,p->name);
}

TNODE*InsertBeforeFirst()
{
	TNODE*p;
	int n=sizeof(TNODE);
	if(((p=(TNODE*)malloc(n))!=0)&&(LoadNode(p)==1))
	{
		if(first==0){
				p->next=0;
				first=last=p;
			}
			else{
					p->next=first;
					first=p;
				}
				return p;
	}
	if(p==0)
		printf("\nmemory is not enough");
		else
			FreeNode(p);
		return 0;
}

TNODE*insertBeforeKey(int key)
{
	TNODE *p, *q, *q1;
	int n=sizeof(TNODE);
	
	q1=0;
	q=first;
	while(q){
			if(q->lkey ==key) break;
			q1=q;
			q=q->next;
		}
		if(q==0){
				printf("\ntidak ada node yang mempunya kunci atau senarai kosong");
				return 0;
			}
		if(((p=(TNODE*)malloc(n))!=0)&&(LoadNode(p)==1)){
				if(q==first){
							p->next=first;
							first=p;
						}
						else{
								q->next=q;
								q1->next=p;
							}
							return p;
			}
		if(p==0){
				printf("\nmemory is not enough");
				else
				FreeNode(p);
			return 0;
			}
}
