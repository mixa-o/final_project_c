#include <stdio.h>
#include <locale.h>

// Ïîäêëþ÷àåì çàãîëîâêè âñåõ ëàáîðàòîðíûõ
#include "include/lab1.h"
#include "include/lab2.h"
#include "include/lab3.h"
#include "include/lab4.h"
#include "include/lab5.h"
#include "include/lab6.h"
#include "include/lab7.h"

void print_menu() {
    printf("\n=============================================");
    printf("\n            ÈÒÎÃÎÂÛÉ ÑÅÌÅÑÒÐÎÂÛÉ ÏÐÎÅÊÒ      ");
    printf("\n=============================================\n");
    printf(" 1. Ëàáîðàòîðíàÿ 1 (Îñíîâíîå çàäàíèå)\n");
    printf(" 2. Ëàáîðàòîðíàÿ 1 (Äîïîëíèòåëüíîå çàäàíèå)\n");
    printf(" 3. Ëàáîðàòîðíàÿ 2 (Îñíîâíîå çàäàíèå)\n");
    printf(" 4. Ëàáîðàòîðíàÿ 2 (Äîïîëíèòåëüíîå çàäàíèå)\n");
    printf(" 5. Ëàáîðàòîðíàÿ 3 (Îñíîâíîå çàäàíèå)\n");
    printf(" 6. Ëàáîðàòîðíàÿ 3 (Äîïîëíèòåëüíîå çàäàíèå)\n");
    printf(" 7. Ëàáîðàòîðíàÿ 4 (Îñíîâíîå çàäàíèå)\n");
    printf(" 8. Ëàáîðàòîðíàÿ 4 (Äîïîëíèòåëüíîå çàäàíèå)\n");
    printf(" 9. Ëàáîðàòîðíàÿ 5 (Îñíîâíîå çàäàíèå)\n");
    printf("10. Ëàáîðàòîðíàÿ 5 (Äîïîëíèòåëüíîå çàäàíèå)\n");
    printf("11. Ëàáîðàòîðíàÿ 6 (Îñíîâíîå çàäàíèå)\n");
    printf("12. Ëàáîðàòîðíàÿ 7 (Îñíîâíîå çàäàíèå)\n");
    printf(" 0. Âûõîä èç ïðîãðàììû\n");
    printf("---------------------------------------------\n");
    printf("Âàø âûáîð: ");
}

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;
    int running = 1;

    while (running) {
        print_menu();
        if (scanf("%d", &choice) != 1) {
            printf("Îøèáêà! Ââåäèòå öåëîå ÷èñëî.\n");
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
                printf("Çàâåðøåíèå ðàáîòû. Ïðîåêò âûïîëíåí óñïåøíî!\n");
                running = 0;
                break;
            default:
                printf("Íåâåðíûé ïóíêò! Âûáåðèòå îò 0 äî 12.\n");
                break;
        }
    }
    return 0;
}
