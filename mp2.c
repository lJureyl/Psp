#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

void main() {
  pid_t pid, pid_hijo, pid_nieto;
  pid = fork(); // Proceso padre que crea un fork();


    if (pid == 0) // Si el valor que el fork() devuelve es 0 hará lo siguiente.
  {
    fork();
    if(pid == 1){
      printf("Soy el proceso 3 mi PID es = %d\n",getpid());
      printf ("el pid del padre es %d\n",getppid());
      }
    wait(NULL);
    printf("Soy el proceso 2 mi PID es = %d\n",getpid());
    printf ("el pid del padre es %d\n",getppid());
      
  } 

  else{
    pid_hijo = wait(NULL);
    printf("Soy padre(Proceso 1) y abuelo y mi PID es = %d\n", getpid());
    printf("El pid de mi hijo es %d \n", pid_hijo);
}


  exit(0);
  
 }
