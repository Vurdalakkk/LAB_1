#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    int n = 22;  // часы
    int k = 10;  // минуты

    printf("Текущее время %d час(ов), %d минут(ы), 00 секунд", n, k);

    printf("\nВремя в минутах: %d минут", n * 60 + k);

    printf("\nДо полуночи осталось %d часов и %d минут", 23 - n, 59 - k);

    printf("\nС 8:00 прошло %d минут", (n - 8) * 60 + k);

    printf("\nДоля часа = %d/24 часов и доля минуты = %d/60 минут", n, k);

    return 0;
}