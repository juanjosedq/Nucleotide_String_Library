OBJS = Presentacion_final.tex
TEX = pdflatex
TARGET = presentacion.pdf
$(TARGET) : $(OBJS)
	$(TEX) $(OBJS)
look : $(TARGET)
	okular $(TARGET) &
clean:
	rm -f *.log *.aux *.pdf *.nav *.out *.snm *.toc *.vrb *.gz *.fls *.fdb_latexmk
