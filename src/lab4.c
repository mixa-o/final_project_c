#include "../include/lab4.h"
#include <stdio.h>
#define YES 1
#define NO 0
#define MAXLINE 1000

void process_line(char buffer[]) {
    char c; int flag, i, pos, start, j, count, current, target;
    i = 0; count = 0; flag = NO;
    while (buffer[i] != '\0') {
        if (buffer[i] == ' ' || buffer[i] == '.' || buffer[i] == ',' || buffer[i] == '\n') flag = NO;
        else if (flag == NO) { flag = YES; count++; }
        i++;
    }
    if (count < 2) return;
    target = count - 1; flag = NO; i = 0; pos = 0; current = 0;
    do {
        c = buffer[i];
        if (c == ' ' || c == '.' || c == ',' || c == '\n' || c == '\0') {
            if (flag == YES) {
                if (current != target) {
                    for (j = start; j < i; j++) buffer[pos++] = buffer[j];
                }
            }
            flag = NO;
            if (current != target || c == '\0') buffer[pos++] = c;
        } else {
            if (flag == NO) { flag = YES; current++; start = i; }
        }
        i++;
    } while (c != '\0');
}

void run_lab4_main(void) {
    char line[MAXLINE];
    printf("\n--- Лаба 4: Основное задание ---\n");
    printf("enter a line: ");
    while (getchar() != '\n'); // Очистка буфера перед вводом строки
    fgets(line, MAXLINE, stdin);
    process_line(line);
    printf("result: ");
    puts(line);
}

void process_file(char input_line[]) {
    char file_line[MAXLINE]; FILE *fin, *fout;
    fin = fopen("input.txt", "w");
    if (fin == NULL) return;
    fputs(input_line, fin); fclose(fin);
    fin = fopen("input.txt", "r");
    if (fin == NULL) return;
    fgets(file_line, MAXLINE, fin); fclose(fin);
    process_line(file_line);
    fout = fopen("output.txt", "w");
    if (fout == NULL) return;
    fputs(file_line, fout); fclose(fout);
    fout = fopen("output.txt", "r");
    if (fout == NULL) return;
    fgets(file_line, MAXLINE, fout); fclose(fout);
    printf("result from file: ");
    fputs(file_line, stdout);
}

void run_lab4_additional(void) {
    char line[MAXLINE];
    printf("\n--- Лаба 4: Дополнительное задание ---\n");
    printf("enter a line: ");
    while (getchar() != '\n');
    fgets(line, MAXLINE, stdin);
    process_file(line);
}
