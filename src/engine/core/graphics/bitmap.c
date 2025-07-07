//
// bitmap.c - Файл реализовывающий работу с bitmap.
//


// Подключаем:
#include <engine/core/graphics/bitmap.h>


// Стуктура битмапа:
typedef struct FECG_Bitmap {
    int width;            // Ширина картинки.
    int heigth;           // Высота картинки.
    int channels;         // Каналов на 1 пиксель (кол-во байт на пиксель).
    unsigned char *data;  // Массив пикселей размером w*h*c.
} FECG_Bitmap;  // FECG_ - Firebit Engine Core Graphics.
