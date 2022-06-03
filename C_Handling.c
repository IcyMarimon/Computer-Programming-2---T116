#include <stdio.h>
#include <string.h>
float gradeSum(int grades[],int count){
    float sum = 0;
    for(int i = 0;i<count;i++){
        sum += grades[i];
    }
    return sum;
}

float averageGrade(float sum, int count){
    return sum/count;
}
void fillUpForm(){
    char name[250];
    char fileName[250];
    FILE *sFile;
    int id,math,sci,eng;
    float sum,ave;
    printf("Student Name: ");
    scanf("\n%[^\n]s",name);
    printf("Student ID Number: ");
    scanf("%d",&id); 
    printf("Math Grade: ");
    scanf("%d",&math);
    printf("Science Grade: ");
    scanf("%d",&sci);
    printf("English Grade: ");
    scanf("%d",&eng);
    strcpy(fileName,name);
    strcat(fileName,".txt");
    sFile = fopen(fileName,"w");
    int grades[] = {math,sci,eng};
    int size = sizeof(grades)/sizeof(grades[0]);
    sum = gradeSum(grades,size);
    ave = averageGrade(sum,size);
    fprintf(sFile,"Student Name: %s\nStudent ID Number: %d\nMath Grade: %d\nScience Grade: %d\nEnglish Grade: %d\nTotal Grade: %.2f\nAverage Grade: %.2f",name,id,math,sci,eng,sum,ave);
}

int main(){
    int num;
    printf("Enter number of students: ");
    scanf("%d",&num);
    for(int x = 0; x<num; x++){
        fillUpForm();
    }
}