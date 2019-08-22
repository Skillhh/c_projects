#!/bin/bash
echo "Bienvenido al compilador .exe en linux"
echo
read -p "Escribe el nombre del Archivo sin .c: " file_name
i686-w64-mingw32-gcc $file_name.c -o $file_name.exe
wine $file_name.exe
break
