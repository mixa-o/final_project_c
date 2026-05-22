#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Подключаем заголовки всех лабораторных
#include "include/lab1.h"
#include "include/lab2.h"
#include "include/lab3.h"
#include "include/lab4.h"
#include "include/lab5.h"
#include "include/lab6.h"
#include "include/lab7.h"

void print_menu() {
    printf("\n=============================================");
    printf("\n            ИТОГОВЫЙ СЕМЕСТРОВЫЙ ПРОЕКТ      ");
    printf("\n=============================================\n");
    printf(" 1. Лабораторная 1 (Основное задание)\n");
    printf(" 2. Лабораторная 1 (Дополнительное задание)\n");
    printf(" 3. Лабораторная 2 (Основное задание)\n");
    printf(" 4. Лабораторная 2 (Дополнительное задание)\n");
    printf(" 5. Лабораторная 3 (Основное задание)\n");
    printf(" 6. Лабораторная 3 (Дополнительное задание)\n");
    printf(" 7. Лабораторная 4 (Основное задание)\n");
    printf(" 8. Лабораторная 4 (Дополнительное задание)\n");
    printf(" 9. Лабораторная 5 (Основное задание)\n");
    printf("10. Лабораторная 5 (Дополнительное задание)\n");
    printf("11. Лабораторная 6 (Основное задание)\n");
    printf("12. Лабораторная 7 (Основное задание)\n");
    printf(" 0. Выход из программы\n");
    printf("---------------------------------------------\n");
    printf("Ваш выбор: ");
}

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;
    int running = 1;

    while (running) {
        print_menu();
        if (scanf("%d", &choice) != 1) {
            printf("Ошибка! Введите целое число.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:  run_lab1_main(); break;
            case 2:  run_lab1_additional(); break;
            case 3:  run_lab2_main(); break;
            case 4:  run_lab2_additional(); break;
            case 5:  run_lab3_main(); break;
            case 6:  run_lab3_additional(); break;
            case 7:  run_lab4_main(); break;
            case 8:  run_lab4_additional(); break;
            case 9:  run_lab5_main(); break;
            case 10: run_lab5_additional(); break;
            case 11: run_lab6_main(); break;
            case 12: run_lab7_main(); break;
            case 0:
                printf("Завершение работы. Проект выполнен успешно!\n");
                running = 0;
                break;
            default:
                printf("Неверный пункт! Выберите от 0 до 12.\n");
                break;
        }
    }
    return 0;
}
