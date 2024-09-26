#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(int argc, char **argv){
    setlocale(LC_ALL, "Russian");
    system("Color A0");
    printf("Выполнил студент группы СКС-ИВТ-24 Стеблянко Даниил Богданович");    

    getchar();
    return 0;
}