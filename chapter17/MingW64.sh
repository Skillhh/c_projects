#!/bin/bash
# Compilador de c para crear .exe
# Autor: Giovanny Ortegon
# Fecha: 18/01/2019
#
#colores
rojo="\033[31m"
verde="\033[32m"
amarillo="\033[33m"
azul="\033[34m"
reset="\033[0m"
#funcion para Pausar
pausar(){
	for i in  {1..3}
	do
		echo -e ". \c"
		sleep 0.5
	done
}

#separar el nombre del archivo del .c
namein=$1
nameout=${namein%.*}.exe

#titulo principal
echo -e "${azul}"
figlet COMPILADOR w64 Ming32
echo -e "$reset"
#titulo
echo -e "\n${verde} ********* Bienvenido al compilador .exe en linux **********$reset"
echo -e "\n${verde} ********************** Autor: Skill ***********************$reset"
echo -e "\n[${azul}*$reset] ${amarillo}Compilando $namein\c "
pausar
echo -e "$reset\n"
if [ -e $nameout ]
then
	rm $nameout
fi

#compilador
i686-w64-mingw32-gcc $1 -o $nameout
#comprobar errores
if [ $? -eq 0 ]
then
	echo -e "\n[${azul}*$reset] ${amarillo}Ejecutando $nameout\c "
	pausar
	echo -e "$reset"
	var=$( pwd)
	xterm -T "$var/$1" -e wine $nameout
	echo -e "\n\n[${azul}*$reset] ${amarillo}Proceso finalizado$reset\n"
else
	echo -e "\n[${amarillo}*$reset][${rojo} ********** ¡¡ Error !! **********$reset ]\n"
fi
#pausar y solicitar la finalizacion del programa
echo -e "[${rojo}*$reset] ${verde}\c"
read -n1 -p "Presione una tecla para terminar..."
echo -e "$reset"
exit 0


