
all: exercises

exercises=$(ls *.tex)

exercises: ${exercises}
	find -maxdepth 1 -name "exercise*.tex" -exec latexmk -pdflatex=xelatex -pdf "{}" ";"
	#find -maxdepth 1 -name "*.pdf" -exec cp "{}" webpage ";"
clean:
	latexmk -CA


