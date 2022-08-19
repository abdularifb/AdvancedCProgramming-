#include<stdio.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<string.h>
/*
    1.create socket
    2.bind a local address to a socket.
    3.Listen for another connection
    4.Accept the connections
    5.establish the connection(connect)
    5.send data(send)
    6.receive data(receive)
    7.release the connection
*/
int createsocket(){
    int sk=-1;
    printf("create a socket\n");
    /*syntax : int sock = socket(domain family,type,protocol)
    Domain
    AF_LOCAL -> Communication on the same host.
    AF_INET -> Communication on different host.
    SOCKET_STREAM ->TCP
    SOCK_DGRAM ->UDP
    protocol-> value of internet protocol is 0.
    */
    sk = socket(AF_INET,SOCK_STREAM,0);//This is socket descriptor
    return sk;
}
int bindsocket(int sk){
    //syntax -> int bind(int socketdescriptor,const struct sockaddr *addr,socklen_t addrlen)
    int bs = -1;
    int clientport=466527;
    struct sockaddr_in re = {0};
    re.sin_family = AF_INET;
    re.sin_addr.s_addr = htonl(INADDR_ANY);
    re.sin_port = htons(clientport);
    bs = bind(sk,(struct sockaddr*)&re,sizeof(re));
    return bs;
}
int main(){
    int cs=0,clientlen=0;
    int ac=0;
    struct sockaddr_in client;
    cs=createsocket();
    char*message="Hi i am arif";
    char* clientmessage=0;
    if(cs<0){
        printf("Could not create socket\n");
    }
    printf("Socket created\n");

    if(bindsocket(cs)<0){
        perror("bind failed");
    }
    printf("bind done\n");
    //syntax-> int listen(int socketdescriptor,int backlog)
    listen(cs,3);
    while(1){
        printf("Waiting for incoming Connections\n");
        clientlen=sizeof(struct sockaddr_in);
        //Syntax -> int ac = accept(int socketdescriptor,struct sockaddr*addr,socklen_t*addrlen);
        ac = accept(cs,(struct sockaddr*)&client,(socklen_t*)&clientlen);
        if(ac<0){
            perror("Accept failed");
        }
        printf("Connection Accepted\n");
        //Syntax-> int recv(int socket,char*buffer,int length,int flags);
        if(recv(cs,clientmessage,200,0)<0){
            perror("receive failed");
            break;
        }
        printf("Client message is : %s\n",clientmessage);
        //syntax-> int send(int socket,char*buffer,int length,int flags);
        if(send(cs,message,strlen(message),0)<0){
            printf("Send failed\n");
        }
        close(cs);
        sleep(1);
    }
    return 0;
}
