#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 49
#define TICKET_LENGTH 6

void fillTicket(int ticket[], int length) {
  int i;
  for (i = 0; i < length; i++) {
    ticket[i] = rand() % MAX_NUMBER + 1;
  }
}

void printTicket(int ticket[], int length) {
  int i;
  for (i = 0; i < length; i++) {
    printf("%d ", ticket[i]);
  }
  printf("\n");
}

int main() {
  srand(time(0));
  int ticket[TICKET_LENGTH];
  fillTicket(ticket, TICKET_LENGTH);
  printTicket(ticket, TICKET_LENGTH);
  return 0;
}
