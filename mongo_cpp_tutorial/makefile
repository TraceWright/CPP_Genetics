CXX = g++
CXXFLAGS = --std=c++11 $(shell pkg-config --cflags --libs libmongocxx)
TARGET = connect_2_db_display_records
SRCDIR = .
BUILDDIR = bin

RM = rm -rf

SRCEXT = cpp
SRCS = $(shell find $(SRCDIR) -type f -name "*.$(SRCEXT)")
OBJS = $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SRCS:.$(SRCEXT)=.o))

all:	$(TARGET)

$(TARGET):	$(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $(TARGET)

$(BUILDDIR)/%.o:	$(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

depend:	.depend

.depend: $(SRCS) $(SRCSEXT)
	rm -f ./.depend
	$(CXX) $(CXXFLAGS) -MM $^ -MF  ./.depend;

include .depend

print-%  : ; @echo $* = $($*)

.PHONY:	clean

clean:
	$(RM) $(BUILDDIR) *.o

dist-clean:	clean
	$(RM) $(TARGET)