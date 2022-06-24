/**
 * @file mini-projeto1.c
 * @author Arthur Trindade da Silva (trinde_silva@discente.ufg.br)
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022 * 
 */

#include <stdio.h>
#include <math.h>

int main() {

    double num1, num2;
    char operador;

    scanf("%lf%c%lf", &num1, &operador, &num2);   
   
    if (operador == '+') {
        printf("%.1lf\n", num1 + num2);
        return 0;
    }

    if (operador == '-') {
        printf("%.1lf\n", num1 - num2);
        return 0;
    }

    if (operador == '*') {
        printf("%.1lf\n", num1 * num2);
        return 0;
    }

    if (operador == '/') {
        if (num2 == 0) {
            printf("Divisão por zero é indefinido!\n");
            return 0;
        }

        printf("%.1lf\n", num1 / num2);
        return 0;
    }

    if (operador == '%') {
        printf("%.1d\n", (int) num1 % (int) num2);
        return 0;
    }

    if (operador == '~') {
        printf("%.1lf\n", pow(num1, num2));
        return 0;
    }

    if (operador == '=') {
        if (num1 == num2) printf("true\n");
        else printf("false\n");
        return 0;
    }

    if (operador == '!') {
        if (num1 != num2) printf("true\n");
        else printf("false\n");
        return 0;
    }

    if (operador == '<') {
        if (num1 < num2) printf("true\n");
        else printf("false\n");
        return 0;
    }

    if (operador == '>') {
        if (num1 > num2) printf("true\n");
        else printf("false\n");
        return 0;
    }

    if (operador == '^') {
        if (num1 == 1 && num2 == 1) printf("true\n");
        else printf("false\n");
        return 0; 
    }

    if (operador == 'v') {
        if (num1 == 1 || num2 == 1) printf("true\n");
        else printf("false\n");
        return 0;
    }

    if (operador == 'x') {
        if ((num1 == 0 && num2 == 1) || (num1 == 1 && num2 == 0)) printf("true\n");
        else printf("false\n");
    }
        
    return 0;
}