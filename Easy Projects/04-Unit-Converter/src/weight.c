#include <stdio.h>
#include "weight.h"

int display_weight() {
    printf("\n\n--- Weight ---\n1. Gram → Kilogram\n2. Kilogram → Gram\n3. Gram → Milligram\n4. Milligram → Gram\n5. Kilogram → Pound\n6. Pound → Kilogram\n\nChoose a conversion: ");

    int conversion;
    scanf("%d", &conversion);

    return conversion;
}

double gram_to_kilogram(double g) {
    return g / 1000;
}

double kilogram_to_gram(double kg) {
    return kg * 1000;
}

double gram_to_milligram(double g) {
    return g * 1000;
}

double milligram_to_gram(double mg) {
    return mg / 1000;
}

double gram_to_pound(double g) {
    return g / 453.592;
}

double pound_to_gram(double lb) {
    return lb * 453.592;
}