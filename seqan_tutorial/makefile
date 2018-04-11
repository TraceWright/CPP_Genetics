CXX = g++
CXXFLAGS = ''

TARGET = first_example
SRCDIR = .
BUILDDIR = .

RM = rm -rf

SRCEXT = cpp
SRCS = $(shell find $(SRCDIR) -type f -name "*.$(SRCEXT)")
OBJS = $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SRCS:.$(SRCEXT)=.o))

all:	$(TARGET)

$(TARGET):	$(OBJS)
	$(CXX) $^ -o $(TARGET)

$(BUILDDIR)/%.o:	$(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	$(CXX) -c $< -o $@

print-%  : ; @echo $* = $($*)

.PHONY:	clean

clean:
	$(RM) $(BUILDDIR) *.o

dist-clean:	clean
	$(RM) $(TARGET)

