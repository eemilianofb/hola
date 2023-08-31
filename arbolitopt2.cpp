//arbolito

#include <stdio.h>

int main ()
{
	int n;
	
	printf("Dame un numero del 1 al 10. \n");
	scanf("%d",&n);
	
	if(n>=1 && n<=3)
	{
		printf("     +   \n");
		printf("  //  \\\\ \n");
		printf(" //    \\\\ \n");
		printf("//      \\\\ \n");
		printf(" ________     \n");
		printf("    ||     \n");
    }
	else 
	{ 
 		if(n>=4 && n<=7)
		{
     		printf("         +   \n");
    		printf("      //  \\\\ \n");
     		printf("     //    \\\\ \n");
	 		printf("    //      \\\\ \n");
	 		printf("   //        \\\\ \n");
	 		printf("  //          \\\\ \n");
	 		printf(" //            \\\\ \n");
	 		printf("//              \\\\ \n");
     		printf("     ________     \n");
	 		printf("        ||     \n");
		}
	}

	
	return 0;
}
