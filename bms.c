#include <stdio.h>

#define ROWS 5
#define COLS 5

// Function to display the seat matrix
void displaySeats(int seats[ROWS][COLS]) {
    printf("  ");
    for (int j = 0; j < COLS; j++) {
        printf("%d ", j);
    }
    printf("\n");
    for (int i = 0; i < ROWS; i++) {
        printf("%d ", i);
        for (int j = 0; j < COLS; j++) {
            if (seats[i][j] == 0) {
                printf("O "); // Available seat
            } else {
                printf("X "); // Booked seat
            }
        }
        printf("\n");
    }
}

// Function to book a single seat
void bookSingleSeat(int seats[ROWS][COLS]) {
    int row, col;
    printf("Enter row number (0-4): ");
    scanf("%d", &row);
    printf("Enter column number (0-4): ");
    scanf("%d", &col);
    if (seats[row][col] == 0) {
        seats[row][col] = 1; // Book the seat
        printf("Seat booked successfully!\n");
    } else {
        printf("Seat already booked!\n");
    }
}

// Function to book multiple seats
void bookMultipleSeats(int seats[ROWS][COLS]) {
    int numSeats;
    printf("Enter number of seats to book: ");
    scanf("%d", &numSeats);
    if (numSeats > 0) {
        int choice;
        printf("Do you want to book seats in a row (1) or randomly (2)? ");
        scanf("%d", &choice);
        if (choice == 1) {
            // Book seats in a row
            int row;
            printf("Enter row number (0-4): ");
            scanf("%d", &row);
            for (int i = 0; i < numSeats; i++) {
                if (seats[row][i] == 0) {
                    seats[row][i] = 1; // Book the seat
                } else {
                    printf("Seat already booked!\n");
                    break;
                }
            }
            printf("Seats booked successfully!\n");
        } else if (choice == 2) {
            // Book seats randomly
            for (int i = 0; i < numSeats; i++) {
                int row, col;
                printf("Enter row number (0-4): ");
                scanf("%d", &row);
                printf("Enter column number (0-4): ");
                scanf("%d", &col);
                if (seats[row][col] == 0) {
                    seats[row][col] = 1; // Book the seat
                } else {
                    printf("Seat already booked!\n");
                    break;
                }
            }
            printf("Seats booked successfully!\n");
        }
    }
}

int main() {
    int seats[ROWS][COLS] = {0}; // Initialize all seats as available
    int choice;
    while (1) {
        printf("1. Display seats\n");
        printf("2. Book single seat\n");
        printf("3. Book multiple seats\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                displaySeats(seats);
                break;
            case 2:
                bookSingleSeat(seats);
                break;
            case 3:
                bookMultipleSeats(seats);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
