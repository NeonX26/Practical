#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 100
void sort(int *arr)
  {
    int tmp,i,j;
    for(i=0;i<SIZE-1;i++)
      {
	for(j=i+1;j<SIZE;j++)
	  {
	    if(*(arr+i)>*(arr+j))
	      {
		tmp=*(arr+i),*(arr+i)=*(arr+j),*(arr+j)=tmp;
	      }
	  }
      }
  }
int main()
  {
    int *arr,i;
    clrscr();
    randomize();
    printf("Array is\n");
    for(i=0;i<SIZE;i++)
      {
	*(arr+i)=random(100);
	printf("%5d",*(arr+i));
      }
    sort(arr);
    printf("\nSorted array is\n");
    for(i=0;i<SIZE;i++)
      {
	printf("%5d",*(arr+i));
      }
    getch();
    return 0;
  }