#include <stdio.h>
#include <stdlib.h>

int main(void) {

    /* The variable groups is uninitialized */
    int classes = 2, groups, students = 280, courses = students;
    int average_pr_group = 0, average_pr_course = 0;

    printf("How many groups are there? \n");
    scanf("%d", &groups);
    average_pr_group = students / groups;
    average_pr_course = students / classes;
    printf("Classes: %d, Groups: %d, Students: %d, Courses: %d \n", classes, groups, students, courses);

    printf("There are %d students pr. group.\n", average_pr_group);
    printf("There are %d students pr. class.\n", average_pr_course);

    return(0);
}