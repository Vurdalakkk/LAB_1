#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int n = 2;
    int L = 353;
    float res = (float)n / L;

    printf("����:\n");
    printf("%13d\n", n);
    printf("%13d\n", L);
    printf("--------------------\n");
    printf("�����:\n");
    printf("%6c %+014.7f\n", ' ', res);

    return 0;
}