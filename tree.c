#include <stdlib.h>
#include <stdio.h>
#include "test.h"
struct node 
{
   int value;
   struct node  *next; 
   struct node  *prev;

} typedef elem; 
/*
int delete( elem * root  ,int value )
{
   elem *curr=root;
  while(curr->next != NULL)
  {
		if( curr->value == value )
		{
			curr->prev->next=curr->next;
			curr=NULL;
			return 1;
		}
                   printf("%d\n",curr->value);
                   curr=curr->next;

 }
  return 0;

}

void insert(elem *node , int  value )
{
	    

	    node->next =  (elem * ) malloc(sizeof( elem));
	    node->next->value=value;
	    node->next->next=NULL;
	    node->next->prev=node;

}
*/
elem *  find_last_elem( elem *root  )
{
   elem *curr=root;
 
	while(curr->next != NULL)
	{
	
		printf("%d\n",curr->value);
	     	curr=curr->next;

	}
return   curr;
}

int main()
{



  elem * root =  (elem * ) malloc(sizeof( elem));
  root->value=1;
  root->next=NULL;
  elem * curr;



  curr= find_last_elem(root);
  insert(curr,10);	



  curr= find_last_elem(root);
  insert(curr,30);	
  
  

  curr= find_last_elem(root);

  insert(curr,40);	
  

  curr=find_last_elem(root);

  insert(curr,80);	
  delete(root,10);
  find_last_elem(root);
  //find_last_elem(root,15);

 // find_last_elem(root,125);
//  find_last_elem(root,105);

 // elem *root;
//  insert(*root, 5);
 // printf("%d",root->value);
  return 0;
  
}
