//
// application.h - Заголовочный файл приложения.
//

#ifndef FIREBIT_ENGINE_CORE_APPLICATION_H
#define FIREBIT_ENGINE_CORE_APPLICATION_H


// Главная основная общая структура приложения:
typedef struct EC_SApplication ECApplication;

// Набор функций для управления окном приложения (ДОЛЖНА БЫТЬ РЕАЛИЗАЦИЯ СВОИХ ФУНКЦИЙ):
typedef struct EC_SAppApi ECAppApi;

// Конфигурация окна приложения:
typedef struct EC_SAppConfig ECAppConfig;


#endif  // FIREBIT_ENGINE_CORE_APPLICATION_H
