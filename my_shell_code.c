#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void shell_init()
{

system("clear");


char* myname = getenv("USER");

printf("\n\n\n\n\n");
printf("*********");
printf("\n\n");
printf("Hello, @%s ", myname);
printf("\n\nIt's my ubuntu shell\n");
printf("MIPT DREC 2024");
printf("\n\n");
printf("*********");
printf("\n\n\n\n\n");

sleep(5);

system("clear");

}	

void print_dir()
{	
char cwd[1024];	
getcwd(cwd, sizeof(cwd));
printf("\nDirectory: %s\n",cwd);


}


int main()
{
shell_init();

print_dir();

return 0;
}
