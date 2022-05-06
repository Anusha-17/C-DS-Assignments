#include<stdio.h>
#include<stdlib.h>
struct student
{
  char name[30];
  char branch[10];
  float cgpa;
};
 int main()
  {
  struct student *ptr;
  int records,i;
  printf("Enter the number of records: ");
  scanf("%d", &records);
  // Memory allocation for noOfRecords structures
  ptr = (struct student *)malloc(records * sizeof(struct student));
  for (i = 0; i < records; i++)
   {
   	printf("Enter student details:\n");
    scanf("%s %s %f", &(ptr+i)->name,(ptr+i)->branch,&(ptr+i)->cgpa);
  }
  printf("Displaying Student details:\n");
  for (i = 0; i < records; i++)
   {
    printf("%s\t%s\t%f\n", (ptr+i)->name,(ptr+i)->branch,(ptr+i)->cgpa);
  }
  free(ptr);
  return 0;
}
