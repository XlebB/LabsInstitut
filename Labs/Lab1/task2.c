#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

int main(int argc, char **argv){
    setlocale(LC_ALL, "Russian");

    int x;
    float y;
    char str1[50] = "Введите переменную x:";
    char str2[60] = "Задание выполнил Иванов";

    printf("%s",str1);
    scanf("%d",&x);
    y=x*x+3.1*x+7.5;
    printf("Znachenie funkcii:%7.2f\n",y);

    printf("%s\n",str2);

    getchar();
    getchar();
    return 0;
}