#include "uart.h"
unsigned char string_buffer1[100]="learn-in-depth<shady mamdouh>";
unsigned char const string_buffer2[100]="learn-in-depth<shady mamdouh>";
void main(void)
{
uart_send_string(string_buffer1);
}