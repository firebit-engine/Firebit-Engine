//
// engine.c - Основной файл движка. Запускает сам движок и загружает игру.
//


// Подключаем:
#include <stdio.h>
#include <stdlib.h>
#include <engine/engine.h>


// Точка входа в программу:
#ifndef EDITOR_COMPILATION_MODE
int main(int argc, char *argv[]) {
    printf("Hello World from Engine! Version: %s\n", ENGINE_VERSION);
    return 0;
}
#endif
