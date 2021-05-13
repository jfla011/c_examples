#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>

int main () {
    int status;
    struct addrinfo hints;
    struct addrinfo *servinfo, *p;
    char ipstr[INET6_ADDRSTRLEN];
    
    memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = 0; //AI_PASSIVE;
    
    
    status = getaddrinfo("microsoft.com", NULL, &hints, &servinfo);
    struct sockaddr_in *sa = (struct sockaddr_in *)servinfo->ai_addr;
    
//    printf("address is: %s\n", inet_ntop(AF_INET, &sa->sin_addr, ipstr, INET6_ADDRSTRLEN));
    for (p = servinfo; p != NULL ; p = p->ai_next) {
        void *addr;
        if (p->ai_family == AF_INET) {
            struct sockaddr_in *sa = (struct sockaddr_in *)p->ai_addr;
            addr = &(sa->sin_addr);
        } else {
            struct sockaddr_in *sa = (struct sockaddr_in *)p->ai_addr;
            addr = &(sa->sin_addr);

        }
        inet_ntop(p->ai_family, addr, ipstr, sizeof(ipstr));
        printf("address is: %s\n", ipstr);
    }


}