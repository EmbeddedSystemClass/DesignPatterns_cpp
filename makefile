all: drivers.a observer.a
	g++ -c main.cpp
	g++ main.o drivers.a observer.a

drivers.a: TestObserver.cpp
	g++ -c TestObserver.cpp
	ar r drivers.a TestObserver.o

observer.a: Observer/Investor.cpp Observer/StockBase.cpp Observer/Stock.cpp
	g++ -c Observer/Investor.cpp
	g++ -c Observer/StockBase.cpp
	g++ -c Observer/Stock.cpp
	ar r observer.a Investor.o StockBase.o Stock.o

clean:
	rm -f *.o *.a
