#include <stdlib.h>
#include <stdio.h>
#include "test.h"
struct node 
{
   int value;
   struct node  *left; 
   struct node  *right;
   struct node  *prev;

} typedef elem; 

elem *  find_last_elem( elem *next , int value  )
{
  
       printf("%d\n", value);	
    if(next == NULL )
   {
		

      elem * next =  (elem * ) malloc(sizeof( elem));


      next->value=value;
      next->left=NULL;
      next->right=NULL;

    printf("1 -st=%d\n", next->value);
      return next;
  }

    else if ( next->right < value )
    {
	find_last_elem(next->right, value );

    }
   else if(next->right == NULL && next->value < value  )
   {



     next->right= (elem * ) malloc(sizeof( elem));
     next->right->left=NULL;
     next->right->right=NULL;
     next->right->value=value;

     printf("2 -nd =%d\n", next->right->value);

     return next;
   }


   else if(next->left == NULL && next->value > value )
   {
     

     next->left= (elem * ) malloc(sizeof( elem));
     next->left->left=NULL;
     next->left->right=NULL;
     next->left->value=value;

     printf("3 -nd =%d\n", next->left->value);
     return next;
   }
   else if(next->left == NULL && next->right == NULL )
   {
	   

     next->left= (elem * ) malloc(sizeof( elem));
     next->left->left=NULL;
     next->left->right=NULL;
     next->left->value=value;
     
     printf("4 -nd =%d\n", next->left->value);
     return next;
   }
   else if (  next->left->value > value   )
   {

	   printf("%s  \n", "next");
	   find_last_elem(next->left, value );
   }

   else if (  next->right->value <= value   )
   {
      
	   printf("%s \n", "next");
	   find_last_elem(next->right, value );
   }
    else
    {
	    printf("WRONGGGGGGGGG %d\n",value);
    }





   
 
return   next;
}
int show_me_list(elem *next )
{
   if (next == NULL )
   {

    return 0;
   }	   
   int check;
   while(next->left != NULL )
   {

	    printf("%d", next->left->value);
	    check=show_me_list(next->left->left);
	    if(check== 0)
	    {
		    return 0;
	    }
	     
   }
    return 1;
}

int main()
{

  

  
   elem *root=find_last_elem(NULL,4);

   find_last_elem(root,5);

   find_last_elem(root,14);

   find_last_elem(root,16);
   find_last_elem(root,1);
   find_last_elem(root,13);

   find_last_elem(root,2);

   find_last_elem(root,25);
   find_last_elem(root,28);
   show_me_list(root); 

  return 0;

}
