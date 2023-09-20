/* loginteller.c
 * Based on monousuar.c at http://www.binefa.net/gnu/gcc/processos/Informacio_d_usuari.html
 * www.binefa.cat
 * 20230920
*/
#include <stdio.h>
#include <unistd.h>    // getlogin()
#include <stdlib.h>    // exit()

int main(){
    char *szUserName;
   
    if((szUserName = getlogin())==NULL){
        perror("getlogin");
        exit(EXIT_FAILURE);
    }  
    printf("Your login name at the system is : %s\n",szUserName);

    return (0);
}
