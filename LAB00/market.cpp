#include <stdio.h>
  
  main(){ 
  	int check;
        printf("TAKE A LIST.\n");
        printf("GO TO THE MARKET.\n");
        do
		{
		printf("=================\n");
		printf("--DO SHOPPINNG.--\n");
		printf("  CHECK LIST ?\n");
		printf("YES = 1 OR NO = 0 ? : ");
		scanf("%d",&check);
		printf("=================\n");
		}
		while(check == 0);
		printf("  GO HOME");	
		return 0;	     
  }
