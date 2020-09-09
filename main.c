// Author: zhuoyangjiang zfj5038@psu.edu
// Collaborator:
// Collaborator:
// Collaborator:
// Section: 7
// Breakout: 
#include "stdio.h"
#include "stdlib.h"

int main()
{
    double grade;
    scanf("%lf",&grade);
    printf("Enter your CMPSC 131 grade: %.2f\n",grade);
    if(grade >= 93.0)
        printf("Your letter grade for CMPSC 131 is A.\n");
    else if(grade >= 90.0)
        printf("Your letter grade for CMPSC 131 is A-.\n");
    else if(grade >= 87.0)
        printf("Your letter grade for CMPSC 131 is B+.\n");
    else if(grade >= 83.0)
        printf("Your letter grade for CMPSC 131 is B.\n");
    else if(grade >= 80.0)
        printf("Your letter grade for CMPSC 131 is B-.\n");
    else if(grade >= 77.0)
        printf("Your letter grade for CMPSC 131 is C+.\n");
    else if(grade >= 70.0)
        printf("Your letter grade for CMPSC 131 is C.\n");
    else if(grade >= 60.0)
        printf("Your letter grade for CMPSC 131 is D.\n");
    else 
        printf("Your letter grade for CMPSC 131 is F.\n");
}
