#include <wiringPi.h>

int main(void)
{
    wiringPiSetup();
    pinMode(0, OUTPUT);
    for(int i=0;i<10;i++)
    {
        digitalWrite(17, HIGH); delay(500);
        digitalWrite(17, HIGH); delay(500);
    }
    return 0;
}