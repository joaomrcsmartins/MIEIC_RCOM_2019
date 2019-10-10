#ifndef _DEFINES_H_
#define _DEFINES_H_

//HARDWARE
#define BAUDRATE B38400
#define _POSIX_SOURCE 1 /* POSIX compliant source */
#define MODEMDEVICE "/dev/ttyS1"

//BOOLEAN
#define FALSE 0
#define TRUE 1

//FRAME
#define FLAG 0x7E
// ADDRESS FIELD
#define A_RECIEVER 0x01
#define A_SENDER 0x03
//CONTROL FIELD
#define C_SET 0b00000011
#define C_UA 0b00000111

//STATE MACHINE
#define START_S 0
#define FLAG_RCV 1
#define A_RCV 2
#define C_RCV 3
#define BCC_RCV 4
#define STOP_S 5

//EXECUTION SPECS
#define MAX_RETRIES 3
#define TIMEOUT 3

struct Message {
	unsigned char flag_i;    
	unsigned char a;
    unsigned char c;
    unsigned char bcc;
    unsigned char info[256];
    unsigned char flag_f;
};

#endif //_DEFINES_H_