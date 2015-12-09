OBJ0= Nucleotide_String_Library.tex
#OBJ1= referencias.bib

CC0= pdflatex
#CC1= bibtex


TARGET0 = Nucleotide_String_Library.pdf
#TARGET1= voronoi.aux

all: $(TARGET0) 
	
$(TARGET0) : $(OBJ0) $(OBJ1) 
	$(CC0) $(OBJ0)
	$(CC1) $(TARGET1)
	$(CC0) $(OBJ0)
	$(CC0) $(OBJ0)


clean:
	rm -f *.log *.aux *.pdf *.gz *.dvi *.bbl *.blg
