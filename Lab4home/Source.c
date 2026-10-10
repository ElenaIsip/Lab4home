#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "RUS");

    int A, B, C;
    int condition;

    printf("=== ТРОЙНОЙ УДАР ===\n");
    printf("Введите уровни силы героев A, B и C: ");
    scanf("%d %d %d", &A, &B, &C);

    // Условие активации: уровень каждого героя кратен трём
    condition = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    printf("Способность 'Тройной удар' активирована (1 - да, 0 - нет): %d\n", condition);

    return 0;
}