#include "../include/lab3.h"
#include <stdio.h>
#define YES 1
#define NO 0

void run_lab3_main(void) {
    int c, prev_c, flag, cnt;
    cnt = 0; flag = NO; prev_c = ' ';
    printf("\n--- Лаба 3: Основное задание ---\n");
    printf("(enter the text and press Ctrl+Z/D to finish):\n");
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '.' || c == '\n' || c == ',') {
            if (flag == YES) {
                char low = (prev_c >= 'A' && prev_c <= 'Z') ? prev_c + 32 : prev_c;
                if ((low >= 'a' && low <= 'z') && !(low == 'a' || low == 'e' || low == 'i' || low == 'o' || low == 'u' || low == 'y')) {
                    cnt = cnt + 1;
                }
            }
            flag = NO;
        } else {
            flag = YES;
        }
        prev_c = c;
    }
    printf("\nNumber of words ending with a consonant = %d\n", cnt);
}

void filter_start(int c, int *u_cnt, int *l_cnt) {
    if (c >= 'A' && c <= 'Z') *u_cnt = *u_cnt + 1;
    else if (c >= 'a' && c <= 'z') *l_cnt = *l_cnt + 1;
}

void run_lab3_additional(void) {
    int c, flag;
    int upper_cnt = 0; int lower_cnt = 0;
    flag = NO;
    printf("\n--- Лаба 3: Дополнительное задание ---\n");
    printf("Enter text (Ctrl+Z/D to finish):\n");
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '.' || c == '\n' || c == ',') {
            flag = NO;
        } else {
            if (flag == NO) {
                filter_start(c, &upper_cnt, &lower_cnt);
                flag = YES;
            }
        }
    }
    printf("\nWords starting with uppercase: %d", upper_cnt);
    printf("\nWords starting with lowercase: %d\n", lower_cnt);
}
