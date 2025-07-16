#include<stdio.h>
int main(){
    // Syntax for structure definition:
    // struct Structure_name{
    // datatype variable1;
    // datatype variable2;
    // datatype variable3;
    // };
    struct Student 
    {
        int id;
        char name[20];
        char branch[20];
        int sem;   
    };
    // Syntax for Structure Variable Declaration:
    // struct Structure_name var1, var2, ....varn;
    struct Student s1 = {1, "Akshay", "ISE", 8};
    struct Student s2 = {2, "Ajay", "CSE", 6};
    // Dot(.) Operator is used to access the data of the Structure Variable
    printf("Student 1 - Name: %s\n", s1.name);
    printf("Student 2 - Name: %s\n", s2.name);
    printf("Student 1 - Branch Name: %s\n", s1.branch);
    printf("Student 2 - Branch Name: %s\n", s2.branch);
    printf("Student 1 - Sem: %d\n", s1.sem);
    printf("Student 2 - Sem: %d\n", s2.sem);
}