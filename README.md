<h1>Домашнее задание по теме 8. Вложенные циклы</>

<h2>Задача - Написать программу, выводящую на экран заданную
геометрическую фигуру, нарисованную с помощью заданного с клавиатуры
символа, условие заполнения фигуры и задаваемые параметры фигуры в
таблице (остальные можно взять константные).</h2>

<h2>Условие:</h2>
<img width="569" height="210" alt="image" src="https://github.com/user-attachments/assets/8b9e80b7-6775-4b90-ab21-cbf820d0de4e" />

<h2>Блок-схема:</h2>
<img width="480" height="820" alt="diagram (11)" src="https://github.com/user-attachments/assets/ec747d0f-26cf-4fad-b280-4c5fca96133a" />

<h2>Код:</h2>

```c
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
```
