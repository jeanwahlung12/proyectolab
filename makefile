main : bandai.o consolas.o electronicarts.o konami.o microsoft.o microsoftjuegos.o nintendo.o nintendojuegos.o  sega.o sony.o sonyjuegos.o squareenix.o ubisoft.o usuario.o usuarioadmin.o usuariovendedor.o venta.o videojuegos.o main.o
	g++ bandai.o consolas.o electronicarts.o konami.o microsoft.o microsoftjuegos.o nintendo.o nintendojuegos.o  sega.o sony.o sonyjuegos.o squareenix.o ubisoft.o usuario.o usuarioadmin.o usuariovendedor.o venta.o videojuegos.o  main.o -o main

main.o : main.cpp
	g++ -c main.cpp
bandai.o: bandai.cpp
	g++ -c bandai.cpp	

consolas.o: consolas.cpp consolas.h
	g++ -c consolas.cpp

electronicarts.o: electronicarts.cpp electronicarts.h
	g++ -c electronicarts.cpp

konami.o: konami.cpp konami.h
	g++ -c konami.cpp

microsoft.o: microsoft.cpp microsoft.h
	g++ -c microsoft.cpp

nintendo.o: nintendo.cpp nintendo.h
	g++ -c nintendo.cpp

nintendojuegos.o: nintendojuegos.cpp nintendojuegos.h
	g++ -c nintendojuegos.cpp


sega.o: sega.cpp sega.h
	g++ -c sega.cpp

sony.o: sony.cpp sony.h
	g++ -c sony.cpp

sonyjuegos.o: sonyjuegos.cpp sonyjuegos.h
	g++ -c sonyjuegos.cpp

squareenix.o: squareenix.cpp squareenix.h
	g++ -c squareenix.cpp

ubisoft.o: ubisoft.cpp ubisoft.h
	g++ -c ubisoft.cpp

usuarioadmin.o: usuarioadmin.cpp usuarioadmin.h
	g++ -c usuarioadmin.cpp

usuariovendedor.o: usuariovendedor.cpp usuariovendedor.h
	g++ -c usuariovendedor.cpp

venta.o: venta.cpp venta.h
	g++ -c venta.cpp

videojuegos.o: videojuegos.cpp videojuegos.h
	g++ -c videojuegos.cpp
