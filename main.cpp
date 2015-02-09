#include "mbed.h"

DigitalOut ledForPower1(LED1);
DigitalOut ledForPower2(LED2);
DigitalOut ledForPower3(LED3);
DigitalOut ledForPower4(LED4);
PwmOut motor(p21);

int main() {
        
        motor=0;
        wait(2);
        
        motor=0.4;
        ledForPower1=1;
        wait(2);
        
        motor=0.6;
        ledForPower2=1;
        wait(2);
        
        motor=0.8;
        ledForPower3=1;
        wait(2);
        
        motor=1;
        ledForPower4=1;
    
}
