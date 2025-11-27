#include <stdio.h>
struct Flight {
    int flightNumber;
    char departure[20];
    char destination[20];
    char date[15];
    int seats;
};
void bookSeat(struct Flight *f) {
    if (f->seats > 0) {
        f->seats--;
        printf("\nSeat booked successfully!\n");
    } else {
        printf("\nNo seats available!\n");
    }
}
void displayFlight(struct Flight f) {
    printf("\n---- FLIGHT DETAILS ----\n");
    printf("Flight Number : %d\n", f.flightNumber);
    printf("Departure     : %s\n", f.departure);
    printf("Destination   : %s\n", f.destination);
    printf("Date          : %s\n", f.date);
    printf("Seats Left    : %d\n", f.seats);
}
int main() {
    struct Flight f1;
    printf("Enter Flight Number:\n ");
    scanf("%d", &f1.flightNumber);
    printf("Enter Departure City:\n ");
    scanf("%s", f1.departure);
    printf("Enter Destination City:\n ");
    scanf("%s", f1.destination);
    printf("Enter Date (DD/MM/YYYY):\n ");
    scanf("%s", f1.date);
    printf("Enter Available Seats:\n ");
    scanf("%d", &f1.seats);
    int choice;
    while (1) {
        printf("\n1. Book a Seat\n2. Display Flight Details\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                bookSeat(&f1);
                break;
            case 2:
                displayFlight(f1);
                break;
            case 3:
                return 0;
            default:
                printf("\nInvalid choice!\n");
        }
    }
}
