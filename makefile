CFLAGS = -std=c18 -O2
LDFLAGS = -lm
DEPS = probability_distribution.h
OBJ = main.o probability_distribution.o
EXE = random_test

%.o: %.c $(DEPS)
	gcc $(CFLAGS) -c -o $@ $< $(LDFLAGS)

$(EXE): $(OBJ)
	gcc $(CFLAGS) -o $(EXE) $(OBJ) $(LDFLAGS)




.PHONY: test clean

test: $(EXE)
	./$(EXE)

clean:
	rm -f $(EXE) $(OBJ)