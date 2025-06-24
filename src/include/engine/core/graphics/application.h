//
// application.h - Заголовочный файл приложения.
//

#ifndef FEC_GRAPHICS_APPLICATION_H
#define FEC_GRAPHICS_APPLICATION_H


// Подключаем:
#include <engine/core/utils/types.h>
#include <engine/core/graphics/bitmap.h>


// Делаем объявления:
typedef struct FECG_Application FECG_Application;
typedef struct FECG_AppConfig FECG_AppConfig;
typedef struct _FECG_AppVars _FECG_AppVars;


// Главная основная общая структура приложения:
typedef struct FECG_Application {
    FECG_AppConfig *config;  // Структура данных для настройки окна.

    // Основные функции приложения (ваши функции которые будут вызываться):
    void (*start)   (struct FECG_Application *self);                         // Вызывается после создания окна.
    void (*update)  (struct FECG_Application *self, float dt);               // Вызывается каждый кадр (цикл окна).
    void (*render)  (struct FECG_Application *self, float dt);               // Вызывается каждый кадр (отрисовка окна).
    void (*resize)  (struct FECG_Application *self, int width, int height);  // Вызывается при изменении размера окна.
    void (*show)    (struct FECG_Application *self);                         // Вызывается при разворачивании окна.
    void (*hide)    (struct FECG_Application *self);                         // Вызывается при сворачивании окна.
    void (*destroy) (struct FECG_Application *self);                         // Вызывается при закрытии окна.

    // -------------------------------- API окна: --------------------------------

    void (*create) (struct FECG_Application *self);  // Вызовите для открытия приложения.
    void (*close)  (struct FECG_Application *self);  // Вызовите для закрытия приложения.

    void        (*set_title) (struct FECG_Application *self, const char *title);  // Установить заголовок окна.
    const char *(*get_title) (struct FECG_Application *self);                     // Получить заголовок окна.

    void         (*set_icon) (struct FECG_Application *self, FECG_Bitmap *image);  // Установить иконку окна.
    FECG_Bitmap *(*get_icon) (struct FECG_Application *self);                      // Получить иконку окна.

    void (*set_size) (struct FECG_Application *self, int width, int height);    // Установить размер окна.
    void (*get_size) (struct FECG_Application *self, int *width, int *height);  // Получить размер окна.

    void (*set_width) (struct FECG_Application *self, int width);  // Установить ширину окна.
    int  (*get_width) (struct FECG_Application *self);             // Получить ширину окна.

    void (*set_height) (struct FECG_Application *self, int height);  // Установить высоту окна.
    int  (*get_height) (struct FECG_Application *self);              // Получить высоту окна.

    void (*get_center) (struct FECG_Application *self, int *x, int *y);  // Получить центр окна.

    void (*set_position) (struct FECG_Application *self, int x, int y);    // Установить позицию окна.
    void (*get_position) (struct FECG_Application *self, int *x, int *y);  // Получить позицию окна.

    void (*set_vsync) (struct FECG_Application *self, bool vsync);  // Установить вертикальную синхронизацию.
    bool (*get_vsync) (struct FECG_Application *self);              // Получить вертикальную синхронизацию.

    void (*set_fps)        (struct FECG_Application *self, int fps);  // Установить фпс окна.
    int  (*get_target_fps) (struct FECG_Application *self);           // Получить установленный фпс окна.

    void (*set_visible) (struct FECG_Application *self, bool visible);  // Установить видимость окна.
    bool (*get_visible) (struct FECG_Application *self);                // Получить видимость окна.

    void (*set_titlebar) (struct FECG_Application *self, bool titlebar);  // Установить видимость заголовка окна.
    bool (*get_titlebar) (struct FECG_Application *self);                 // Получить видимость заголовка окна.

    void (*set_resizable) (struct FECG_Application *self, bool resizable);  // Установить масштабируемость окна.
    bool (*get_resizable) (struct FECG_Application *self);                  // Получить масштабируемость окна.

    void (*set_fullscreen) (struct FECG_Application *self, bool fullscreen);  // Установить полноэкранный режим.
    bool (*get_fullscreen) (struct FECG_Application *self);                   // Получить полноэкранный режим.

    void (*set_min_size) (struct FECG_Application *self, int width, int height);    // Установить мин. размер окна.
    void (*get_min_size) (struct FECG_Application *self, int *width, int *height);  // Получить мин. размер окна.

    void (*set_max_size) (struct FECG_Application *self, int width, int height);    // Установить макс. размер окна.
    void (*get_max_size) (struct FECG_Application *self, int *width, int *height);  // Получить макс. размер окна.

    uint (*get_window_display_id) (struct FECG_Application *self);  // Получить айди дисплея в котором это окно.

    bool (*get_display_size) (struct FECG_Application *self, uint id, int *w, int *h);  // Получить размер дисплея.

    float (*get_current_fps) (struct FECG_Application *self);  // Получить текущий фпс.

    float (*get_dt) (struct FECG_Application *self);  // Получить дельту времени.

    double (*get_time) (struct FECG_Application *self);  // Получить время со старта окна.

    void (*display) (struct FECG_Application *self);  // Отрисовка содержимого окна.

    // Внутренние параметры окна:
    _FECG_AppVars *_appvars;
} FECG_Application;  // FECG_ - Firebit Engine Core Graphics.

// Конфигурация окна приложения:
typedef struct FECG_AppConfig {
    const char  *title;  // Заголовок окна.
    FECG_Bitmap *icon;   // Иконка окна.
    int  size[2];        // Размер окна {width, height}.
    int  position[2];    // Позиция окна {x, y} или {-1, -1} для "по умолчанию".
    bool vsync;          // Вертикальная синхронизация.
    int  fps;            // Количество кадров в секунду.
    bool visible;        // Видимость окна (скрыт/показан).
    bool titlebar;       // Видимость заголовка окна.
    bool resizable;      // Масштабируемость окна.
    bool fullscreen;     // Полноэкранный режим.
    int  min_size[2];    // Минимальный размер окна {width, height}.
    int  max_size[2];    // Максимальный размер окна {width, height}.
} FECG_AppConfig;  // FECG_ - Firebit Engine Core Graphics.

// Внутренние параметры окна:
typedef struct _FECG_AppVars {
    int abc;
} _FECG_AppVars;  // _FECG_ - Firebit Engine Core Graphics.

// Создать приложение:
FECG_Application *FECG_CreateApplication(FECG_AppConfig*);

// Освободить память приложения:
void FECG_DestroyApplication(FECG_Application*);

// Иконка по умолчанию:
extern const int FECG_AppDefaultIconWidth, FECG_AppDefaultIconHeight, FECG_AppDefaultIconChannels;
extern const uchar FECG_AppDefaultIconData[];


#endif  // FEC_GRAPHICS_APPLICATION_H
