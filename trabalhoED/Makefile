all: app_main

app_main: app.o src.o  
	gcc obj/app.o obj/src.o -o bin/app.out	
# para o windows comentar a linha acima e descomentar a linha abaixo
#gcc obj/app_main.o obj/deque_como_vetor.o -o bin/app_main.exe	


src.o: src/src.c include/include.h
	gcc -I include -Wall -Werror -c src/src.c -o obj/src.o

app.o: apps/app.c include/include.h
	gcc -I include -Wall -Werror -c apps/app.c -o obj/app.o

run:
	./bin/app.out
# para o windows comentar a linha acima e descomentar a linha abaixo
#./bin/app_main.exe	

clean:
	rm -f bin/app.out obj/*.o	
# para o windows comentar a linha acima e descomentar a linha abaixo
#del bin\app_main.exe obj\*.o 	