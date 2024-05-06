/***********************************************************
File name:   led_blink1.ino
Description: Lit LED, let LED blinks.
***********************************************************/
int ledPin=8; //definisi pin 8 untuk kontrol led
void setup()
{
    pinMode(ledPin,OUTPUT);    //Set pin 8 menjadi output mode
}
void loop() //loop
{  
    digitalWrite(ledPin,HIGH); //HIGH set 5V PIN8
    delay(1000);               //Set the delay 1 detik
    digitalWrite(ledPin,LOW);  //LOW set 5V PIN8
    delay(1000);
} 