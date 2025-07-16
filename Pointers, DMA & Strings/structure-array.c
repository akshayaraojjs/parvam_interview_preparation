#include<stdio.h>
// Global Structure
struct Ticket{
    int booking_id; 
    char person_name[20]; 
    char seat_num[3];
    char movie[50];
    char show_time[10];
    float amount;
    char theater[50];
};

int main(){
    struct Ticket T1[500];
    int num_of_persons;
    printf("Enter the number of tickets to be booked:\n");
    scanf("%d",&num_of_persons);

    for(int i=0; i<num_of_persons; i++){
        T1[i].booking_id = i+1;
        printf("Enter the Details of Person %d:\n", i+1);
        printf("Enter the Person Name:\n");
        scanf(" %[^\n]", &T1[i].person_name);
        printf("Enter the Seat Number:\n");
        scanf(" %[^\n]", &T1[i].seat_num);
        printf("Enter the Movie Name:\n");
        scanf(" %[^\n]", &T1[i].movie);
        printf("Enter the Show Time:\n");
        scanf(" %[^\n]", &T1[i].show_time);
        printf("Enter the Ticket Price:\n");
        scanf("%f", &T1[i].amount);
        printf("Enter the Theater Name:\n");
        scanf(" %[^\n]", &T1[i].theater);
    }
    for(int i=0; i<num_of_persons; i++){
        printf("The Booking Details of Person %d are as follows:\n", i+1);
        printf("Booking ID: %d\n",T1[i].booking_id);
        printf("Person Name: %s\n",T1[i].person_name);
        printf("Seat Number: %s\n",T1[i].seat_num);
        printf("Movie Name: %s\n",T1[i].movie);
        printf("Show Time: %s\n",T1[i].show_time);
        printf("Ticket Price: Rs.%.2f\n",T1[i].amount);
        printf("Theater Name: %s\n",T1[i].theater);
        printf("-----------------------------------------------");
    }
}