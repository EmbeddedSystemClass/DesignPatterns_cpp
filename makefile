all: drivers.a observer.a singleton.a
	g++ -c main.cpp
	g++ main.o drivers.a observer.a singleton.a

drivers.a: TestObserver.cpp TestSingleton.cpp
	g++ -c TestObserver.cpp
	g++ -c TestSingleton.cpp
	ar r drivers.a TestObserver.o TestSingleton.o

observer.a: Observer/Investor.cpp Observer/StockBase.cpp Observer/Stock.cpp
	g++ -c Observer/Investor.cpp
	g++ -c Observer/StockBase.cpp
	g++ -c Observer/Stock.cpp
	ar r observer.a Investor.o StockBase.o Stock.o

singleton.a: Singleton/LoadBalancer.cpp
	g++ -c Singleton/LoadBalancer.cpp
	ar r singleton.a LoadBalancer.o

clean:
	rm -f *.o *.a
