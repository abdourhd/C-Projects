#include <stdio.h>
#include "display.h"

void display_title() {
    printf("=============================\n       UNIT CONVERTER       \n=============================\n");
}

int display_menu() {
    printf("\n1. Length\n2. Weight\n3. Temperature\n4. Time\n5. Volume\n\n0. Exit\n\nChoose a category: ");

    int category;
    scanf("%d", &category);

    return category;
}