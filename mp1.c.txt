#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

void main() {
  pid_t pid, pid_hijo;
  pid = fork(); // Proceso padre que crea un fork();
  
  if (pid == 0) // Si el valor que el fork() devuelve es 0 hará lo siguiente.
  {
    printf("Mi nombre es Junior\n");
  }
  else{
    pid_hijo = wait(NULL); // Almacena el valor pid del hijo
    printf("Mi pid es como padre es= %d \n" ,getpid());
    printf("El pid de mi hijo es: %d \n", pid_hijo); //Esto muestra la pid de l hijo
  }
  exit(0);
  }
