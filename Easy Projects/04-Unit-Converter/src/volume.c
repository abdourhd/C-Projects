#include <stdio.h>
#include "volume.h"

int display_volume() {
    printf("\n\n--- Volume ---\n1. Liter → Milliliter\n2. Milliliter → Liter\n3. Liter → Cubic Meter\n4. Cubic Meter → Liter\n5. Liter → Gallon\n6. Gallon → Liter\n\nChoose a conversion: ");

    int conversion;
    scanf("%d", &conversion);

    return conversion;
}

double liter_to_milliliter(double L) {
    return L * 1000;
}

double milliliter_to_liter(double mL) {
    return mL / 1000;
}

double liter_to_cubicmeter(double L) {
    return L / 1000;
}

double cubicmeter_to_liter(double m3) {
    return m3 * 1000;
}

double liter_to_gallon(double L) {
    return L / 3.785;
}

double gallon_to_liter(double gal) {
    return gal * 3.785;
}