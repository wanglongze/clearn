#include <stdio.h>
#include<errno.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main()
{
    char* msg = "I am fwrite\n";
    char* msg1 = " I am write\n";

    printf("I am Printf\n");
    fwrite(msg,1,strlen(msg),stdout);
    write(1,msg1,strlen(msg1));

    pid_t id = fork();
    if(id < 0)
    {
        printf("fork error!");
        return -1;
    }
    else if(id == 0)
    {
        printf("I am child,pid:%d\n",getpid()); 
    }

    else
    {
        printf("I am father,pid:%d\n",getpid());
        sleep(3);
    }
    return 0;
}



// int getline(char line[], int maxchar);
// void copy(char to[], char from[]);

// void main() {
//     int c, nc;
//     nc =0;
//     while ((c = getchar()) != EOF){
//         putchar(c);
//         nc++;
//         printf("%d\n", nc);

//     }
// }


// int getline(char line[], int lim){
//     int c, i;
//     for(i=0;i<maxchar;i++){
//         line[i]=getchar()
//     }
// }
