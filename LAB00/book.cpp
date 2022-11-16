#include <stdio.h>
  
  main(){ 
  	int book;
	 	
        do
		{
		printf("=================\n");
		printf(" BOOK TYPE.\n");
		printf(" SEE BOOK COVER.\n");
		printf(" READ THE CONTENT. \n");
		printf(" YOU NEED BOOK ? \n");
		printf("YES = 1 OR NO = 0 ? : ");
		scanf("%d",&book);
		printf("=================\n");
		}
		while(book == 0 );
		printf(" PAY \n");
		printf(" GO HOME.\n");	
		return 0;	     
  }
