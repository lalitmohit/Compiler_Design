
#!/bin/bash

#Run the readme.bash using bash command

bison -d index.y
flex index.l
gcc lex.yy.c 
./a.out