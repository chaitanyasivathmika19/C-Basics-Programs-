#include <stdio.h>

int main() {
    int units;
    float bill = 0, surcharge = 0;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 1.5;
    } else if (units <= 200) {
        bill = 100 * 1.5 + (units - 100) * 2.0;
    } else if (units <= 300) {
        bill = 100 * 1.5 + 100 * 2.0 + (units - 200) * 3.0;
    } else {
        bill = 100 * 1.5 + 100 * 2.0 + 100 * 3.0 + (units - 300) * 5.0;
    }

    if (bill > 500) {
        surcharge = bill * 0.15;
        bill += surcharge;
        printf("Surcharge applied: ?%.2f\n", surcharge);
    }

    printf("Total Bill: %.2f\n", bill);
    return 0;
}

