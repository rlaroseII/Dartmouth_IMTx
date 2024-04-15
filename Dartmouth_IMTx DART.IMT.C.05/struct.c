#include <stdio.h>

struct student{
    char firstName[30];
    char lastName[30];
    int birthYear;
    double aveGrade;
};

int main(void) {
    //! showMemory(start=65520)
    struct student me = {"Richard", "Larose", 1989, 2.1};
    struct student you = {"Gabriel", "Mondelez", 1999, 3.9};
    printf("Name: %s %s, %s %s\n", me.firstName, me.lastName, you.firstName, you.lastName);
    printf("Year of birth:%d\n", me.birthYear);
    printf("Average grade: %.21f\n",me.aveGrade);  
    return 0;

}

