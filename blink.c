#include <wiringPi.h>

int main(void)
{
    wiringPiSetup();
    pinMode(0, OUTPUT);
    for(;;)
    {
        digitalWrite(17, HIGH); delay(500);
        digitalWrite(17, HIGH); delay(500);
    }
    return 0;
}