#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    char symbol;
    int a;
    char repeat;

    do {
        printf("\n========================================\n");
        printf("Введите символ для построения фигуры: ");
        scanf(" %c", &symbol);

        printf("Введите размер катета (a): ");
        scanf("%d", &a);

        printf("Пустой равносторонний прямоугольный треугольник (Вариант 5):\n\n");

        for (int i = 1; i <= a; i++) {
            // внутренний цикл — столбцы
            for (int j = 1; j <= a; j++) {
                // 1 - гипотинуза (из равенства)
                // 2 - первый катет (по нижней части)
                // 3 - второй катет (правое ребро)
                if (j == a - i + 1 || i == a || j == a) {
                    printf("%c", symbol);
                }
                else {
                    printf(" "); // внутри пусто
                }
            }
            printf("\n"); // переход
        }

        // повтор
        printf("\nПродолжить? (Да - y, Нет - n): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');

    printf("Программа завершена.\n");
    return 0;
}
