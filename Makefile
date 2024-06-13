#compile ederek main.o reader.o outputlari vererek
#myreader isminde program olusturan ve clean
#komutu ile hepsini silen Makefile 
#last update: 02.03.2024
#author: Hilal Nur Albayrak 22120205056

create: main.c reader.c
	gcc -c main.c
	gcc -c reader.c
	gcc main.o reader.o -o myreader

clean: 
	rm *.o myreader
