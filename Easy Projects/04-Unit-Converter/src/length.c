#include <stdio.h>
#include "length.h"

int display_length() {
    printf("\n\n--- Length ---\n1. Meters → Kilometers\n2. Kilometers → Meters\n3. Meters → Feet\n4. Feet → Meters\n5. Kilometers → Miles\n6. Miles → Kilometers\n\nChoose a conversion: ");

    int conversion;
    scanf("%d", &conversion);

    return conversion;
}

double meter_to_kilometer(double m) {
    return (m / 1000);
}

double kilometer_to_meter(double km) {
    return (km * 1000);
}

double meter_to_foot(double m) {
    return (m * 3.281);
}

double foot_to_meter(double ft) {
    return (ft / 3.281);
}

double meter_to_mile(double m) {
    return (m / 1609.34);
}

double mile_to_meter(double mi) {
    return (mi * 1609.34);
}