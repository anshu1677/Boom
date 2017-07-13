#include<stdio.h>
main()
{
      int arr1[20];
      int i,j,k;
      int search, deduct, num;

      printf("How many No.:");
      scanf("%d",&num);

      for(i=0;i<num;i++)
      scanf("%d",&arr1[i]);

      for(i=0;i<num;i++)
      printf("Arr[%d] = %d\n",i,arr1[i]);

//Searching a key in an Array
      printf("\nNo. to search ?");
      scanf("%d",&search);


      for(i=0;i<num;i++)
      {
        if(search==arr1[i])
        {
         //                  printf("No. found at %d position in the Arr[%d]",i,arr1[i]);
                           break;
        }
         if(i==5)
                 printf("\nNot Found");
      }
       printf("\nNo. found at Arr1[%d] = %d",i,arr1[i]);



//Deleting a key
      printf("\nNo. to be deleted ?");
      scanf("%d",&deduct);

      for(i=0;i<num;i++)
                      if(arr1[i]==deduct)
                      break;

      for(k=i;k<num;k++)
      arr1[k] = arr1[k+1];
      num = num -1;

      for(i=0;i<num;i++)
      printf("Arr[%d] = %d\n",i,arr1[i]);



      getch();

      }
