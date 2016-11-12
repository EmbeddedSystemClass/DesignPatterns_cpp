include makefile_config

TARGET = a.exe
SRCS = main.cpp
INCLUDES = -IAdapter -IObsrever -ISingleton -IChainOfResponsibility -IMyInt
SUBS = Adapter/adapter.a Observer/observer.a Singleton/singleton.a ChainOfResponsibility/chainOfResponsibility.a Visitor/visitor.a Command/command.a
SUBDIRS = Adapter Observer Singleton ChainOfResponsibility Visitor Command

all: sub_target $(TARGET)

$(TARGET): $(OBJS) $(SUBS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(SUBS) $(LIBS)

.PHONY: sub_target
sub_target:
ifdef SUBDIRS
	$(foreach subdir,$(SUBDIRS),cd $(subdir) && $(MAKE) && cd ../ &&) cd ./
endif

.PHONY: clean
clean:
	$(DEL) *.o *.a *.exe
ifdef SUBDIRS
	$(foreach subdir,$(SUBDIRS),cd $(subdir) && $(MAKE) clean && cd ../ &&) cd ./
endif
