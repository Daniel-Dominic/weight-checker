#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void) {

    printf("\n\nAnswer your weight in 'L' or 'K'");

    string unit = get_string("L");

    int weight = get_int("Weight: ");

    if (strcmp(unit, "L")) {
        int converted = weight * 0.45;
        printf(converted)
    } else {
        int converted = weight/0.45;
        printf(converted)
    }
}
