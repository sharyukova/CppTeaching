#pragma once
#include <iostream>

/*
Реализовать умножение двух матриц типа int
A[n][m]
B[m][l]
result[n][l]

Стандартный ввод cin

Стандартный вывод cout. В выводе результирующая матрица (result) должна быть представлена в виде строк и столбцов
пример 

1   2   3   4   5
2   3   4   5   6
23  43  54  64  34
между числами в строке используйте std::cout << ' ';
между строками используйте std::cout << std::endl;

В execStatic память для матриц выделяется статически

В execDynamic память для матриц выделяется динамически

Программа должна проходить тесты. Для прохождения тестов 1 или 2 

1)соберите проект и сверьте выходные данные, полученные из выходных tests/mtest/text{i}.txt с ответами
в tests/mtest/asnv{i}.txt

пример сравнения
cat tests/mtest/text0.txt | ./build/cmatrix > tests/test_result.txt
&& cmp tests/test_result.txt tests/mtest/asnv0.txt

2) создайте пул реквест на гитхабе github.com/ch1cly/CppTeaching/
10 баллов
*/


void execStatic();

void execDynamic();
