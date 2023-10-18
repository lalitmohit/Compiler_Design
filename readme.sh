
#!/bin/bash

#Run the readme.bash using bash command

bison -d index.y
flex index.l
gcc lex.yy.c index.tab.c
./a.out