 #include<stdio.h>
#include<stdlib.h>

int main()
{
       int n,i,j,s,c=0;
       printf("\nEnter the size of Matrix.\n");
       scanf("%d",&n);
       int **a;
       a = malloc(n*sizeof(int*));
       printf("Enter the elements in the Matrix.\n");
       for(i=0;i<n;i++)
       {
              a[i] = malloc(n*sizeof(int));
              for(j=0;j<n;j++)
              {
                     printf("[%d,%d] : ",i+1,j+1);
                     scanf("%d",&a[i][j]);     
              }
       }
       printf("Enter the element to be searched.\n");
       scanf("%d",&s);
       for(i=0;i<n;i++)
       {
              for(j=0;j<n;j++)
              {
                     if(s == a[i][j])
                     {
                           printf("Element %d at position Number [%d,%d].\n",s,i+1,j+1);
                           c++;
                     }
              }
       }
       if(c==0)
       {
              printf("No Such ELement is Present\n");
       }
       return 0;
}

