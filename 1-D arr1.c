#include <stdio.h>
main()

{
    int a[1000],i,n;  
 
     printf("Enter size of array: ");
    scanf("%d",&n);
 
     printf("Enter %d elements in the array:\n", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
 
    printf("\nElements in array are:\n");
    for(i=0;i<n;i++)
 
    {
        printf("a[%d] =%d\n",i,a[i]);
    }
 
}