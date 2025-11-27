#include <stdio.h>
const float meterToKm = 0.001;
void convert(float m) {
    static int count = 0;
    count++;
    printf("Call #%d: %.2f meters = %.3f km\n", count, m, m * meterToKm);
}
int main() {
    convert(500);
    convert(1000);
    convert(250);
    return 0;
}
