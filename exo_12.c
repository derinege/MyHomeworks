#include <stdio.h>
#include <math.h>
int main()
{
    int iM;
    printf("Give an integer between 0-10: ");
    scanf("%d", &iM);
    printf("int\tsquare\tcube\n");
    int i;
    for (i = 0; i <= iM; i++) {
        printf("%d\t%d\t%d\n", i, i*i, i*i*i);
    }
    printf("double\tsquare\tcube\n");
  double j;
    for (j = 0.00; j <= iM; j += 0.50) {
        printf("%.2f\t%.2f\t%.2f\n", j, pow(j, 2), pow(j, 3));
    }
    return 0;
}
