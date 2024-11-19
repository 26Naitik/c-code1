#include <stdio.h>

int main(){
    int numSubjects;
    float marks , total_marks=0 , percentage;

    printf("Enter the number of subjects:");
    scanf("%d", &numSubjects);

    for (int i=1; i<=numSubjects; i++){
        printf("enter marks of subject %d:",i);
        scanf("%f", &marks);
        total_marks+=marks;
    }

    percentage=(total_marks / (numSubjects*100))*100;

    printf("\ntotal_marks=%.2f\n",total_marks);
    printf("percentage=%.2f\n", percentage);

    if (percentage>=90){
        printf("Result:A+\n");
    }else if (percentage>=80){
        printf("Result:A\n");
    }else if (percentage>=70){
        printf("Result:B\n");
    }else if (percentage>=60){
        printf("Result:C\n");
    }else if (percentage>=50){
        printf("Result:D\n");
    }else{
        printf("FAIL");
    }
    return 0;

}