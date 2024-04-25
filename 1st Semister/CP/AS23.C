/*Program No - 23
Title - Write a C program to input marks of five subjects
Physics, Chemistry, Biology, Mathematics and Computer.
Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage <   40% : Grade F

Name of the programmer : Pratik Ghute (MC23F14F020)
*/
#include<stdio.h>
#include<conio.h>
void main()
  {
    float phy, che, bio, math, comp, per;
    char grade;
    clrscr();
    printf("To Display result of (Percentage and Grade )\n");
    printf("Enter Physics Marks : ");
    scanf("%f",&phy);
    printf("Enter Chemistry Marks : ");
    scanf("%f",&che);
    printf("Enter Biology Marks : ");
    scanf("%f",&bio);
    printf("Enter Mathematics Marks : ");
    scanf("%f",&math);
    printf("Enter Computer Marks : ");
    scanf("%f",&comp);
    per = (float)(phy + che + bio + math + comp)/5;
    if(per >= 90)
      grade = 'A';
    else if(per >= 80)
      grade = 'B';
    else if(per >= 70)
      grade = 'C';
    else if(per >= 60)
      grade = 'D';
    else if(per >= 40)
      grade = 'E';
    else
      grade = 'F';
    printf("\n========= Result ========\n");
    printf("Percentage : %f%\n",per);
    printf("Grade      :%c",grade);
    getch();
  }

/*
Output :
To Display result of (Percentage and Grade )
Enter Physics Marks : 87                                                        
Enter Chemistry Marks : 83                                                      
Enter Biology Marks : 90                                                        
Enter Mathematics Marks : 95                                                    
Enter Computer Marks : 98                                                       
                                                                                
========= Result ========                                                       
Percentage : 90.599998%                                                         
Grade      :A
*/