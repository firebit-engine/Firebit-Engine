//
// application.c - Файл реализовывающий логику создания окна и главного цикла в целом.
//


// Подключаем:
#include <engine/core/application.h>


// Главная основная общая структура приложения (ДЛЯ РЕАЛИЗАЦИИ ПОД РАЗНЫЕ ПЛАТФОРМЫ):
typedef struct EC_SApplication {
    ECAppApi    *api;     // Набор API приложения (окна).
    ECAppConfig *config;  // Структура данных для настройки окна.

    // Основные функции приложения (ваши функции которые будут вызываться. Скопируйте в свою реализацию!):
    void (*create)  (struct ECApplication *self);                         // Вызовите для открытия приложения.
    void (*close)   (struct ECApplication *self);                         // Вызовите для закрытия приложения.
    void (*start)   (struct ECApplication *self);                         // Вызывается после создания окна.
    void (*update)  (struct ECApplication *self, float dt);               // Вызывается каждый кадр (цикл окна).
    void (*render)  (struct ECApplication *self, float dt);               // Вызывается каждый кадр (отрисовка окна).
    void (*resize)  (struct ECApplication *self, int width, int height);  // Вызывается при изменении размера окна.
    void (*show)    (struct ECApplication *self);                         // Вызывается при разворачивании окна.
    void (*hide)    (struct ECApplication *self);                         // Вызывается при сворачивании окна.
    void (*destroy) (struct ECApplication *self);                         // Вызывается при закрытии окна.
} ECApplication;  // EC - Engine Core.


// Набор функций для управления окном приложения (ДОЛЖНА БЫТЬ РЕАЛИЗАЦИЯ СВОИХ ФУНКЦИЙ):
typedef struct EC_SAppApi {
    void (*set_title) (struct ECApplication *self, ...);
} ECAppApi;


// Конфигурация окна приложения:
typedef struct EC_SAppConfig {
    const char *title;
    int width;
    int height;
} ECAppConfig;

// TODO: Переделать под обычный вызов функций и структур без стиля разных реализаций рендерера.
