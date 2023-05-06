#include <stdio.h>

main()
{
   int A[100];
   int B[100];
   int C[100];
   int i,k,n;
   
    printf("Enter size of array: ");
    scanf("%d",&n);
 
     printf("Enter %d elements in the array A:\n", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
        C[k]=A[i];
        k++;
    }
    
    
     printf("Enter %d elements in the array B:\n", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &B[i]);
        C[k]=B[i];
        k++;
    }
    printf("After merging A and B elements in array is:\n");
     for(i=0;i<k;i++)
    {
    	printf("%d\n",C[i]);
    }
} 