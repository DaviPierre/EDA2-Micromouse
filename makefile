


run:
	-clear
	-gcc -o exe main.c
	-./exe

commit:
	-git add .
	-git commit -m "Commit automatico"
	-git push