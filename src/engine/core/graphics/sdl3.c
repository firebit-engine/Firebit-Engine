//
// sdl3.c - Файл реализовывающий приложение на основе SDL3.
//


// Подключаем:
#include <stdio.h>
#include <stdlib.h>
#include <engine/core/utils/types.h>
#include <engine/core/graphics/bitmap.h>
#include <engine/core/graphics/application.h>


// Создать окно:
FECG_Application *FECG_CreateWindowSDL3(FECG_AppConfig *config) {
    FECG_Application *app = FECG_CreateApplication(config);
    return app;
}
