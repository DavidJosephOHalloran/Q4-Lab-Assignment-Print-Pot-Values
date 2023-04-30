#include "mbed.h"

AnalogIn mypotentiometer1 (p19);
AnalogIn mypotentiometer2 (p20);
PwmOut red(p23);
PwmOut green(p24);

float p1, p2;
Serial pc(USBTX, USBRX);

int main()
{
    while(1) {
        p1 = mypotentiometer1 * 100;
        p2 = mypotentiometer2 * 100;
                {
                red = mypotentiometer1;
                green = mypotentiometer2;     
                }             
        wait(0.5);  
        pc.printf("%f \n\r", mypotentiometer1.read());
        pc.printf("%f \n\r", mypotentiometer2.read());
    }
}