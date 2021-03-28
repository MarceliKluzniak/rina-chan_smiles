
//VARIABLES AND DEFINES HERE - NEEDED BY THE WS2812 DRIVER CODE
#define WS2812_pin 8 // only digital pin 8 works right now
#define numberOfLEDs 256// total number of RGB LEDs
#define BRIGHTNESS 10
byte RGB[768];//take your number of LEDs and multiply by 3

// FUNCTIONS HERE
void RGB_update(int LED, byte RED, byte GREEN, byte BLUE);//function to drive LEDs

void mapLEDXY(int y, int x, byte RED, byte  GREEN, byte BLUE)
{
  int RGBlocation = 0;

  if (y % 2 == 0) { //even column
    RGBlocation = x + y * 16;

  } else { //odd column
    RGBlocation = 15 - x + y * 16;
  }

  RGB[RGBlocation * 3] = BLUE;
  RGB[RGBlocation * 3 + 1] = RED;
  RGB[RGBlocation * 3 + 2] = GREEN;
}
void clearLEDs() {
  memset(RGB, 0, sizeof(RGB));
}


void setup() {
  pinMode(WS2812_pin, OUTPUT);
  clearLEDs();
  RGB_update(-1, 0, 0, 0);

}//setup


void loop() {
mapLEDXY(4,2,206,19,179);mapLEDXY(4,3,206,19,179);mapLEDXY(4,12,206,19,179);mapLEDXY(4,13,206,19,179);mapLEDXY(5,2,206,19,179);mapLEDXY(5,3,206,19,179);mapLEDXY(5,12,206,19,179);mapLEDXY(5,13,206,19,179);mapLEDXY(6,2,206,19,179);mapLEDXY(6,3,206,19,179);mapLEDXY(6,12,206,19,179);mapLEDXY(6,13,206,19,179);mapLEDXY(10,3,206,19,179);mapLEDXY(10,12,206,19,179);mapLEDXY(11,4,206,19,179);mapLEDXY(11,11,206,19,179);mapLEDXY(12,5,206,19,179);mapLEDXY(12,6,206,19,179);mapLEDXY(12,7,206,19,179);mapLEDXY(12,8,206,19,179);mapLEDXY(12,9,206,19,179);mapLEDXY(12,10,206,19,179);
RGB_update(-1, 0, 0, 0);
  delay(6000);
  clearLEDs();
  
mapLEDXY(10,3,206,19,179);mapLEDXY(10,12,206,19,179);mapLEDXY(11,4,206,19,179);mapLEDXY(11,11,206,19,179);mapLEDXY(12,5,206,19,179);mapLEDXY(12,6,206,19,179);mapLEDXY(12,7,206,19,179);mapLEDXY(12,8,206,19,179);mapLEDXY(12,9,206,19,179);mapLEDXY(12,10,206,19,179);


  RGB_update(-1, 0, 0, 0);
  delay(500);
  clearLEDs();
  
  mapLEDXY(4,2,206,19,179);mapLEDXY(4,3,206,19,179);mapLEDXY(4,12,206,19,179);mapLEDXY(4,13,206,19,179);mapLEDXY(5,2,206,19,179);mapLEDXY(5,3,206,19,179);mapLEDXY(5,12,206,19,179);mapLEDXY(5,13,206,19,179);mapLEDXY(6,2,206,19,179);mapLEDXY(6,3,206,19,179);mapLEDXY(6,12,206,19,179);mapLEDXY(6,13,206,19,179);mapLEDXY(10,3,206,19,179);mapLEDXY(10,12,206,19,179);mapLEDXY(11,4,206,19,179);mapLEDXY(11,11,206,19,179);mapLEDXY(12,5,206,19,179);mapLEDXY(12,6,206,19,179);mapLEDXY(12,7,206,19,179);mapLEDXY(12,8,206,19,179);mapLEDXY(12,9,206,19,179);mapLEDXY(12,10,206,19,179);
RGB_update(-1, 0, 0, 0);
  delay(1000);
  clearLEDs();
  
mapLEDXY(10,3,206,19,179);mapLEDXY(10,12,206,19,179);mapLEDXY(11,4,206,19,179);mapLEDXY(11,11,206,19,179);mapLEDXY(12,5,206,19,179);mapLEDXY(12,6,206,19,179);mapLEDXY(12,7,206,19,179);mapLEDXY(12,8,206,19,179);mapLEDXY(12,9,206,19,179);mapLEDXY(12,10,206,19,179);
  RGB_update(-1, 0, 0, 0);
  delay(500);
  clearLEDs(); 
  
 mapLEDXY(4,2,206,19,179);mapLEDXY(4,3,206,19,179);mapLEDXY(4,12,206,19,179);mapLEDXY(4,13,206,19,179);mapLEDXY(5,2,206,19,179);mapLEDXY(5,3,206,19,179);mapLEDXY(5,12,206,19,179);mapLEDXY(5,13,206,19,179);mapLEDXY(6,2,206,19,179);mapLEDXY(6,3,206,19,179);mapLEDXY(6,12,206,19,179);mapLEDXY(6,13,206,19,179);mapLEDXY(10,3,206,19,179);mapLEDXY(10,12,206,19,179);mapLEDXY(11,4,206,19,179);mapLEDXY(11,11,206,19,179);mapLEDXY(12,5,206,19,179);mapLEDXY(12,6,206,19,179);mapLEDXY(12,7,206,19,179);mapLEDXY(12,8,206,19,179);mapLEDXY(12,9,206,19,179);mapLEDXY(12,10,206,19,179);
RGB_update(-1, 0, 0, 0);
  delay(1000);
  clearLEDs();

mapLEDXY(10,3,206,19,179);mapLEDXY(10,12,206,19,179);mapLEDXY(11,4,206,19,179);mapLEDXY(11,11,206,19,179);mapLEDXY(12,5,206,19,179);mapLEDXY(12,6,206,19,179);mapLEDXY(12,7,206,19,179);mapLEDXY(12,8,206,19,179);mapLEDXY(12,9,206,19,179);mapLEDXY(12,10,206,19,179);
  RGB_update(-1, 0, 0, 0);
  delay(500);
  clearLEDs(); 

  mapLEDXY(4,2,206,19,179);mapLEDXY(4,3,206,19,179);mapLEDXY(4,12,206,19,179);mapLEDXY(4,13,206,19,179);mapLEDXY(5,2,206,19,179);mapLEDXY(5,3,206,19,179);mapLEDXY(5,12,206,19,179);mapLEDXY(5,13,206,19,179);mapLEDXY(6,2,206,19,179);mapLEDXY(6,3,206,19,179);mapLEDXY(6,12,206,19,179);mapLEDXY(6,13,206,19,179);mapLEDXY(10,3,206,19,179);mapLEDXY(10,12,206,19,179);mapLEDXY(11,4,206,19,179);mapLEDXY(11,11,206,19,179);mapLEDXY(12,5,206,19,179);mapLEDXY(12,6,206,19,179);mapLEDXY(12,7,206,19,179);mapLEDXY(12,8,206,19,179);mapLEDXY(12,9,206,19,179);mapLEDXY(12,10,206,19,179);
RGB_update(-1, 0, 0, 0);
  delay(5000);
  clearLEDs();
 
  
mapLEDXY(3,1,206,19,179);mapLEDXY(3,14,206,19,179);mapLEDXY(4,2,206,19,179);mapLEDXY(4,3,206,19,179);mapLEDXY(4,12,206,19,179);mapLEDXY(4,13,206,19,179);mapLEDXY(5,2,206,19,179);mapLEDXY(5,3,206,19,179);mapLEDXY(5,12,206,19,179);mapLEDXY(5,13,206,19,179);mapLEDXY(6,2,206,19,179);mapLEDXY(6,3,206,19,179);mapLEDXY(6,12,206,19,179);mapLEDXY(6,13,206,19,179);mapLEDXY(10,4,206,19,179);mapLEDXY(10,5,206,19,179);mapLEDXY(10,6,206,19,179);mapLEDXY(10,7,206,19,179);mapLEDXY(10,8,206,19,179);mapLEDXY(10,9,206,19,179);mapLEDXY(10,10,206,19,179);mapLEDXY(10,11,206,19,179);mapLEDXY(11,4,206,19,179);mapLEDXY(11,11,206,19,179);mapLEDXY(12,5,206,19,179);mapLEDXY(12,10,206,19,179);mapLEDXY(13,6,206,19,179);mapLEDXY(13,9,206,19,179);mapLEDXY(14,7,206,19,179);mapLEDXY(14,8,206,19,179);

  RGB_update(-1, 0, 0, 0);
  delay(3000);
  clearLEDs();

mapLEDXY(3,13,206,19,179);mapLEDXY(3,14,206,19,179);mapLEDXY(4,2,206,19,179);mapLEDXY(4,3,206,19,179);mapLEDXY(4,11,206,19,179);mapLEDXY(4,12,206,19,179);mapLEDXY(5,2,206,19,179);mapLEDXY(5,3,206,19,179);mapLEDXY(5,10,206,19,179);mapLEDXY(6,2,206,19,179);mapLEDXY(6,3,206,19,179);mapLEDXY(6,11,206,19,179);mapLEDXY(6,12,206,19,179);mapLEDXY(7,13,206,19,179);mapLEDXY(7,14,206,19,179);mapLEDXY(10,4,206,19,179);mapLEDXY(10,5,206,19,179);mapLEDXY(10,6,206,19,179);mapLEDXY(10,7,206,19,179);mapLEDXY(10,8,206,19,179);mapLEDXY(10,9,206,19,179);mapLEDXY(10,10,206,19,179);mapLEDXY(10,11,206,19,179);mapLEDXY(11,4,206,19,179);mapLEDXY(11,11,206,19,179);mapLEDXY(12,5,206,19,179);mapLEDXY(12,10,206,19,179);mapLEDXY(13,6,206,19,179);mapLEDXY(13,9,206,19,179);mapLEDXY(14,7,206,19,179);mapLEDXY(14,8,206,19,179); 

  
  RGB_update(-1, 0, 0, 0);
  delay(1000);
  clearLEDs();
  
mapLEDXY(4,2,206,19,179);mapLEDXY(4,3,206,19,179);mapLEDXY(4,12,206,19,179);mapLEDXY(4,13,206,19,179);mapLEDXY(5,2,206,19,179);mapLEDXY(5,3,206,19,179);mapLEDXY(5,12,206,19,179);mapLEDXY(5,13,206,19,179);mapLEDXY(6,2,206,19,179);mapLEDXY(6,3,206,19,179);mapLEDXY(6,12,206,19,179);mapLEDXY(6,13,206,19,179);mapLEDXY(10,3,206,19,179);mapLEDXY(10,12,206,19,179);mapLEDXY(11,4,206,19,179);mapLEDXY(11,11,206,19,179);mapLEDXY(12,5,206,19,179);mapLEDXY(12,6,206,19,179);mapLEDXY(12,7,206,19,179);mapLEDXY(12,8,206,19,179);mapLEDXY(12,9,206,19,179);mapLEDXY(12,10,206,19,179);


RGB_update(-1, 0, 0, 0);
  delay(3000);
  clearLEDs();

mapLEDXY(3,1,206,19,179);mapLEDXY(3,2,206,19,179);mapLEDXY(3,13,206,19,179);mapLEDXY(3,14,206,19,179);mapLEDXY(4,3,206,19,179);mapLEDXY(4,4,206,19,179);mapLEDXY(4,11,206,19,179);mapLEDXY(4,12,206,19,179);mapLEDXY(5,5,206,19,179);mapLEDXY(5,10,206,19,179);mapLEDXY(6,3,206,19,179);mapLEDXY(6,4,206,19,179);mapLEDXY(6,11,206,19,179);mapLEDXY(6,12,206,19,179);mapLEDXY(7,1,206,19,179);mapLEDXY(7,2,206,19,179);mapLEDXY(7,13,206,19,179);mapLEDXY(7,14,206,19,179);mapLEDXY(10,4,206,19,179);mapLEDXY(10,5,206,19,179);mapLEDXY(10,6,206,19,179);mapLEDXY(10,7,206,19,179);mapLEDXY(10,8,206,19,179);mapLEDXY(10,9,206,19,179);mapLEDXY(10,10,206,19,179);mapLEDXY(10,11,206,19,179);mapLEDXY(11,4,206,19,179);mapLEDXY(11,11,206,19,179);mapLEDXY(12,5,206,19,179);mapLEDXY(12,10,206,19,179);mapLEDXY(13,6,206,19,179);mapLEDXY(13,9,206,19,179);mapLEDXY(14,7,206,19,179);mapLEDXY(14,8,206,19,179);


  RGB_update(-1, 0, 0, 0);
  delay(5000);
  clearLEDs();


mapLEDXY(4,2,206,19,179);mapLEDXY(4,3,206,19,179);mapLEDXY(4,12,206,19,179);mapLEDXY(4,13,206,19,179);mapLEDXY(5,2,206,19,179);mapLEDXY(5,3,206,19,179);mapLEDXY(5,12,206,19,179);mapLEDXY(5,13,206,19,179);mapLEDXY(6,2,206,19,179);mapLEDXY(6,3,206,19,179);mapLEDXY(6,12,206,19,179);mapLEDXY(6,13,206,19,179);mapLEDXY(10,3,206,19,179);mapLEDXY(10,12,206,19,179);mapLEDXY(11,4,206,19,179);mapLEDXY(11,11,206,19,179);mapLEDXY(12,5,206,19,179);mapLEDXY(12,6,206,19,179);mapLEDXY(12,7,206,19,179);mapLEDXY(12,8,206,19,179);mapLEDXY(12,9,206,19,179);mapLEDXY(12,10,206,19,179);



  RGB_update(-1, 0, 0, 0);
  delay(1000);
  clearLEDs();




  
}//loop





