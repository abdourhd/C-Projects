#include <stdio.h>
#include "time.h"

int display_time() {
    printf("\n\n--- Time ---\n1. Seconds → Minutes\n2. Minutes → Seconds\n3. Minutes → Hours\n4. Hours → Minutes\n5. Seconds → Hours\n6. Hours → Seconds\n7. Seconds → Day\n8. Day → Seconds\n\nChoose a conversion: ");

    int conversion;
    scanf("%d", &conversion);

    return conversion;
}

double second_to_minute(double second) {
    return second / 60;
}

double minute_to_second(double minute) {
    return minute * 60;
}

double second_to_hour(double second) {
    return second / 3600;
}

double hour_to_second(double hour) {
    return hour * 3600;
}

double second_to_day(double second) {
    return second / 86400;
}

double day_to_second(double day) {
    return day * 86400;
}