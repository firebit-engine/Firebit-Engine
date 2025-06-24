//
// bitmap.c - Файл реализовывающий работу с bitmap.
//


// Подключаем:
#include <engine/core/graphics/bitmap.h>


// Стуктура битмапа:
typedef struct EC_SBitmap {
    int width;            // Ширина картинки.
    int heigth;           // Высота картинки.
    int channels;         // Каналов на 1 пиксель (кол-во байт на пиксель).
    unsigned char *data;  // Массив пикселей размером w*h*c.
} EC_Bitmap;  // EC_ - Engine Core.
