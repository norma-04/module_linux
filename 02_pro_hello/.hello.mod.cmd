savedcmd_/home/norma/myproject/02_pro_hello/hello.mod := printf '%s\n'   hello.o | awk '!x[$$0]++ { print("/home/norma/myproject/02_pro_hello/"$$0) }' > /home/norma/myproject/02_pro_hello/hello.mod
