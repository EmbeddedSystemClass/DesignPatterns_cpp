all: drivers.a observer.a singleton.a adapter.a
	g++ -c main.cpp
	g++ main.o drivers.a observer.a singleton.a adapter.a

drivers.a: TestObserver.cpp TestSingleton.cpp TestAdapter.cpp
	g++ -c TestObserver.cpp
	g++ -c TestSingleton.cpp
	g++ -c TestAdapter.cpp
	ar r drivers.a TestObserver.o TestSingleton.o TestAdapter.o

adapter.a: Adapter/Adapter1.cpp Adapter/OldClass1.cpp Adapter/Adapter2.cpp Adapter/OldClass2.cpp
	g++ -c Adapter/Adapter1.cpp
	g++ -c Adapter/OldClass1.cpp
	g++ -c Adapter/Adapter2.cpp
	g++ -c Adapter/OldClass2.cpp
	ar r adapter.a Adapter1.o OldClass1.o Adapter2.o OldClass2.o

singleton.a: Singleton/LoadBalancer.cpp
	g++ -c Singleton/LoadBalancer.cpp
	ar r singleton.a LoadBalancer.o

observer.a: Observer/Investor.cpp Observer/StockBase.cpp Observer/Stock.cpp
	g++ -c Observer/Investor.cpp
	g++ -c Observer/StockBase.cpp
	g++ -c Observer/Stock.cpp
	ar r observer.a Investor.o StockBase.o Stock.o

clean:
	rm -f *.o *.a
