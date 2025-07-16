#include<stdio.h>
int main(){
    // Local Structure
    struct Internship
    {
        int reg_id;
        char name[20];
        char domain[20];
        float fees;
        int duration;
    } I1, I2; // Declaring the structure variable during the Structure Definition
    printf("Enter the Internship details of Candidate 1:\n");
    printf("Registration ID:\n");
    scanf("%d", &I1.reg_id);
    printf("Name:\n");
    scanf(" %[^\n]", &I1.name);
    printf("Internship Domain:\n");
    scanf(" %[^\n]", &I1.domain);
    printf("Internship Fees:\n");
    scanf("%f", &I1.fees);
    printf("Internship Duration:\n");
    scanf("%d", &I1.duration);
    printf("Internship Registration Details of the Candidate 1 are as follows:\n");
    printf("ID: %d\t Name: %s\t Domain: %s\t Fees: Rs.%.2f\t Duration:%d Months\n",I1.reg_id, I1.name, I1.domain, I1.fees, I1.duration);
}