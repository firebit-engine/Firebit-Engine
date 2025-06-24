//
// application.h - Заголовочный файл приложения.
//

#ifndef EC_GRAPHICS_APPLICATION_H
#define EC_GRAPHICS_APPLICATION_H


// Главная основная общая структура приложения:
typedef struct EC_Application EC_Application;

// Набор функций для управления окном приложения (ДОЛЖНА БЫТЬ РЕАЛИЗАЦИЯ СВОИХ ФУНКЦИЙ):
typedef struct EC_AppApi EC_AppApi;

// Конфигурация окна приложения:
typedef struct EC_AppConfig EC_AppConfig;


#endif  // EC_GRAPHICS_APPLICATION_H
