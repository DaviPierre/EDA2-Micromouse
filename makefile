


run:
	-clear
	-gcc -o exe main.c
	-./exe

run-teste:
	-clear
	-gcc -o exe teste.c
	-./exe

commit:
	-clear
	-git add .
	-git commit -m "Commit automatico"
	-git push