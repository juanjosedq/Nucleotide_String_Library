_OBJS = HE_edge.o HE_face.o HE_vert.o Point2D.o ConvexHull.o
CC = g++
DEBUG = -g
ODIR = obj
SDIR = source
CFLAGS = -Wall -c $(DEBUG) --pedantic
LFLAGS = -Wall $(DEBUG) --pedantic
TARGET = convexhull
INC = -I 'include'

OBJS = $(patsubst %,$(ODIR)/%,$(_OBJS))


$(ODIR)/%.o : $(SDIR)/%.cpp
	$(CC) $(CFLAGS) $(INC) -o $@ $< $

$(TARGET): $(OBJS) main.cpp
	$(CC) $(LFLAGS) $(INC) main.cpp $(OBJS)  -o $(TARGET)
.PHONY: clean
 clean:
	rm -f $(ODIR)/*.o $(TARGET)
