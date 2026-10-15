#include <stdio.h>

int main() {
    int d, v, phi;
	printf("gia hang va khoang cach: ");
    scanf("%d%d", &d, &v);

    if (d <= 0 || v < 0)
        printf("INVALID");
    else {
        if (v >= 500000 && d <= 15)
            phi = 0;
        else if (d <= 5)
            phi = 15000;
        else if (d <= 15)
            phi = 25000;
        else
            phi = 40000;

        printf("phi %d", phi);
    }

    return 0;
}