#include<stdio.h>
#include<stdlib.h>

typedef struct n{
	int x;
	n * next;
}node;

node* ekle(node * root,int i){
    if(root==NULL){
	    root =(node *) malloc(sizeof(node));
	    root->x=i;
	    root->next=NULL;
	    return root;
	}	
	node* iter;
	iter=root;
    while(iter->next!=NULL){
    	iter=iter->next;
	}
	iter->next=(node *) malloc(sizeof(node));
	iter->next->x=i;
	iter->next->next=NULL;
	return root;
	
}
void bastir(node *root){
	node * iter;
	iter=root;
	while(iter->next!=NULL){
		printf("\n %d",iter->x);
		iter=iter->next;
	}
	printf("\n %d",iter->x);
}

int main(){
	node * root;
	root=NULL;
	int i,j,j2;
	printf("kac adet sayi eklemek istersiniz:");
	scanf("%d",&i);
	printf("sayilari sirasiyla giriniz:");
	for(j=0;j<i;j++){
		scanf("%d",&j2);
		root=ekle(root,j2);
	}
	bastir(root);
	
	return 0;
	}