//WS2812 Driver Function
void RGB_update(int LED, byte RED, byte GREEN, byte BLUE) {
  // LED is the LED number starting with 0
  // RED, GREEN, BLUE is the brightness 0..255 setpoint for that LED
  byte ExistingPort, WS2812pinHIGH;//local variables here to speed up pinWrites

  if (LED >= 0) { //map the REG GREEN BLUE Values into the RGB[] array
    RGB[LED * 3] = GREEN;
    RGB[LED * 3 + 1] = RED;
    RGB[LED * 3 + 2] = BLUE;
  }

  noInterrupts();//kill the interrupts while we send the bit stream out...
  ExistingPort = PORTB; // save the status of the entire PORT B - let's us write to the entire port without messing up the other pins on that port
  WS2812pinHIGH = PORTB | 1; //this gives us a byte we can use to set the whole PORTB with the WS2812 pin HIGH
  int bitStream = numberOfLEDs * 3;//total bytes in the LED string

  //This for loop runs through all of the bits (8 at a time) to set the WS2812 pin ON/OFF times
  for (int i = bitStream - 1; i >= 0; i--) {

    PORTB = WS2812pinHIGH;//bit 7  first, set the pin HIGH - it always goes high regardless of a 0/1

    //here's the tricky part, check if the bit in the byte is high/low then right that status to the pin
    // (RGB[i] & B10000000) will strip away the other bits in RGB[i], so here we'll be left with B10000000 or B00000000
    // then it's easy to check if the bit is high or low by AND'ing that with the bit mask ""&& B10000000)"" this gives 1 or 0
    // if it's a 1, we'll OR that with the Existing port, thus keeping the pin HIGH, if 0 the pin is written LOW
    PORTB = ((RGB[i] & B10000000) && B10000000) | ExistingPort;
    __asm__("nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t");//these are NOPS - these let us delay clock cycles for more precise timing
    PORTB = ExistingPort;//okay, here we know we have to be LOW regardless of the 0/1 bit state
    __asm__("nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t");//minimum LOW time for pin regardless of 0/1 bit state

    // then do it again for the next bit and so on... see the last bit though for a slight change

    PORTB = WS2812pinHIGH;//bit 6
    PORTB = ((RGB[i] & B01000000) && B01000000) | ExistingPort;
    __asm__("nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t");
    PORTB = ExistingPort;
    __asm__("nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t");

    PORTB = WS2812pinHIGH;//bit 5
    PORTB = ((RGB[i] & B00100000) && B00100000) | ExistingPort;
    __asm__("nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t");
    PORTB = ExistingPort;
    __asm__("nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t");

    PORTB = WS2812pinHIGH;//bit 4
    PORTB = ((RGB[i] & B00010000) && B00010000) | ExistingPort;
    __asm__("nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t");
    PORTB = ExistingPort;
    __asm__("nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t");

    PORTB = WS2812pinHIGH;//bit 3
    PORTB = ((RGB[i] & B00001000) && B00001000) | ExistingPort;
    __asm__("nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t");
    PORTB = ExistingPort;
    __asm__("nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t");

    PORTB = WS2812pinHIGH;//bit 2
    PORTB = ((RGB[i] & B00000100) && B00000100) | ExistingPort;
    __asm__("nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t");
    PORTB = ExistingPort;
    __asm__("nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t");

    PORTB = WS2812pinHIGH;//bit 1
    PORTB = ((RGB[i] & B00000010) && B00000010) | ExistingPort;
    __asm__("nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t");
    PORTB = ExistingPort;
    __asm__("nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t");

    PORTB = WS2812pinHIGH;//bit 0
    __asm__("nop\n\t");//on this last bit, the check is much faster, so had to add a NOP here
    PORTB = ((RGB[i] & B00000001) && B00000001) | ExistingPort;
    __asm__("nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t");
    PORTB = ExistingPort;//note there are no NOPs after writing the pin LOW, this is because the FOR Loop uses clock cycles that we can use instead of the NOPS
  }//for loop


  interrupts();//enable the interrupts

  // all done!
}//void RGB_update
