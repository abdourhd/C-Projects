#include <stdio.h>

#include "converter.h"
#include "history.h"
#include "color.h"

int main() {
    int category;
    display_title();
    do {
        category = display_menu();
        switch(category) {
            case 1:
                length_menu();
                break;

            case 2:
                weight_menu();
                break;

            case 3:
                temperature_menu();
                break;

            case 4:
                time_menu();
                break;

            case 5:
                volume_menu();
                break;

            case 6:
                area_menu();
                break;

            case 7:
                speed_menu();
                break;

            case 8:
                pressure_menu();
                break;

            case 9:
                energy_menu();
                break;

            case 10:
                data_menu();
                break;

            case 11:
                display_history("./data/history.txt");
                break;

            case 0:
                printf(MAG BLD"\nGoodbye!\n"RST);
                break;

            default: printf(RED"\nInvalid category!\n"RST);
        }
    } while(category != 0);

    return 0;
}