#!/bin/bash

# Переход в директорию с инструментами:
cd "build-engine-pc/tools/"

# Запуск скрипта сборки:
python3 build.py "$@"
