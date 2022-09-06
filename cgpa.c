#include <stdio.h>
#include <stdlib.h>

main(){
    float g1,g2,g3,g4,g6,g5,cr1,cr2,cr3,cr4,cr5,cr6,cr,cgpa;
    printf("\n Enter course 1 Credit: ");
    scanf("%f",&cr1);
    printf("Enter course 1 grade: ");
    scanf("%f",&g1);
    printf("\nEnter course 2 Credit: ");
    scanf("%f",&cr2);
    printf("Enter course 2 grade: ");
    scanf("%f",&g2);
    printf("\nEnter course 3 Credit: ");
    scanf("%f",&cr3);
    printf("Enter course 3 grade: ");
    scanf("%f",&g3);
    printf("\nEnter course 4 Credit: ");
    scanf("%f",&cr4);
    printf("Enter course 4 grade: ");
    scanf("%f",&g4);
    printf("\nEnter course 5 Credit: ");
    scanf("%f",&cr5);
    printf("Enter course 5 grade: ");
    scanf("%f",&g5);
    printf("\nEnter course 6 Credit: ");
    scanf("%f",&cr6);
    printf("Enter course 6 grade: ");
    scanf("%f",&g6);
    cr = cr1+cr2+cr3+cr4+cr5+cr6;
    cgpa = ((g1*cr1)+(g2*cr2)+(g3*cr3)+(g4*cr4)+(g5*cr5)+(g6*cr6))/cr;

    printf("\n\nYour CGPA: %.2f\n\n",cgpa);

}
