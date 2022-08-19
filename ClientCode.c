#include<stdio.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<string.h>
/*
    1.create the socket
    2.connect
    3.send or receive data.
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
int connectsocket(int sk){
    //syntax -> int connect(int socketdescriptor,const struct sockaddr *addr,socklen_t addrlen)
    int cs = -1;
    int serverport=466527;
    struct sockaddr_in re = {0};
    re.sin_family = AF_INET;
    re.sin_addr.s_addr = inet_addr("127.0.0.1");
    re.sin_port = htons(serverport);
    cs = bind(sk,(struct sockaddr*)&re,sizeof(re));
    return cs;
}
int socketsend(int s,char *rqst,int rqlen){
    int socksend=-1;
    socksend=send(s,rqst,rqlen,0);
    return socksend;
}
int socketreceive(int s,char *res,int reslen){
    int sockreceive=-1;
    sockreceive=recv(s,res,reslen,0);
    return sockreceive;
}
int main(){
    int s = 0;
    struct sockaddr_in server;
    char *servermessage=0;
    char *serverreplymessage=0;
    s=createsocket();
    if(s<0){
        printf("Could not create the socket\n");
    }
    printf("Socket is created\n");
    //connect
    if(connectsocket(s)<0){
        printf("Connection Failed\n");
    }
    printf("Successfully connected\n");
    printf("Enter the message : ");
    fgets(servermessage,100,stdin);
    if(socketsend(s,servermessage,strlen(servermessage))<0);
    {
        printf("Could not send the message\n");
    }
    printf("Successfuly send the message\n");
    if(socketreceive(s,serverreplymessage,strlen(serverreplymessage))<0){
        printf("Could not receive the message\n");
    }
    printf("Server responce : %s\n",serverreplymessage);
    close(s);
    return 0;
}
