#include <stdio.h>

main()
{
   int A[100];
   int B[100];
   int C[100];
   int i,n;
   
    printf("Enter size of array: ");
    scanf("%d",&n);
 
     printf("Enter %d elements in the array A:\n", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }
    
     printf("Enter %d elements in the array B:\n", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &B[i]);
    }
    for(i=0;i<n;i++)
    {
    	C[i]=A[i]+B[i];
    }
    printf("\nsum of A+B is:\n");
     for(i=0;i<n;i++)
    {
    	printf("%d\n",C[i]);
    }
} 




