#include <stdio.h>

int main() {
    char customerName[50];
    int bookingId;
    int tickets;
    float ticketPrice, totalAmount;

    printf("===== Ticket Booking System =====\n\n");

    printf("Enter Booking ID: ");
    scanf("%d", &bookingId);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customerName);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    printf("Enter Price per Ticket: ");
    scanf("%f", &ticketPrice);

    // Calculate Total Amount
    totalAmount = tickets * ticketPrice;

    // Display Booking Receipt
    printf("\n=====================================\n");
    printf("         BOOKING RECEIPT\n");
    printf("=====================================\n");
    printf("Booking ID      : %d\n", bookingId);
    printf("Customer Name   : %s\n", customerName);
    printf("Tickets Booked  : %d\n", tickets);
    printf("Price/Ticket    : %.2f\n", ticketPrice);
    printf("-------------------------------------\n");
    printf("Total Amount    : %.2f\n", totalAmount);
    printf("Booking Status  : CONFIRMED\n");
    printf("=====================================\n");

    return 0;
}