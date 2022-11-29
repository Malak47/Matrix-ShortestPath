//
// Created by malak on 11/29/2022.
//
#include <stdio.h>
#include "my_mat.h"

int main() {
    int matrix[SIZE][SIZE];
    char ch;

    while (ch != 'D') {
        scanf("%s", &ch);
        switch (ch) {

            case 'A':;
                for (int i = 0; i < SIZE; ++i) {
                    for (int j = 0; j < SIZE; ++j) {
                        scanf("%d", &matrix[i][j]);
                    }
                }
                A(matrix);
                break;

            case 'B':;
                int i, j;
                scanf("%d%d", &i, &j);
                B(i, j);
                break;

            case 'C':;
                int k, l;
                scanf("%d%d", &k, &l);
                C(k, l);
                break;

            case 'D':;
                D();
                break;

        }
    }
    return True;
}

