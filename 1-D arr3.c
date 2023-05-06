#include <stdio.h>

main()
 {
   int a[100],i,n;
   int sum;
   float avg;
   sum = avg = 0;
   
    printf("Enter size of array: ");
    scanf("%d",&n);
 
     printf("Enter %d elements in the array:\n", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
   
   for(i = 0; i <n; i++) 
   {
      sum = sum + a[i];
   }
   printf("sum of array is=%d\n",sum);
   
   avg = (float)sum / i;
   printf("\nAverage of array is=%.2f", avg);   
   
}