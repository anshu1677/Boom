void main()
{
 int x;
 int *p;
 int *ptr = malloc(sizeof(*ptr));
 
 ptr=&p;
 p=&x;
 
 scanf("%d",&x);
 printf("Value at Address x=%d is %d %d %d\n",p,*p,x,*ptr);
 
 arr();
 
 getch();
 free (ptr);
 }
 
