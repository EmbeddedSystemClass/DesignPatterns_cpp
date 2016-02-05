all: observer.a singleton.a adapter.a
	g++ -c main.cpp
	g++ main.o observer.a singleton.a adapter.a

adapter.a: Adapter/TestAdapter.cpp Adapter/Adapter1.cpp Adapter/OldClass1.cpp Adapter/Adapter2.cpp Adapter/OldClass2.cpp
	g++ -c Adapter/TestAdapter.cpp
	g++ -c Adapter/Adapter1.cpp
	g++ -c Adapter/OldClass1.cpp
	g++ -c Adapter/Adapter2.cpp
	g++ -c Adapter/OldClass2.cpp
	ar r adapter.a TestAdapter.o Adapter1.o OldClass1.o Adapter2.o OldClass2.o

singleton.a: Singleton/TestSingleton.cpp Singleton/LoadBalancer.cpp
	g++ -c Singleton/TestSingleton.cpp
	g++ -c Singleton/LoadBalancer.cpp
	ar r singleton.a TestSingleton.o LoadBalancer.o

observer.a: Observer/TestObserver.cpp Observer/Investor.cpp Observer/StockBase.cpp Observer/Stock.cpp
	g++ -c Observer/TestObserver.cpp
	g++ -c Observer/Investor.cpp
	g++ -c Observer/StockBase.cpp
	g++ -c Observer/Stock.cpp
	ar r observer.a TestObserver.o Investor.o StockBase.o Stock.o

clean:
	rm -f *.o *.a *.exe
