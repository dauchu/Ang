obj=main.o
CC=g++
trg=main
$(trg): $(obj)
	$(CC) -o $(trg) $(obj)
.PHONY: clean
clean:
	rm -f $(trg) $(obj)
