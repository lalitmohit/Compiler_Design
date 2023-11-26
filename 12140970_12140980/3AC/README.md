
run following commands 


flex lexfile.l
bison -v yaccfile.y
gcc lex.yy.c y.tab.c
./a.out


It directly takes input from input.txt and can be used to provide input.


