#include <elapsedMillis.h>
#include <FastLED.h>
#define NUM_LEDS 1500

CRGB leds[NUM_LEDS];


elapsedMillis timer_0;
int time_0;

elapsedMillis timer_U;
byte mode = 4;

byte val0; //byte val0 = 200;
byte val1; //byte val1 = 150;
byte val2; //byte val2 = 100;
byte val3; //byte val3 = 50;
byte val4 = 0;
byte val5 = 0;
byte val6 = 50;
byte val7 = 100;
byte val8 = 150;
byte val9 = 200;
byte val10;
byte val11;
byte val12;
byte val13;


byte val0a;
byte val1a;
byte val2a;
byte val3a;
byte val4a;
byte val5a;

const int p0;
const int p1 = 150;
const int p2 = 300;
const int p3 = 450;
const int p4 = 600; 


const int p5 = 750;
const int p6 = 900;
const int p7 = 1050;
const int p8 = 1200; 
const int p9 = 1350; 

byte phrase;
byte phrase1;
byte phrase2;
byte phrase3;
byte phrase4;

byte phrase5;
byte phrase6;
byte phrase7;
byte phrase8;
byte phrase9;
byte phrase10;
byte phrase11;
byte phrase12;
byte phrase13;


byte resetter;
byte gate;

byte hue;
byte ivariable = 3;

byte brightadder = 25; //max 50
byte hue0;
byte hue0a = 15;

byte hue1 = 35;
byte hue2 = 55;
byte hue3 = 80;
byte hue4 = 150;
byte hue5 = 170;
byte hue6 = 190;


const int p0_G[] {14,15,44,45,74,75,104,105,134,13,16,43,46,73,76,103,106,133,12,17,11,18,10,19,9,20,8,21,7,22,6,23,5,24,4,25,94,115,124,145,3,26,93,116,123,146,2,27,117,122,
1,28,31,58,61,88,91,118,121,0,29,30,59,60,89,90,119,120};

const int p1_G[] {p1+14,p1+15,p1+44,p1+45,p1+74,p1+75,p1+104,p1+105,p1+134,p1+13,p1+16,p1+43,p1+46,p1+73,p1+76,p1+103,p1+106,p1+133,p1+12,p1+17,p1+11,p1+18,p1+10,p1+19,p1+9,p1+20,p1+8,p1+21,p1+7,p1+22,p1+6,p1+23,p1+5,p1+24,p1+4,p1+25,p1+94,p1+115,p1+124,p1+145,p1+3,p1+26,p1+93,p1+116,p1+123,p1+146,p1+2,p1+27,p1+117,p1+122,p1+
1,p1+28,p1+31,p1+58,p1+61,p1+88,p1+91,p1+118,p1+121,p1+0,p1+29,p1+30,p1+59,p1+60,p1+89,p1+90,p1+119,p1+120};

const int p2_G[] {p2+14,p2+15,p2+44,p2+45,p2+74,p2+75,p2+104,p2+105,p2+134,p2+13,p2+16,p2+43,p2+46,p2+73,p2+76,p2+103,p2+106,p2+133,p2+12,p2+17,p2+11,p2+18,p2+10,p2+19,p2+9,p2+20,p2+8,p2+21,p2+7,p2+22,p2+6,p2+23,p2+5,p2+24,p2+4,p2+25,p2+94,p2+115,p2+124,p2+145,p2+3,p2+26,p2+93,p2+116,p2+123,p2+146,p2+2,p2+27,p2+117,p2+122,p2+
1,p2+28,p2+31,p2+58,p2+61,p2+88,p2+91,p2+118,p2+121,p2+0,p2+29,p2+30,p2+59,p2+60,p2+89,p2+90,p2+119,p2+120};

const int p3_G[] {p3+14,p3+15,p3+44,p3+45,p3+74,p3+75,p3+104,p3+105,p3+134,p3+13,p3+16,p3+43,p3+46,p3+73,p3+76,p3+103,p3+106,p3+133,p3+12,p3+17,p3+11,p3+18,p3+10,p3+19,p3+9,p3+20,p3+8,p3+21,p3+7,p3+22,p3+6,p3+23,p3+5,p3+24,p3+4,p3+25,p3+94,p3+115,p3+124,p3+145,p3+3,p3+26,p3+93,p3+116,p3+123,p3+146,p3+2,p3+27,p3+117,p3+122,p3+
1,p3+28,p3+31,p3+58,p3+61,p3+88,p3+91,p3+118,p3+121,p3+0,p3+29,p3+30,p3+59,p3+60,p3+89,p3+90,p3+119,p3+120};

const int p4_G[] {p4+14,p4+15,p4+44,p4+45,p4+74,p4+75,p4+104,p4+105,p4+134,p4+13,p4+16,p4+43,p4+46,p4+73,p4+76,p4+103,p4+106,p4+133,p4+12,p4+17,p4+11,p4+18,p4+10,p4+19,p4+9,p4+20,p4+8,p4+21,p4+7,p4+22,p4+6,p4+23,p4+5,p4+24,p4+4,p4+25,p4+94,p4+115,p4+124,p4+145,p4+3,p4+26,p4+93,p4+116,p4+123,p4+146,p4+2,p4+27,p4+117,p4+122,p4+
1,p4+28,p4+31,p4+58,p4+61,p4+88,p4+91,p4+118,p4+121,p4+0,p4+29,p4+30,p4+59,p4+60,p4+89,p4+90,p4+119,p4+120};

const int p5_G[] {p5+14,p5+15,p5+44,p5+45,p5+74,p5+75,p5+104,p5+105,p5+134,p5+13,p5+16,p5+43,p5+46,p5+73,p5+76,p5+103,p5+106,p5+133,p5+12,p5+17,p5+11,p5+18,p5+10,p5+19,p5+9,p5+20,p5+8,p5+21,p5+7,p5+22,p5+6,p5+23,p5+5,p5+24,p5+4,p5+25,p5+94,p5+115,p5+124,p5+145,p5+3,p5+26,p5+93,p5+116,p5+123,p5+146,p5+2,p5+27,p5+117,p5+122,p5+
1,p5+28,p5+31,p5+58,p5+61,p5+88,p5+91,p5+118,p5+121,p5+0,p5+29,p5+30,p5+59,p5+60,p5+89,p5+90,p5+119,p5+120};

const int p6_G[] {p6+14,p6+15,p6+44,p6+45,p6+74,p6+75,p6+104,p6+105,p6+134,p6+13,p6+16,p6+43,p6+46,p6+73,p6+76,p6+103,p6+106,p6+133,p6+12,p6+17,p6+11,p6+18,p6+10,p6+19,p6+9,p6+20,p6+8,p6+21,p6+7,p6+22,p6+6,p6+23,p6+5,p6+24,p6+4,p6+25,p6+94,p6+115,p6+124,p6+145,p6+3,p6+26,p6+93,p6+116,p6+123,p6+146,p6+2,p6+27,p6+117,p6+122,p6+
1,p6+28,p6+31,p6+58,p6+61,p6+88,p6+91,p6+118,p6+121,p6+0,p6+29,p6+30,p6+59,p6+60,p6+89,p6+90,p6+119,p6+120};

const int p7_G[] {p7+14,p7+15,p7+44,p7+45,p7+74,p7+75,p7+104,p7+105,p7+134,p7+13,p7+16,p7+43,p7+46,p7+73,p7+76,p7+103,p7+106,p7+133,p7+12,p7+17,p7+11,p7+18,p7+10,p7+19,p7+9,p7+20,p7+8,p7+21,p7+7,p7+22,p7+6,p7+23,p7+5,p7+24,p7+4,p7+25,p7+94,p7+115,p7+124,p7+145,p7+3,p7+26,p7+93,p7+116,p7+123,p7+146,p7+2,p7+27,p7+117,p7+122,p7+
1,p7+28,p7+31,p7+58,p7+61,p7+88,p7+91,p7+118,p7+121,p7+0,p7+29,p7+30,p7+59,p7+60,p7+89,p7+90,p7+119,p7+120};

const int p8_G[] {p8+14,p8+15,p8+44,p8+45,p8+74,p8+75,p8+104,p8+105,p8+134,p8+13,p8+16,p8+43,p8+46,p8+73,p8+76,p8+103,p8+106,p8+133,p8+12,p8+17,p8+11,p8+18,p8+10,p8+19,p8+9,p8+20,p8+8,p8+21,p8+7,p8+22,p8+6,p8+23,p8+5,p8+24,p8+4,p8+25,p8+94,p8+115,p8+124,p8+145,p8+3,p8+26,p8+93,p8+116,p8+123,p8+146,p8+2,p8+27,p8+117,p8+122,p8+
1,p8+28,p8+31,p8+58,p8+61,p8+88,p8+91,p8+118,p8+121,p8+0,p8+29,p8+30,p8+59,p8+60,p8+89,p8+90,p8+119,p8+120};

const int p9_G[] {p9+14,p9+15,p9+44,p9+45,p9+74,p9+75,p9+104,p9+105,p9+134,p9+13,p9+16,p9+43,p9+46,p9+73,p9+76,p9+103,p9+106,p9+133,p9+12,p9+17,p9+11,p9+18,p9+10,p9+19,p9+9,p9+20,p9+8,p9+21,p9+7,p9+22,p9+6,p9+23,p9+5,p9+24,p9+4,p9+25,p9+94,p9+115,p9+124,p9+145,p9+3,p9+26,p9+93,p9+116,p9+123,p9+146,p9+2,p9+27,p9+117,p9+122,p9+
1,p9+28,p9+31,p9+58,p9+61,p9+88,p9+91,p9+118,p9+121,p9+0,p9+29,p9+30,p9+59,p9+60,p9+89,p9+90,p9+119,p9+120};
byte Gmax = 68;

int p1_E[] {p1+14,p1+15,p1+44,p1+45,p1+74,p1+75,p1+104,p1+105,p1+134,p1+13,p1+16,p1+43,p1+46,p1+73,p1+76,p1+103,p1+106,p1+133,p1+12,p1+17,p1+11,p1+18,p1+10,p1+19,p1+9,p1+20,p1+8,p1+21,p1+38,p1+51,p1+68,p1+81,p1+98,p1+111,p1+7,p1+22,p1+37,p1+52,p1+67,p1+82,p1+97,p1+112,p1+6,p1+23,p1+5,p1+24,p1+4,p1+25,p1+3,p1+26,p1+2,p1+27,p1+1,p1+28,p1+31,p1+58,p1+61,p1+88,p1+91,p1+118,p1+121,p1+
0,p1+29,p1+30,p1+59,p1+60,p1+89,p1+90,p1+119,p1+120};//70

int p6_E[] {p6+14,p6+15,p6+44,p6+45,p6+74,p6+75,p6+104,p6+105,p6+134,p6+13,p6+16,p6+43,p6+46,p6+73,p6+76,p6+103,p6+106,p6+133,p6+12,p6+17,p6+11,p6+18,p6+10,p6+19,p6+9,p6+20,p6+8,p6+21,p6+38,p6+51,p6+68,p6+81,p6+98,p6+111,p6+7,p6+22,p6+37,p6+52,p6+67,p6+82,p6+97,p6+112,p6+6,p6+23,p6+5,p6+24,p6+4,p6+25,p6+3,p6+26,p6+2,p6+27,p6+1,p6+28,p6+31,p6+58,p6+61,p6+88,p6+91,p6+118,p6+121,p6+
0,p6+29,p6+30,p6+59,p6+60,p6+89,p6+90,p6+119,p6+120};//70
byte Emax = 70;

int p2_O[]{p2+14,p2+15,p2+44,p2+45,p2+74,p2+75,p2+104,p2+105,p2+134,p2+135,p2+13,p2+16,p2+43,p2+46,p2+73,p2+76,p2+103,p2+106,p2+133,p2+136,p2+12,p2+17,p2+132,p2+137,p2+11,p2+18,p2+131,p2+138,p2+10,p2+19,p2+130,p2+139,p2+9,p2+20,p2+129,p2+140,p2+8,p2+21,p2+128,p2+141,p2+7,p2+22,p2+127,p2+142,p2+
6,p2+23,p2+126,p2+143,p2+5,p2+24,p2+125,p2+144,p2+4,p2+25,p2+124,p2+145,p2+3,p2+26,p2+123,p2+146,p2+2,p2+27,p2+122,p2+147,p2+1,p2+28,p2+31,p2+58,p2+61,p2+88,p2+91,p2+118,p2+121,p2+148,p2+0,p2+29,p2+30,p2+59,p2+60,p2+89,p2+90,p2+119,p2+120,p2+149}; //84

int p7_O[]{p7+14,p7+15,p7+44,p7+45,p7+74,p7+75,p7+104,p7+105,p7+134,p7+135,p7+13,p7+16,p7+43,p7+46,p7+73,p7+76,p7+103,p7+106,p7+133,p7+136,p7+12,p7+17,p7+132,p7+137,p7+11,p7+18,p7+131,p7+138,p7+10,p7+19,p7+130,p7+139,p7+9,p7+20,p7+129,p7+140,p7+8,p7+21,p7+128,p7+141,p7+7,p7+22,p7+127,p7+142,p7+
6,p7+23,p7+126,p7+143,p7+5,p7+24,p7+125,p7+144,p7+4,p7+25,p7+124,p7+145,p7+3,p7+26,p7+123,p7+146,p7+2,p7+27,p7+122,p7+147,p7+1,p7+28,p7+31,p7+58,p7+61,p7+88,p7+91,p7+118,p7+121,p7+148,p7+0,p7+29,p7+30,p7+59,p7+60,p7+89,p7+90,p7+119,p7+120,p7+149}; //84
byte Omax = 84;

int p3_R[]{p3+14,p3+15,p3+44,p3+45,p3+74,p3+75,p3+104,p3+105,p3+134,p3+135,p3+13,p3+16,p3+43,p3+46,p3+73,p3+76,p3+103,p3+106,p3+133,p3+136,p3+12,p3+17,p3+132,p3+137,p3+11,p3+18,p3+131,p3+138,p3+10,p3+19,p3+130,p3+139,p3+9,p3+20,p3+129,p3+140,p3+
8,p3+21,p3+38,p3+51,p3+68,p3+81,p3+98,p3+111,p3+128,p3+141,p3+7,p3+22,p3+37,p3+52,p3+67,p3+82,p3+97,p3+112,p3+127,p3+142,p3+6,p3+23,p3+36,p3+53,p3+5,p3+24,p3+54,p3+65,p3+4,p3+25,p3+64,p3+85,p3+3,p3+26,p3+86,p3+93,p3+2,p3+27,p3+92,p3+117,p3+1,p3+28,p3+118,p3+121,p3+0,p3+29,p3+120,p3+149};

int p8_R[]{p8+14,p8+15,p8+44,p8+45,p8+74,p8+75,p8+104,p8+105,p8+134,p8+135,p8+13,p8+16,p8+43,p8+46,p8+73,p8+76,p8+103,p8+106,p8+133,p8+136,p8+12,p8+17,p8+132,p8+137,p8+11,p8+18,p8+131,p8+138,p8+10,p8+19,p8+130,p8+139,p8+9,p8+20,p8+129,p8+140,p8+
8,p8+21,p8+38,p8+51,p8+68,p8+81,p8+98,p8+111,p8+128,p8+141,p8+7,p8+22,p8+37,p8+52,p8+67,p8+82,p8+97,p8+112,p8+127,p8+142,p8+6,p8+23,p8+36,p8+53,p8+5,p8+24,p8+54,p8+65,p8+4,p8+25,p8+64,p8+85,p8+3,p8+26,p8+86,p8+93,p8+2,p8+27,p8+92,p8+117,p8+1,p8+28,p8+118,p8+121,p8+0,p8+29,p8+120,p8+149};
byte Rmax = 84;

void setup() {
 FastLED.addLeds<WS2812,1,GRB>(leds, 750);
FastLED.addLeds<WS2812,2,GRB>(leds, 750, NUM_LEDS);
 
 FastLED.setBrightness(70);
 //Serial.begin (9600);
    for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); } FastLED.show();  

}

void loop() {
  for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }

  /////////////////////////////////////////////////////////////////////////////////PANEL 0
///top left
leds[p0+17] = CHSV(hue0, 255, val0);
leds[p0+18] = CHSV(hue0, 255, val0); 
leds[p0+42] = CHSV(hue0, 255, val0); 
leds[p0+41] = CHSV(hue0, 255, val0); 

leds[p0+13] = CHSV(hue0a, 255, val0a); 
leds[p0+16] = CHSV(hue0a, 255, val0a);
leds[p0+43] = CHSV(hue0a, 255, val0a); 
leds[p0+46] = CHSV(hue0a, 255, val0a); 
leds[p0+47] = CHSV(hue0a, 255, val0a); 
leds[p0+48] = CHSV(hue0a, 255, val0a); 
leds[p0+49] = CHSV(hue0a, 255, val0a); 
leds[p0+40] = CHSV(hue0a, 255, val0a); 
leds[p0+19] = CHSV(hue0a, 255, val0a); 
leds[p0+10] = CHSV(hue0a, 255, val0a); 
leds[p0+11] = CHSV(hue0a, 255, val0a); 
leds[p0+12] = CHSV(hue0a, 255, val0a); 

//mid left
leds[p0+22] = CHSV(hue0, 255, val1);
leds[p0+37] = CHSV(hue0, 255, val1); 
leds[p0+23] = CHSV(hue0, 255, val1); 
leds[p0+36] = CHSV(hue0, 255, val1); 

leds[p0+8] = CHSV(hue0a, 255, val1a); 
leds[p0+21] = CHSV(hue0a, 255, val1a);
leds[p0+38] = CHSV(hue0a, 255, val1a); 
leds[p0+51] = CHSV(hue0a, 255, val1a); 
leds[p0+52] = CHSV(hue0a, 255, val1a); 
leds[p0+53] = CHSV(hue0a, 255, val1a); 
leds[p0+54] = CHSV(hue0a, 255, val1a); 
leds[p0+35] = CHSV(hue0a, 255, val1a); 
leds[p0+24] = CHSV(hue0a, 255, val1a); 
leds[p0+5] = CHSV(hue0a, 255, val1a); 
leds[p0+6] = CHSV(hue0a, 255, val1a); 
leds[p0+7] = CHSV(hue0a, 255, val1a); 

//bottom left
leds[p0+27] = CHSV(hue0, 255, val2);
leds[p0+32] = CHSV(hue0, 255, val2); 
leds[p0+28] = CHSV(hue0, 255, val2); 
leds[p0+31] = CHSV(hue0, 255, val2); 

leds[p0+3] = CHSV(hue0a, 255, val2a); 
leds[p0+26] = CHSV(hue0a, 255, val2a);
leds[p0+33] = CHSV(hue0a, 255, val2a); 
leds[p0+56] = CHSV(hue0a, 255, val2a); 
leds[p0+57] = CHSV(hue0a, 255, val2a); 
leds[p0+58] = CHSV(hue0a, 255, val2a); 
leds[p0+59] = CHSV(hue0a, 255, val2a); 
leds[p0+30] = CHSV(hue0a, 255, val2a); 
leds[p0+29] = CHSV(hue0a, 255, val2a); 
leds[p0+0] = CHSV(hue0a, 255, val2a); 
leds[p0+1] = CHSV(hue0a, 255, val2a); 
leds[p0+2] = CHSV(hue0a, 255, val2a); 


//top right
leds[p0+107] = CHSV(hue0, 255, val3);
leds[p0+132] = CHSV(hue0, 255, val3); 
leds[p0+108] = CHSV(hue0, 255, val3); 
leds[p0+131] = CHSV(hue0, 255, val3); 

leds[p0+103] = CHSV(hue0a, 255, val3a); 
leds[p0+106] = CHSV(hue0a, 255, val3a);
leds[p0+133] = CHSV(hue0a, 255, val3a); 
leds[p0+136] = CHSV(hue0a, 255, val3a); 
leds[p0+137] = CHSV(hue0a, 255, val3a);
leds[p0+138] = CHSV(hue0a, 255, val3a);  
leds[p0+139] = CHSV(hue0a, 255, val3a); 
leds[p0+130] = CHSV(hue0a, 255, val3a); 
leds[p0+109] = CHSV(hue0a, 255, val3a); 
leds[p0+100] = CHSV(hue0a, 255, val3a); 
leds[p0+101] = CHSV(hue0a, 255, val3a); 
leds[p0+102] = CHSV(hue0a, 255, val3a); 


//mid right
leds[p0+112] = CHSV(hue0, 255, val4);
leds[p0+127] = CHSV(hue0, 255, val4); 
leds[p0+113] = CHSV(hue0, 255, val4); 
leds[p0+126] = CHSV(hue0, 255, val4); 

leds[p0+98] = CHSV(hue0a, 255, val4a); 
leds[p0+111] = CHSV(hue0a, 255, val4a);
leds[p0+128] = CHSV(hue0a, 255, val4a); 
leds[p0+141] = CHSV(hue0a, 255, val4a); 
leds[p0+142] = CHSV(hue0a, 255, val4a); 
leds[p0+143] = CHSV(hue0a, 255, val4a); 
leds[p0+144] = CHSV(hue0a, 255, val4a); 
leds[p0+125] = CHSV(hue0a, 255, val4a); 
leds[p0+114] = CHSV(hue0a, 255, val4a); 
leds[p0+95] = CHSV(hue0a, 255, val4a); 
leds[p0+96] = CHSV(hue0a, 255, val4a); 
leds[p0+97] = CHSV(hue0a, 255, val4a); 

//bottom right
leds[p0+117] = CHSV(hue0, 255, val5);
leds[p0+122] = CHSV(hue0, 255, val5); 
leds[p0+118] = CHSV(hue0, 255, val5); 
leds[p0+121] = CHSV(hue0, 255, val5); 

leds[p0+93] = CHSV(hue0a, 255, val5a); 
leds[p0+116] = CHSV(hue0a, 255, val5a);
leds[p0+123] = CHSV(hue0a, 255, val5a); 
leds[p0+146] = CHSV(hue0a, 255, val5a); 
leds[p0+147] = CHSV(hue0a, 255, val5a); 
leds[p0+148] = CHSV(hue0a, 255, val5a); 
leds[p0+149] = CHSV(hue0a, 255, val5a); 
leds[p0+120] = CHSV(hue0a, 255, val5a); 
leds[p0+119] = CHSV(hue0a, 255, val5a); 
leds[p0+90] = CHSV(hue0a, 255, val5a); 
leds[p0+91] = CHSV(hue0a, 255, val5a); 
leds[p0+92] = CHSV(hue0a, 255, val5a); 
  /////////////////////////////////////////////////////////////////////////////////PANEL 1
///top left
leds[p1+17] = CHSV(hue0, 255, val0);
leds[p1+18] = CHSV(hue0, 255, val0); 
leds[p1+42] = CHSV(hue0, 255, val0); 
leds[p1+41] = CHSV(hue0, 255, val0); 

leds[p1+13] = CHSV(hue0a, 255, val0a); 
leds[p1+16] = CHSV(hue0a, 255, val0a);
leds[p1+43] = CHSV(hue0a, 255, val0a); 
leds[p1+46] = CHSV(hue0a, 255, val0a); 
leds[p1+47] = CHSV(hue0a, 255, val0a); 
leds[p1+48] = CHSV(hue0a, 255, val0a); 
leds[p1+49] = CHSV(hue0a, 255, val0a); 
leds[p1+40] = CHSV(hue0a, 255, val0a); 
leds[p1+19] = CHSV(hue0a, 255, val0a); 
leds[p1+10] = CHSV(hue0a, 255, val0a); 
leds[p1+11] = CHSV(hue0a, 255, val0a); 
leds[p1+12] = CHSV(hue0a, 255, val0a); 

//mid left
leds[p1+22] = CHSV(hue0, 255, val1);
leds[p1+37] = CHSV(hue0, 255, val1); 
leds[p1+23] = CHSV(hue0, 255, val1); 
leds[p1+36] = CHSV(hue0, 255, val1); 

leds[p1+8] = CHSV(hue0a, 255, val1a); 
leds[p1+21] = CHSV(hue0a, 255, val1a);
leds[p1+38] = CHSV(hue0a, 255, val1a); 
leds[p1+51] = CHSV(hue0a, 255, val1a); 
leds[p1+52] = CHSV(hue0a, 255, val1a); 
leds[p1+53] = CHSV(hue0a, 255, val1a); 
leds[p1+54] = CHSV(hue0a, 255, val1a); 
leds[p1+35] = CHSV(hue0a, 255, val1a); 
leds[p1+24] = CHSV(hue0a, 255, val1a); 
leds[p1+5] = CHSV(hue0a, 255, val1a); 
leds[p1+6] = CHSV(hue0a, 255, val1a); 
leds[p1+7] = CHSV(hue0a, 255, val1a); 

//bottom left
leds[p1+27] = CHSV(hue0, 255, val2);
leds[p1+32] = CHSV(hue0, 255, val2); 
leds[p1+28] = CHSV(hue0, 255, val2); 
leds[p1+31] = CHSV(hue0, 255, val2); 

leds[p1+3] = CHSV(hue0a, 255, val2a); 
leds[p1+26] = CHSV(hue0a, 255, val2a);
leds[p1+33] = CHSV(hue0a, 255, val2a); 
leds[p1+56] = CHSV(hue0a, 255, val2a); 
leds[p1+57] = CHSV(hue0a, 255, val2a); 
leds[p1+58] = CHSV(hue0a, 255, val2a); 
leds[p1+59] = CHSV(hue0a, 255, val2a); 
leds[p1+30] = CHSV(hue0a, 255, val2a); 
leds[p1+29] = CHSV(hue0a, 255, val2a); 
leds[p1+0] = CHSV(hue0a, 255, val2a); 
leds[p1+1] = CHSV(hue0a, 255, val2a); 
leds[p1+2] = CHSV(hue0a, 255, val2a); 


//top right
leds[p1+107] = CHSV(hue0, 255, val3);
leds[p1+132] = CHSV(hue0, 255, val3); 
leds[p1+108] = CHSV(hue0, 255, val3); 
leds[p1+131] = CHSV(hue0, 255, val3); 

leds[p1+103] = CHSV(hue0a, 255, val3a); 
leds[p1+106] = CHSV(hue0a, 255, val3a);
leds[p1+133] = CHSV(hue0a, 255, val3a); 
leds[p1+136] = CHSV(hue0a, 255, val3a); 
leds[p1+137] = CHSV(hue0a, 255, val3a);
leds[p1+138] = CHSV(hue0a, 255, val3a);  
leds[p1+139] = CHSV(hue0a, 255, val3a); 
leds[p1+130] = CHSV(hue0a, 255, val3a); 
leds[p1+109] = CHSV(hue0a, 255, val3a); 
leds[p1+100] = CHSV(hue0a, 255, val3a); 
leds[p1+101] = CHSV(hue0a, 255, val3a); 
leds[p1+102] = CHSV(hue0a, 255, val3a); 


//mid right
leds[p1+112] = CHSV(hue0, 255, val4);
leds[p1+127] = CHSV(hue0, 255, val4); 
leds[p1+113] = CHSV(hue0, 255, val4); 
leds[p1+126] = CHSV(hue0, 255, val4); 

leds[p1+98] = CHSV(hue0a, 255, val4a); 
leds[p1+111] = CHSV(hue0a, 255, val4a);
leds[p1+128] = CHSV(hue0a, 255, val4a); 
leds[p1+141] = CHSV(hue0a, 255, val4a); 
leds[p1+142] = CHSV(hue0a, 255, val4a); 
leds[p1+143] = CHSV(hue0a, 255, val4a); 
leds[p1+144] = CHSV(hue0a, 255, val4a); 
leds[p1+125] = CHSV(hue0a, 255, val4a); 
leds[p1+114] = CHSV(hue0a, 255, val4a); 
leds[p1+95] = CHSV(hue0a, 255, val4a); 
leds[p1+96] = CHSV(hue0a, 255, val4a); 
leds[p1+97] = CHSV(hue0a, 255, val4a); 

//bottom right
leds[p1+117] = CHSV(hue0, 255, val5);
leds[p1+122] = CHSV(hue0, 255, val5); 
leds[p1+118] = CHSV(hue0, 255, val5); 
leds[p1+121] = CHSV(hue0, 255, val5); 

leds[p1+93] = CHSV(hue0a, 255, val5a); 
leds[p1+116] = CHSV(hue0a, 255, val5a);
leds[p1+123] = CHSV(hue0a, 255, val5a); 
leds[p1+146] = CHSV(hue0a, 255, val5a); 
leds[p1+147] = CHSV(hue0a, 255, val5a); 
leds[p1+148] = CHSV(hue0a, 255, val5a); 
leds[p1+149] = CHSV(hue0a, 255, val5a); 
leds[p1+120] = CHSV(hue0a, 255, val5a); 
leds[p1+119] = CHSV(hue0a, 255, val5a); 
leds[p1+90] = CHSV(hue0a, 255, val5a); 
leds[p1+91] = CHSV(hue0a, 255, val5a); 
leds[p1+92] = CHSV(hue0a, 255, val5a); 
/////////////////////////////////////////////////////////////////////////////////PANEL 2
///top left
leds[p2+17] = CHSV(hue0, 255, val0);
leds[p2+18] = CHSV(hue0, 255, val0); 
leds[p2+42] = CHSV(hue0, 255, val0); 
leds[p2+41] = CHSV(hue0, 255, val0); 

leds[p2+13] = CHSV(hue0a, 255, val0a); 
leds[p2+16] = CHSV(hue0a, 255, val0a);
leds[p2+43] = CHSV(hue0a, 255, val0a); 
leds[p2+46] = CHSV(hue0a, 255, val0a); 
leds[p2+47] = CHSV(hue0a, 255, val0a); 
leds[p2+48] = CHSV(hue0a, 255, val0a); 
leds[p2+49] = CHSV(hue0a, 255, val0a); 
leds[p2+40] = CHSV(hue0a, 255, val0a); 
leds[p2+19] = CHSV(hue0a, 255, val0a); 
leds[p2+10] = CHSV(hue0a, 255, val0a); 
leds[p2+11] = CHSV(hue0a, 255, val0a); 
leds[p2+12] = CHSV(hue0a, 255, val0a); 

//mid left
leds[p2+22] = CHSV(hue0, 255, val1);
leds[p2+37] = CHSV(hue0, 255, val1); 
leds[p2+23] = CHSV(hue0, 255, val1); 
leds[p2+36] = CHSV(hue0, 255, val1); 

leds[p2+8] = CHSV(hue0a, 255, val1a); 
leds[p2+21] = CHSV(hue0a, 255, val1a);
leds[p2+38] = CHSV(hue0a, 255, val1a); 
leds[p2+51] = CHSV(hue0a, 255, val1a); 
leds[p2+52] = CHSV(hue0a, 255, val1a); 
leds[p2+53] = CHSV(hue0a, 255, val1a); 
leds[p2+54] = CHSV(hue0a, 255, val1a); 
leds[p2+35] = CHSV(hue0a, 255, val1a); 
leds[p2+24] = CHSV(hue0a, 255, val1a); 
leds[p2+5] = CHSV(hue0a, 255, val1a); 
leds[p2+6] = CHSV(hue0a, 255, val1a); 
leds[p2+7] = CHSV(hue0a, 255, val1a); 

//bottom left
leds[p2+27] = CHSV(hue0, 255, val2);
leds[p2+32] = CHSV(hue0, 255, val2); 
leds[p2+28] = CHSV(hue0, 255, val2); 
leds[p2+31] = CHSV(hue0, 255, val2); 

leds[p2+3] = CHSV(hue0a, 255, val2a); 
leds[p2+26] = CHSV(hue0a, 255, val2a);
leds[p2+33] = CHSV(hue0a, 255, val2a); 
leds[p2+56] = CHSV(hue0a, 255, val2a); 
leds[p2+57] = CHSV(hue0a, 255, val2a); 
leds[p2+58] = CHSV(hue0a, 255, val2a); 
leds[p2+59] = CHSV(hue0a, 255, val2a); 
leds[p2+30] = CHSV(hue0a, 255, val2a); 
leds[p2+29] = CHSV(hue0a, 255, val2a); 
leds[p2+0] = CHSV(hue0a, 255, val2a); 
leds[p2+1] = CHSV(hue0a, 255, val2a); 
leds[p2+2] = CHSV(hue0a, 255, val2a); 


//top right
leds[p2+107] = CHSV(hue0, 255, val3);
leds[p2+132] = CHSV(hue0, 255, val3); 
leds[p2+108] = CHSV(hue0, 255, val3); 
leds[p2+131] = CHSV(hue0, 255, val3); 

leds[p2+103] = CHSV(hue0a, 255, val3a); 
leds[p2+106] = CHSV(hue0a, 255, val3a);
leds[p2+133] = CHSV(hue0a, 255, val3a); 
leds[p2+136] = CHSV(hue0a, 255, val3a); 
leds[p2+137] = CHSV(hue0a, 255, val3a);
leds[p2+138] = CHSV(hue0a, 255, val3a);  
leds[p2+139] = CHSV(hue0a, 255, val3a); 
leds[p2+130] = CHSV(hue0a, 255, val3a); 
leds[p2+109] = CHSV(hue0a, 255, val3a); 
leds[p2+100] = CHSV(hue0a, 255, val3a); 
leds[p2+101] = CHSV(hue0a, 255, val3a); 
leds[p2+102] = CHSV(hue0a, 255, val3a); 


//mid right
leds[p2+112] = CHSV(hue0, 255, val4);
leds[p2+127] = CHSV(hue0, 255, val4); 
leds[p2+113] = CHSV(hue0, 255, val4); 
leds[p2+126] = CHSV(hue0, 255, val4); 

leds[p2+98] = CHSV(hue0a, 255, val4a); 
leds[p2+111] = CHSV(hue0a, 255, val4a);
leds[p2+128] = CHSV(hue0a, 255, val4a); 
leds[p2+141] = CHSV(hue0a, 255, val4a); 
leds[p2+142] = CHSV(hue0a, 255, val4a); 
leds[p2+143] = CHSV(hue0a, 255, val4a); 
leds[p2+144] = CHSV(hue0a, 255, val4a); 
leds[p2+125] = CHSV(hue0a, 255, val4a); 
leds[p2+114] = CHSV(hue0a, 255, val4a); 
leds[p2+95] = CHSV(hue0a, 255, val4a); 
leds[p2+96] = CHSV(hue0a, 255, val4a); 
leds[p2+97] = CHSV(hue0a, 255, val4a); 

//bottom right
leds[p2+117] = CHSV(hue0, 255, val5);
leds[p2+122] = CHSV(hue0, 255, val5); 
leds[p2+118] = CHSV(hue0, 255, val5); 
leds[p2+121] = CHSV(hue0, 255, val5); 

leds[p2+93] = CHSV(hue0a, 255, val5a); 
leds[p2+116] = CHSV(hue0a, 255, val5a);
leds[p2+123] = CHSV(hue0a, 255, val5a); 
leds[p2+146] = CHSV(hue0a, 255, val5a); 
leds[p2+147] = CHSV(hue0a, 255, val5a); 
leds[p2+148] = CHSV(hue0a, 255, val5a); 
leds[p2+149] = CHSV(hue0a, 255, val5a); 
leds[p2+120] = CHSV(hue0a, 255, val5a); 
leds[p2+119] = CHSV(hue0a, 255, val5a); 
leds[p2+90] = CHSV(hue0a, 255, val5a); 
leds[p2+91] = CHSV(hue0a, 255, val5a); 
leds[p2+92] = CHSV(hue0a, 255, val5a); 

/////////////////////////////////////////////////////////////////////////////////PANEL 3
///top left
leds[p3+17] = CHSV(hue0, 255, val0);
leds[p3+18] = CHSV(hue0, 255, val0); 
leds[p3+42] = CHSV(hue0, 255, val0); 
leds[p3+41] = CHSV(hue0, 255, val0); 

leds[p3+13] = CHSV(hue0a, 255, val0a); 
leds[p3+16] = CHSV(hue0a, 255, val0a);
leds[p3+43] = CHSV(hue0a, 255, val0a); 
leds[p3+46] = CHSV(hue0a, 255, val0a); 
leds[p3+47] = CHSV(hue0a, 255, val0a); 
leds[p3+48] = CHSV(hue0a, 255, val0a); 
leds[p3+49] = CHSV(hue0a, 255, val0a); 
leds[p3+40] = CHSV(hue0a, 255, val0a); 
leds[p3+19] = CHSV(hue0a, 255, val0a); 
leds[p3+10] = CHSV(hue0a, 255, val0a); 
leds[p3+11] = CHSV(hue0a, 255, val0a); 
leds[p3+12] = CHSV(hue0a, 255, val0a); 

//mid left
leds[p3+22] = CHSV(hue0, 255, val1);
leds[p3+37] = CHSV(hue0, 255, val1); 
leds[p3+23] = CHSV(hue0, 255, val1); 
leds[p3+36] = CHSV(hue0, 255, val1); 

leds[p3+8] = CHSV(hue0a, 255, val1a); 
leds[p3+21] = CHSV(hue0a, 255, val1a);
leds[p3+38] = CHSV(hue0a, 255, val1a); 
leds[p3+51] = CHSV(hue0a, 255, val1a); 
leds[p3+52] = CHSV(hue0a, 255, val1a); 
leds[p3+53] = CHSV(hue0a, 255, val1a); 
leds[p3+54] = CHSV(hue0a, 255, val1a); 
leds[p3+35] = CHSV(hue0a, 255, val1a); 
leds[p3+24] = CHSV(hue0a, 255, val1a); 
leds[p3+5] = CHSV(hue0a, 255, val1a); 
leds[p3+6] = CHSV(hue0a, 255, val1a); 
leds[p3+7] = CHSV(hue0a, 255, val1a); 

//bottom left
leds[p3+27] = CHSV(hue0, 255, val2);
leds[p3+32] = CHSV(hue0, 255, val2); 
leds[p3+28] = CHSV(hue0, 255, val2); 
leds[p3+31] = CHSV(hue0, 255, val2); 

leds[p3+3] = CHSV(hue0a, 255, val2a); 
leds[p3+26] = CHSV(hue0a, 255, val2a);
leds[p3+33] = CHSV(hue0a, 255, val2a); 
leds[p3+56] = CHSV(hue0a, 255, val2a); 
leds[p3+57] = CHSV(hue0a, 255, val2a); 
leds[p3+58] = CHSV(hue0a, 255, val2a); 
leds[p3+59] = CHSV(hue0a, 255, val2a); 
leds[p3+30] = CHSV(hue0a, 255, val2a); 
leds[p3+29] = CHSV(hue0a, 255, val2a); 
leds[p3+0] = CHSV(hue0a, 255, val2a); 
leds[p3+1] = CHSV(hue0a, 255, val2a); 
leds[p3+2] = CHSV(hue0a, 255, val2a); 


//top right
leds[p3+107] = CHSV(hue0, 255, val3);
leds[p3+132] = CHSV(hue0, 255, val3); 
leds[p3+108] = CHSV(hue0, 255, val3); 
leds[p3+131] = CHSV(hue0, 255, val3); 

leds[p3+103] = CHSV(hue0a, 255, val3a); 
leds[p3+106] = CHSV(hue0a, 255, val3a);
leds[p3+133] = CHSV(hue0a, 255, val3a); 
leds[p3+136] = CHSV(hue0a, 255, val3a); 
leds[p3+137] = CHSV(hue0a, 255, val3a);
leds[p3+138] = CHSV(hue0a, 255, val3a);  
leds[p3+139] = CHSV(hue0a, 255, val3a); 
leds[p3+130] = CHSV(hue0a, 255, val3a); 
leds[p3+109] = CHSV(hue0a, 255, val3a); 
leds[p3+100] = CHSV(hue0a, 255, val3a); 
leds[p3+101] = CHSV(hue0a, 255, val3a); 
leds[p3+102] = CHSV(hue0a, 255, val3a); 


//mid right
leds[p3+112] = CHSV(hue0, 255, val4);
leds[p3+127] = CHSV(hue0, 255, val4); 
leds[p3+113] = CHSV(hue0, 255, val4); 
leds[p3+126] = CHSV(hue0, 255, val4); 

leds[p3+98] = CHSV(hue0a, 255, val4a); 
leds[p3+111] = CHSV(hue0a, 255, val4a);
leds[p3+128] = CHSV(hue0a, 255, val4a); 
leds[p3+141] = CHSV(hue0a, 255, val4a); 
leds[p3+142] = CHSV(hue0a, 255, val4a); 
leds[p3+143] = CHSV(hue0a, 255, val4a); 
leds[p3+144] = CHSV(hue0a, 255, val4a); 
leds[p3+125] = CHSV(hue0a, 255, val4a); 
leds[p3+114] = CHSV(hue0a, 255, val4a); 
leds[p3+95] = CHSV(hue0a, 255, val4a); 
leds[p3+96] = CHSV(hue0a, 255, val4a); 
leds[p3+97] = CHSV(hue0a, 255, val4a); 

//bottom right
leds[p3+117] = CHSV(hue0, 255, val5);
leds[p3+122] = CHSV(hue0, 255, val5); 
leds[p3+118] = CHSV(hue0, 255, val5); 
leds[p3+121] = CHSV(hue0, 255, val5); 

leds[p3+93] = CHSV(hue0a, 255, val5a); 
leds[p3+116] = CHSV(hue0a, 255, val5a);
leds[p3+123] = CHSV(hue0a, 255, val5a); 
leds[p3+146] = CHSV(hue0a, 255, val5a); 
leds[p3+147] = CHSV(hue0a, 255, val5a); 
leds[p3+148] = CHSV(hue0a, 255, val5a); 
leds[p3+149] = CHSV(hue0a, 255, val5a); 
leds[p3+120] = CHSV(hue0a, 255, val5a); 
leds[p3+119] = CHSV(hue0a, 255, val5a); 
leds[p3+90] = CHSV(hue0a, 255, val5a); 
leds[p3+91] = CHSV(hue0a, 255, val5a); 
leds[p3+92] = CHSV(hue0a, 255, val5a); 
/////////////////////////////////////////////////////////////////////////////////PANEL 4
///top left
leds[p4+17] = CHSV(hue0, 255, val0);
leds[p4+18] = CHSV(hue0, 255, val0); 
leds[p4+42] = CHSV(hue0, 255, val0); 
leds[p4+41] = CHSV(hue0, 255, val0); 

leds[p4+13] = CHSV(hue0a, 255, val0a); 
leds[p4+16] = CHSV(hue0a, 255, val0a);
leds[p4+43] = CHSV(hue0a, 255, val0a); 
leds[p4+46] = CHSV(hue0a, 255, val0a); 
leds[p4+47] = CHSV(hue0a, 255, val0a); 
leds[p4+48] = CHSV(hue0a, 255, val0a); 
leds[p4+49] = CHSV(hue0a, 255, val0a); 
leds[p4+40] = CHSV(hue0a, 255, val0a); 
leds[p4+19] = CHSV(hue0a, 255, val0a); 
leds[p4+10] = CHSV(hue0a, 255, val0a); 
leds[p4+11] = CHSV(hue0a, 255, val0a); 
leds[p4+12] = CHSV(hue0a, 255, val0a); 

//mid left
leds[p4+22] = CHSV(hue0, 255, val1);
leds[p4+37] = CHSV(hue0, 255, val1); 
leds[p4+23] = CHSV(hue0, 255, val1); 
leds[p4+36] = CHSV(hue0, 255, val1); 

leds[p4+8] = CHSV(hue0a, 255, val1a); 
leds[p4+21] = CHSV(hue0a, 255, val1a);
leds[p4+38] = CHSV(hue0a, 255, val1a); 
leds[p4+51] = CHSV(hue0a, 255, val1a); 
leds[p4+52] = CHSV(hue0a, 255, val1a); 
leds[p4+53] = CHSV(hue0a, 255, val1a); 
leds[p4+54] = CHSV(hue0a, 255, val1a); 
leds[p4+35] = CHSV(hue0a, 255, val1a); 
leds[p4+24] = CHSV(hue0a, 255, val1a); 
leds[p4+5] = CHSV(hue0a, 255, val1a); 
leds[p4+6] = CHSV(hue0a, 255, val1a); 
leds[p4+7] = CHSV(hue0a, 255, val1a); 

//bottom left
leds[p4+27] = CHSV(hue0, 255, val2);
leds[p4+32] = CHSV(hue0, 255, val2); 
leds[p4+28] = CHSV(hue0, 255, val2); 
leds[p4+31] = CHSV(hue0, 255, val2); 

leds[p4+3] = CHSV(hue0a, 255, val2a); 
leds[p4+26] = CHSV(hue0a, 255, val2a);
leds[p4+33] = CHSV(hue0a, 255, val2a); 
leds[p4+56] = CHSV(hue0a, 255, val2a); 
leds[p4+57] = CHSV(hue0a, 255, val2a); 
leds[p4+58] = CHSV(hue0a, 255, val2a); 
leds[p4+59] = CHSV(hue0a, 255, val2a); 
leds[p4+30] = CHSV(hue0a, 255, val2a); 
leds[p4+29] = CHSV(hue0a, 255, val2a); 
leds[p4+0] = CHSV(hue0a, 255, val2a); 
leds[p4+1] = CHSV(hue0a, 255, val2a); 
leds[p4+2] = CHSV(hue0a, 255, val2a); 


//top right
leds[p4+107] = CHSV(hue0, 255, val3);
leds[p4+132] = CHSV(hue0, 255, val3); 
leds[p4+108] = CHSV(hue0, 255, val3); 
leds[p4+131] = CHSV(hue0, 255, val3); 

leds[p4+103] = CHSV(hue0a, 255, val3a); 
leds[p4+106] = CHSV(hue0a, 255, val3a);
leds[p4+133] = CHSV(hue0a, 255, val3a); 
leds[p4+136] = CHSV(hue0a, 255, val3a); 
leds[p4+137] = CHSV(hue0a, 255, val3a);
leds[p4+138] = CHSV(hue0a, 255, val3a);  
leds[p4+139] = CHSV(hue0a, 255, val3a); 
leds[p4+130] = CHSV(hue0a, 255, val3a); 
leds[p4+109] = CHSV(hue0a, 255, val3a); 
leds[p4+100] = CHSV(hue0a, 255, val3a); 
leds[p4+101] = CHSV(hue0a, 255, val3a); 
leds[p4+102] = CHSV(hue0a, 255, val3a); 


//mid right
leds[p4+112] = CHSV(hue0, 255, val4);
leds[p4+127] = CHSV(hue0, 255, val4); 
leds[p4+113] = CHSV(hue0, 255, val4); 
leds[p4+126] = CHSV(hue0, 255, val4); 

leds[p4+98] = CHSV(hue0a, 255, val4a); 
leds[p4+111] = CHSV(hue0a, 255, val4a);
leds[p4+128] = CHSV(hue0a, 255, val4a); 
leds[p4+141] = CHSV(hue0a, 255, val4a); 
leds[p4+142] = CHSV(hue0a, 255, val4a); 
leds[p4+143] = CHSV(hue0a, 255, val4a); 
leds[p4+144] = CHSV(hue0a, 255, val4a); 
leds[p4+125] = CHSV(hue0a, 255, val4a); 
leds[p4+114] = CHSV(hue0a, 255, val4a); 
leds[p4+95] = CHSV(hue0a, 255, val4a); 
leds[p4+96] = CHSV(hue0a, 255, val4a); 
leds[p4+97] = CHSV(hue0a, 255, val4a); 

//bottom right
leds[p4+117] = CHSV(hue0, 255, val5);
leds[p4+122] = CHSV(hue0, 255, val5); 
leds[p4+118] = CHSV(hue0, 255, val5); 
leds[p4+121] = CHSV(hue0, 255, val5); 

leds[p4+93] = CHSV(hue0a, 255, val5a); 
leds[p4+116] = CHSV(hue0a, 255, val5a);
leds[p4+123] = CHSV(hue0a, 255, val5a); 
leds[p4+146] = CHSV(hue0a, 255, val5a); 
leds[p4+147] = CHSV(hue0a, 255, val5a); 
leds[p4+148] = CHSV(hue0a, 255, val5a); 
leds[p4+149] = CHSV(hue0a, 255, val5a); 
leds[p4+120] = CHSV(hue0a, 255, val5a); 
leds[p4+119] = CHSV(hue0a, 255, val5a); 
leds[p4+90] = CHSV(hue0a, 255, val5a); 
leds[p4+91] = CHSV(hue0a, 255, val5a); 
leds[p4+92] = CHSV(hue0a, 255, val5a); 
/////////////////////////////////////////////////////////////////////////////////PANEL 5
///top left
leds[p5+17] = CHSV(hue0, 255, val0);
leds[p5+18] = CHSV(hue0, 255, val0); 
leds[p5+42] = CHSV(hue0, 255, val0); 
leds[p5+41] = CHSV(hue0, 255, val0); 

leds[p5+13] = CHSV(hue0a, 255, val0a); 
leds[p5+16] = CHSV(hue0a, 255, val0a);
leds[p5+43] = CHSV(hue0a, 255, val0a); 
leds[p5+46] = CHSV(hue0a, 255, val0a); 
leds[p5+47] = CHSV(hue0a, 255, val0a); 
leds[p5+48] = CHSV(hue0a, 255, val0a); 
leds[p5+49] = CHSV(hue0a, 255, val0a); 
leds[p5+40] = CHSV(hue0a, 255, val0a); 
leds[p5+19] = CHSV(hue0a, 255, val0a); 
leds[p5+10] = CHSV(hue0a, 255, val0a); 
leds[p5+11] = CHSV(hue0a, 255, val0a); 
leds[p5+12] = CHSV(hue0a, 255, val0a); 

//mid left
leds[p5+22] = CHSV(hue0, 255, val1);
leds[p5+37] = CHSV(hue0, 255, val1); 
leds[p5+23] = CHSV(hue0, 255, val1); 
leds[p5+36] = CHSV(hue0, 255, val1); 

leds[p5+8] = CHSV(hue0a, 255, val1a); 
leds[p5+21] = CHSV(hue0a, 255, val1a);
leds[p5+38] = CHSV(hue0a, 255, val1a); 
leds[p5+51] = CHSV(hue0a, 255, val1a); 
leds[p5+52] = CHSV(hue0a, 255, val1a); 
leds[p5+53] = CHSV(hue0a, 255, val1a); 
leds[p5+54] = CHSV(hue0a, 255, val1a); 
leds[p5+35] = CHSV(hue0a, 255, val1a); 
leds[p5+24] = CHSV(hue0a, 255, val1a); 
leds[p5+5] = CHSV(hue0a, 255, val1a); 
leds[p5+6] = CHSV(hue0a, 255, val1a); 
leds[p5+7] = CHSV(hue0a, 255, val1a); 

//bottom left
leds[p5+27] = CHSV(hue0, 255, val2);
leds[p5+32] = CHSV(hue0, 255, val2); 
leds[p5+28] = CHSV(hue0, 255, val2); 
leds[p5+31] = CHSV(hue0, 255, val2); 

leds[p5+3] = CHSV(hue0a, 255, val2a); 
leds[p5+26] = CHSV(hue0a, 255, val2a);
leds[p5+33] = CHSV(hue0a, 255, val2a); 
leds[p5+56] = CHSV(hue0a, 255, val2a); 
leds[p5+57] = CHSV(hue0a, 255, val2a); 
leds[p5+58] = CHSV(hue0a, 255, val2a); 
leds[p5+59] = CHSV(hue0a, 255, val2a); 
leds[p5+30] = CHSV(hue0a, 255, val2a); 
leds[p5+29] = CHSV(hue0a, 255, val2a); 
leds[p5+0] = CHSV(hue0a, 255, val2a); 
leds[p5+1] = CHSV(hue0a, 255, val2a); 
leds[p5+2] = CHSV(hue0a, 255, val2a); 


//top right
leds[p5+107] = CHSV(hue0, 255, val3);
leds[p5+132] = CHSV(hue0, 255, val3); 
leds[p5+108] = CHSV(hue0, 255, val3); 
leds[p5+131] = CHSV(hue0, 255, val3); 

leds[p5+103] = CHSV(hue0a, 255, val3a); 
leds[p5+106] = CHSV(hue0a, 255, val3a);
leds[p5+133] = CHSV(hue0a, 255, val3a); 
leds[p5+136] = CHSV(hue0a, 255, val3a); 
leds[p5+137] = CHSV(hue0a, 255, val3a);
leds[p5+138] = CHSV(hue0a, 255, val3a);  
leds[p5+139] = CHSV(hue0a, 255, val3a); 
leds[p5+130] = CHSV(hue0a, 255, val3a); 
leds[p5+109] = CHSV(hue0a, 255, val3a); 
leds[p5+100] = CHSV(hue0a, 255, val3a); 
leds[p5+101] = CHSV(hue0a, 255, val3a); 
leds[p5+102] = CHSV(hue0a, 255, val3a); 


//mid right
leds[p5+112] = CHSV(hue0, 255, val4);
leds[p5+127] = CHSV(hue0, 255, val4); 
leds[p5+113] = CHSV(hue0, 255, val4); 
leds[p5+126] = CHSV(hue0, 255, val4); 

leds[p5+98] = CHSV(hue0a, 255, val4a); 
leds[p5+111] = CHSV(hue0a, 255, val4a);
leds[p5+128] = CHSV(hue0a, 255, val4a); 
leds[p5+141] = CHSV(hue0a, 255, val4a); 
leds[p5+142] = CHSV(hue0a, 255, val4a); 
leds[p5+143] = CHSV(hue0a, 255, val4a); 
leds[p5+144] = CHSV(hue0a, 255, val4a); 
leds[p5+125] = CHSV(hue0a, 255, val4a); 
leds[p5+114] = CHSV(hue0a, 255, val4a); 
leds[p5+95] = CHSV(hue0a, 255, val4a); 
leds[p5+96] = CHSV(hue0a, 255, val4a); 
leds[p5+97] = CHSV(hue0a, 255, val4a); 

//bottom right
leds[p5+117] = CHSV(hue0, 255, val5);
leds[p5+122] = CHSV(hue0, 255, val5); 
leds[p5+118] = CHSV(hue0, 255, val5); 
leds[p5+121] = CHSV(hue0, 255, val5); 

leds[p5+93] = CHSV(hue0a, 255, val5a); 
leds[p5+116] = CHSV(hue0a, 255, val5a);
leds[p5+123] = CHSV(hue0a, 255, val5a); 
leds[p5+146] = CHSV(hue0a, 255, val5a); 
leds[p5+147] = CHSV(hue0a, 255, val5a); 
leds[p5+148] = CHSV(hue0a, 255, val5a); 
leds[p5+149] = CHSV(hue0a, 255, val5a); 
leds[p5+120] = CHSV(hue0a, 255, val5a); 
leds[p5+119] = CHSV(hue0a, 255, val5a); 
leds[p5+90] = CHSV(hue0a, 255, val5a); 
leds[p5+91] = CHSV(hue0a, 255, val5a); 
leds[p5+92] = CHSV(hue0a, 255, val5a); 
  
/////////////////////////////////////////////////////////////////////////////////PANEL 6
///top left
leds[p6+17] = CHSV(hue0, 255, val0);
leds[p6+18] = CHSV(hue0, 255, val0); 
leds[p6+42] = CHSV(hue0, 255, val0); 
leds[p6+41] = CHSV(hue0, 255, val0); 

leds[p6+13] = CHSV(hue0a, 255, val0a); 
leds[p6+16] = CHSV(hue0a, 255, val0a);
leds[p6+43] = CHSV(hue0a, 255, val0a); 
leds[p6+46] = CHSV(hue0a, 255, val0a); 
leds[p6+47] = CHSV(hue0a, 255, val0a); 
leds[p6+48] = CHSV(hue0a, 255, val0a); 
leds[p6+49] = CHSV(hue0a, 255, val0a); 
leds[p6+40] = CHSV(hue0a, 255, val0a); 
leds[p6+19] = CHSV(hue0a, 255, val0a); 
leds[p6+10] = CHSV(hue0a, 255, val0a); 
leds[p6+11] = CHSV(hue0a, 255, val0a); 
leds[p6+12] = CHSV(hue0a, 255, val0a); 

//mid left
leds[p6+22] = CHSV(hue0, 255, val1);
leds[p6+37] = CHSV(hue0, 255, val1); 
leds[p6+23] = CHSV(hue0, 255, val1); 
leds[p6+36] = CHSV(hue0, 255, val1); 

leds[p6+8] = CHSV(hue0a, 255, val1a); 
leds[p6+21] = CHSV(hue0a, 255, val1a);
leds[p6+38] = CHSV(hue0a, 255, val1a); 
leds[p6+51] = CHSV(hue0a, 255, val1a); 
leds[p6+52] = CHSV(hue0a, 255, val1a); 
leds[p6+53] = CHSV(hue0a, 255, val1a); 
leds[p6+54] = CHSV(hue0a, 255, val1a); 
leds[p6+35] = CHSV(hue0a, 255, val1a); 
leds[p6+24] = CHSV(hue0a, 255, val1a); 
leds[p6+5] = CHSV(hue0a, 255, val1a); 
leds[p6+6] = CHSV(hue0a, 255, val1a); 
leds[p6+7] = CHSV(hue0a, 255, val1a); 

//bottom left
leds[p6+27] = CHSV(hue0, 255, val2);
leds[p6+32] = CHSV(hue0, 255, val2); 
leds[p6+28] = CHSV(hue0, 255, val2); 
leds[p6+31] = CHSV(hue0, 255, val2); 

leds[p6+3] = CHSV(hue0a, 255, val2a); 
leds[p6+26] = CHSV(hue0a, 255, val2a);
leds[p6+33] = CHSV(hue0a, 255, val2a); 
leds[p6+56] = CHSV(hue0a, 255, val2a); 
leds[p6+57] = CHSV(hue0a, 255, val2a); 
leds[p6+58] = CHSV(hue0a, 255, val2a); 
leds[p6+59] = CHSV(hue0a, 255, val2a); 
leds[p6+30] = CHSV(hue0a, 255, val2a); 
leds[p6+29] = CHSV(hue0a, 255, val2a); 
leds[p6+0] = CHSV(hue0a, 255, val2a); 
leds[p6+1] = CHSV(hue0a, 255, val2a); 
leds[p6+2] = CHSV(hue0a, 255, val2a); 


//top right
leds[p6+107] = CHSV(hue0, 255, val3);
leds[p6+132] = CHSV(hue0, 255, val3); 
leds[p6+108] = CHSV(hue0, 255, val3); 
leds[p6+131] = CHSV(hue0, 255, val3); 

leds[p6+103] = CHSV(hue0a, 255, val3a); 
leds[p6+106] = CHSV(hue0a, 255, val3a);
leds[p6+133] = CHSV(hue0a, 255, val3a); 
leds[p6+136] = CHSV(hue0a, 255, val3a); 
leds[p6+137] = CHSV(hue0a, 255, val3a); 
leds[p6+138] = CHSV(hue0a, 255, val3a); 
leds[p6+139] = CHSV(hue0a, 255, val3a); 
leds[p6+130] = CHSV(hue0a, 255, val3a); 
leds[p6+109] = CHSV(hue0a, 255, val3a); 
leds[p6+100] = CHSV(hue0a, 255, val3a); 
leds[p6+101] = CHSV(hue0a, 255, val3a); 
leds[p6+102] = CHSV(hue0a, 255, val3a); 


//mid right
leds[p6+112] = CHSV(hue0, 255, val4);
leds[p6+127] = CHSV(hue0, 255, val4); 
leds[p6+113] = CHSV(hue0, 255, val4); 
leds[p6+126] = CHSV(hue0, 255, val4); 

leds[p6+98] = CHSV(hue0a, 255, val4a); 
leds[p6+111] = CHSV(hue0a, 255, val4a);
leds[p6+128] = CHSV(hue0a, 255, val4a); 
leds[p6+141] = CHSV(hue0a, 255, val4a); 
leds[p6+142] = CHSV(hue0a, 255, val4a); 
leds[p6+143] = CHSV(hue0a, 255, val4a); 
leds[p6+144] = CHSV(hue0a, 255, val4a); 
leds[p6+125] = CHSV(hue0a, 255, val4a); 
leds[p6+114] = CHSV(hue0a, 255, val4a); 
leds[p6+95] = CHSV(hue0a, 255, val4a); 
leds[p6+96] = CHSV(hue0a, 255, val4a); 
leds[p6+97] = CHSV(hue0a, 255, val4a); 

//bottom right
leds[p6+117] = CHSV(hue0, 255, val5);
leds[p6+122] = CHSV(hue0, 255, val5); 
leds[p6+118] = CHSV(hue0, 255, val5); 
leds[p6+121] = CHSV(hue0, 255, val5); 

leds[p6+93] = CHSV(hue0a, 255, val5a); 
leds[p6+116] = CHSV(hue0a, 255, val5a);
leds[p6+123] = CHSV(hue0a, 255, val5a); 
leds[p6+146] = CHSV(hue0a, 255, val5a); 
leds[p6+147] = CHSV(hue0a, 255, val5a); 
leds[p6+148] = CHSV(hue0a, 255, val5a); 
leds[p6+149] = CHSV(hue0a, 255, val5a); 
leds[p6+120] = CHSV(hue0a, 255, val5a); 
leds[p6+119] = CHSV(hue0a, 255, val5a); 
leds[p6+90] = CHSV(hue0a, 255, val5a); 
leds[p6+91] = CHSV(hue0a, 255, val5a); 
leds[p6+92] = CHSV(hue0a, 255, val5a); 

/////////////////////////////////////////////////////////////////////////////////PANEL 7
///top left
leds[p7+17] = CHSV(hue0, 255, val0);
leds[p7+18] = CHSV(hue0, 255, val0); 
leds[p7+42] = CHSV(hue0, 255, val0); 
leds[p7+41] = CHSV(hue0, 255, val0); 

leds[p7+13] = CHSV(hue0a, 255, val0a); 
leds[p7+16] = CHSV(hue0a, 255, val0a);
leds[p7+43] = CHSV(hue0a, 255, val0a); 
leds[p7+46] = CHSV(hue0a, 255, val0a); 
leds[p7+47] = CHSV(hue0a, 255, val0a); 
leds[p7+48] = CHSV(hue0a, 255, val0a); 
leds[p7+49] = CHSV(hue0a, 255, val0a); 
leds[p7+40] = CHSV(hue0a, 255, val0a); 
leds[p7+19] = CHSV(hue0a, 255, val0a); 
leds[p7+10] = CHSV(hue0a, 255, val0a); 
leds[p7+11] = CHSV(hue0a, 255, val0a); 
leds[p7+12] = CHSV(hue0a, 255, val0a); 

//mid left
leds[p7+22] = CHSV(hue0, 255, val1);
leds[p7+37] = CHSV(hue0, 255, val1); 
leds[p7+23] = CHSV(hue0, 255, val1); 
leds[p7+36] = CHSV(hue0, 255, val1); 

leds[p7+8] = CHSV(hue0a, 255, val1a); 
leds[p7+21] = CHSV(hue0a, 255, val1a);
leds[p7+38] = CHSV(hue0a, 255, val1a); 
leds[p7+51] = CHSV(hue0a, 255, val1a); 
leds[p7+52] = CHSV(hue0a, 255, val1a); 
leds[p7+53] = CHSV(hue0a, 255, val1a); 
leds[p7+54] = CHSV(hue0a, 255, val1a); 
leds[p7+35] = CHSV(hue0a, 255, val1a); 
leds[p7+24] = CHSV(hue0a, 255, val1a); 
leds[p7+5] = CHSV(hue0a, 255, val1a); 
leds[p7+6] = CHSV(hue0a, 255, val1a); 
leds[p7+7] = CHSV(hue0a, 255, val1a); 

//bottom left
leds[p7+27] = CHSV(hue0, 255, val2);
leds[p7+32] = CHSV(hue0, 255, val2); 
leds[p7+28] = CHSV(hue0, 255, val2); 
leds[p7+31] = CHSV(hue0, 255, val2); 

leds[p7+3] = CHSV(hue0a, 255, val2a); 
leds[p7+26] = CHSV(hue0a, 255, val2a);
leds[p7+33] = CHSV(hue0a, 255, val2a); 
leds[p7+56] = CHSV(hue0a, 255, val2a); 
leds[p7+57] = CHSV(hue0a, 255, val2a); 
leds[p7+58] = CHSV(hue0a, 255, val2a); 
leds[p7+59] = CHSV(hue0a, 255, val2a); 
leds[p7+30] = CHSV(hue0a, 255, val2a); 
leds[p7+29] = CHSV(hue0a, 255, val2a); 
leds[p7+0] = CHSV(hue0a, 255, val2a); 
leds[p7+1] = CHSV(hue0a, 255, val2a); 
leds[p7+2] = CHSV(hue0a, 255, val2a); 


//top right
leds[p7+107] = CHSV(hue0, 255, val3);
leds[p7+132] = CHSV(hue0, 255, val3); 
leds[p7+108] = CHSV(hue0, 255, val3); 
leds[p7+131] = CHSV(hue0, 255, val3); 

leds[p7+103] = CHSV(hue0a, 255, val3a); 
leds[p7+106] = CHSV(hue0a, 255, val3a);
leds[p7+133] = CHSV(hue0a, 255, val3a); 
leds[p7+136] = CHSV(hue0a, 255, val3a); 
leds[p7+137] = CHSV(hue0a, 255, val3a);
leds[p7+138] = CHSV(hue0a, 255, val3a);  
leds[p7+139] = CHSV(hue0a, 255, val3a); 
leds[p7+130] = CHSV(hue0a, 255, val3a); 
leds[p7+109] = CHSV(hue0a, 255, val3a); 
leds[p7+100] = CHSV(hue0a, 255, val3a); 
leds[p7+101] = CHSV(hue0a, 255, val3a); 
leds[p7+102] = CHSV(hue0a, 255, val3a); 


//mid right
leds[p7+112] = CHSV(hue0, 255, val4);
leds[p7+127] = CHSV(hue0, 255, val4); 
leds[p7+113] = CHSV(hue0, 255, val4); 
leds[p7+126] = CHSV(hue0, 255, val4); 

leds[p7+98] = CHSV(hue0a, 255, val4a); 
leds[p7+111] = CHSV(hue0a, 255, val4a);
leds[p7+128] = CHSV(hue0a, 255, val4a); 
leds[p7+141] = CHSV(hue0a, 255, val4a); 
leds[p7+142] = CHSV(hue0a, 255, val4a); 
leds[p7+143] = CHSV(hue0a, 255, val4a); 
leds[p7+144] = CHSV(hue0a, 255, val4a); 
leds[p7+125] = CHSV(hue0a, 255, val4a); 
leds[p7+114] = CHSV(hue0a, 255, val4a); 
leds[p7+95] = CHSV(hue0a, 255, val4a); 
leds[p7+96] = CHSV(hue0a, 255, val4a); 
leds[p7+97] = CHSV(hue0a, 255, val4a); 

//bottom right
leds[p7+117] = CHSV(hue0, 255, val5);
leds[p7+122] = CHSV(hue0, 255, val5); 
leds[p7+118] = CHSV(hue0, 255, val5); 
leds[p7+121] = CHSV(hue0, 255, val5); 

leds[p7+93] = CHSV(hue0a, 255, val5a); 
leds[p7+116] = CHSV(hue0a, 255, val5a);
leds[p7+123] = CHSV(hue0a, 255, val5a); 
leds[p7+146] = CHSV(hue0a, 255, val5a); 
leds[p7+147] = CHSV(hue0a, 255, val5a); 
leds[p7+148] = CHSV(hue0a, 255, val5a); 
leds[p7+149] = CHSV(hue0a, 255, val5a); 
leds[p7+120] = CHSV(hue0a, 255, val5a); 
leds[p7+119] = CHSV(hue0a, 255, val5a); 
leds[p7+90] = CHSV(hue0a, 255, val5a); 
leds[p7+91] = CHSV(hue0a, 255, val5a); 
leds[p7+92] = CHSV(hue0a, 255, val5a); 

/////////////////////////////////////////////////////////////////////////////////PANEL 8
///top left
leds[p8+17] = CHSV(hue0, 255, val0);
leds[p8+18] = CHSV(hue0, 255, val0); 
leds[p8+42] = CHSV(hue0, 255, val0); 
leds[p8+41] = CHSV(hue0, 255, val0); 

leds[p8+13] = CHSV(hue0a, 255, val0a); 
leds[p8+16] = CHSV(hue0a, 255, val0a);
leds[p8+43] = CHSV(hue0a, 255, val0a); 
leds[p8+46] = CHSV(hue0a, 255, val0a); 
leds[p8+47] = CHSV(hue0a, 255, val0a); 
leds[p8+48] = CHSV(hue0a, 255, val0a); 
leds[p8+49] = CHSV(hue0a, 255, val0a); 
leds[p8+40] = CHSV(hue0a, 255, val0a); 
leds[p8+19] = CHSV(hue0a, 255, val0a); 
leds[p8+10] = CHSV(hue0a, 255, val0a); 
leds[p8+11] = CHSV(hue0a, 255, val0a); 
leds[p8+12] = CHSV(hue0a, 255, val0a); 

//mid left
leds[p8+22] = CHSV(hue0, 255, val1);
leds[p8+37] = CHSV(hue0, 255, val1); 
leds[p8+23] = CHSV(hue0, 255, val1); 
leds[p8+36] = CHSV(hue0, 255, val1); 

leds[p8+8] = CHSV(hue0a, 255, val1a); 
leds[p8+21] = CHSV(hue0a, 255, val1a);
leds[p8+38] = CHSV(hue0a, 255, val1a); 
leds[p8+51] = CHSV(hue0a, 255, val1a); 
leds[p8+52] = CHSV(hue0a, 255, val1a); 
leds[p8+53] = CHSV(hue0a, 255, val1a); 
leds[p8+54] = CHSV(hue0a, 255, val1a); 
leds[p8+35] = CHSV(hue0a, 255, val1a); 
leds[p8+24] = CHSV(hue0a, 255, val1a); 
leds[p8+5] = CHSV(hue0a, 255, val1a); 
leds[p8+6] = CHSV(hue0a, 255, val1a); 
leds[p8+7] = CHSV(hue0a, 255, val1a); 

//bottom left
leds[p8+27] = CHSV(hue0, 255, val2);
leds[p8+32] = CHSV(hue0, 255, val2); 
leds[p8+28] = CHSV(hue0, 255, val2); 
leds[p8+31] = CHSV(hue0, 255, val2); 

leds[p8+3] = CHSV(hue0a, 255, val2a); 
leds[p8+26] = CHSV(hue0a, 255, val2a);
leds[p8+33] = CHSV(hue0a, 255, val2a); 
leds[p8+56] = CHSV(hue0a, 255, val2a); 
leds[p8+57] = CHSV(hue0a, 255, val2a); 
leds[p8+58] = CHSV(hue0a, 255, val2a); 
leds[p8+59] = CHSV(hue0a, 255, val2a); 
leds[p8+30] = CHSV(hue0a, 255, val2a); 
leds[p8+29] = CHSV(hue0a, 255, val2a); 
leds[p8+0] = CHSV(hue0a, 255, val2a); 
leds[p8+1] = CHSV(hue0a, 255, val2a); 
leds[p8+2] = CHSV(hue0a, 255, val2a); 


//top right
leds[p8+107] = CHSV(hue0, 255, val3);
leds[p8+132] = CHSV(hue0, 255, val3); 
leds[p8+108] = CHSV(hue0, 255, val3); 
leds[p8+131] = CHSV(hue0, 255, val3); 

leds[p8+103] = CHSV(hue0a, 255, val3a); 
leds[p8+106] = CHSV(hue0a, 255, val3a);
leds[p8+133] = CHSV(hue0a, 255, val3a); 
leds[p8+136] = CHSV(hue0a, 255, val3a); 
leds[p8+137] = CHSV(hue0a, 255, val3a);
leds[p8+138] = CHSV(hue0a, 255, val3a);  
leds[p8+139] = CHSV(hue0a, 255, val3a); 
leds[p8+130] = CHSV(hue0a, 255, val3a); 
leds[p8+109] = CHSV(hue0a, 255, val3a); 
leds[p8+100] = CHSV(hue0a, 255, val3a); 
leds[p8+101] = CHSV(hue0a, 255, val3a); 
leds[p8+102] = CHSV(hue0a, 255, val3a); 


//mid right
leds[p8+112] = CHSV(hue0, 255, val4);
leds[p8+127] = CHSV(hue0, 255, val4); 
leds[p8+113] = CHSV(hue0, 255, val4); 
leds[p8+126] = CHSV(hue0, 255, val4); 

leds[p8+98] = CHSV(hue0a, 255, val4a); 
leds[p8+111] = CHSV(hue0a, 255, val4a);
leds[p8+128] = CHSV(hue0a, 255, val4a); 
leds[p8+141] = CHSV(hue0a, 255, val4a); 
leds[p8+142] = CHSV(hue0a, 255, val4a); 
leds[p8+143] = CHSV(hue0a, 255, val4a); 
leds[p8+144] = CHSV(hue0a, 255, val4a); 
leds[p8+125] = CHSV(hue0a, 255, val4a); 
leds[p8+114] = CHSV(hue0a, 255, val4a); 
leds[p8+95] = CHSV(hue0a, 255, val4a); 
leds[p8+96] = CHSV(hue0a, 255, val4a); 
leds[p8+97] = CHSV(hue0a, 255, val4a); 

//bottom right
leds[p8+117] = CHSV(hue0, 255, val5);
leds[p8+122] = CHSV(hue0, 255, val5); 
leds[p8+118] = CHSV(hue0, 255, val5); 
leds[p8+121] = CHSV(hue0, 255, val5); 

leds[p8+93] = CHSV(hue0a, 255, val5a); 
leds[p8+116] = CHSV(hue0a, 255, val5a);
leds[p8+123] = CHSV(hue0a, 255, val5a); 
leds[p8+146] = CHSV(hue0a, 255, val5a); 
leds[p8+147] = CHSV(hue0a, 255, val5a); 
leds[p8+148] = CHSV(hue0a, 255, val5a); 
leds[p8+149] = CHSV(hue0a, 255, val5a); 
leds[p8+120] = CHSV(hue0a, 255, val5a); 
leds[p8+119] = CHSV(hue0a, 255, val5a); 
leds[p8+90] = CHSV(hue0a, 255, val5a); 
leds[p8+91] = CHSV(hue0a, 255, val5a); 
leds[p8+92] = CHSV(hue0a, 255, val5a); 

/////////////////////////////////////////////////////////////////////////////////PANEL 9
///top left
leds[p9+17] = CHSV(hue0, 255, val0);
leds[p9+18] = CHSV(hue0, 255, val0); 
leds[p9+42] = CHSV(hue0, 255, val0); 
leds[p9+41] = CHSV(hue0, 255, val0); 

leds[p9+13] = CHSV(hue0a, 255, val0a); 
leds[p9+16] = CHSV(hue0a, 255, val0a);
leds[p9+43] = CHSV(hue0a, 255, val0a); 
leds[p9+46] = CHSV(hue0a, 255, val0a); 
leds[p9+47] = CHSV(hue0a, 255, val0a); 
leds[p9+48] = CHSV(hue0a, 255, val0a); 
leds[p9+49] = CHSV(hue0a, 255, val0a); 
leds[p9+40] = CHSV(hue0a, 255, val0a); 
leds[p9+19] = CHSV(hue0a, 255, val0a); 
leds[p9+10] = CHSV(hue0a, 255, val0a); 
leds[p9+11] = CHSV(hue0a, 255, val0a); 
leds[p9+12] = CHSV(hue0a, 255, val0a); 

//mid left
leds[p9+22] = CHSV(hue0, 255, val1);
leds[p9+37] = CHSV(hue0, 255, val1); 
leds[p9+23] = CHSV(hue0, 255, val1); 
leds[p9+36] = CHSV(hue0, 255, val1); 

leds[p9+8] = CHSV(hue0a, 255, val1a); 
leds[p9+21] = CHSV(hue0a, 255, val1a);
leds[p9+38] = CHSV(hue0a, 255, val1a); 
leds[p9+51] = CHSV(hue0a, 255, val1a); 
leds[p9+52] = CHSV(hue0a, 255, val1a); 
leds[p9+53] = CHSV(hue0a, 255, val1a); 
leds[p9+54] = CHSV(hue0a, 255, val1a); 
leds[p9+35] = CHSV(hue0a, 255, val1a); 
leds[p9+24] = CHSV(hue0a, 255, val1a); 
leds[p9+5] = CHSV(hue0a, 255, val1a); 
leds[p9+6] = CHSV(hue0a, 255, val1a); 
leds[p9+7] = CHSV(hue0a, 255, val1a); 

//bottom left
leds[p9+27] = CHSV(hue0, 255, val2);
leds[p9+32] = CHSV(hue0, 255, val2); 
leds[p9+28] = CHSV(hue0, 255, val2); 
leds[p9+31] = CHSV(hue0, 255, val2); 

leds[p9+3] = CHSV(hue0a, 255, val2a); 
leds[p9+26] = CHSV(hue0a, 255, val2a);
leds[p9+33] = CHSV(hue0a, 255, val2a); 
leds[p9+56] = CHSV(hue0a, 255, val2a); 
leds[p9+57] = CHSV(hue0a, 255, val2a); 
leds[p9+58] = CHSV(hue0a, 255, val2a); 
leds[p9+59] = CHSV(hue0a, 255, val2a); 
leds[p9+30] = CHSV(hue0a, 255, val2a); 
leds[p9+29] = CHSV(hue0a, 255, val2a); 
leds[p9+0] = CHSV(hue0a, 255, val2a); 
leds[p9+1] = CHSV(hue0a, 255, val2a); 
leds[p9+2] = CHSV(hue0a, 255, val2a); 


//top right
leds[p9+107] = CHSV(hue0, 255, val3);
leds[p9+132] = CHSV(hue0, 255, val3); 
leds[p9+108] = CHSV(hue0, 255, val3); 
leds[p9+131] = CHSV(hue0, 255, val3); 

leds[p9+103] = CHSV(hue0a, 255, val3a); 
leds[p9+106] = CHSV(hue0a, 255, val3a);
leds[p9+133] = CHSV(hue0a, 255, val3a); 
leds[p9+136] = CHSV(hue0a, 255, val3a); 
leds[p9+137] = CHSV(hue0a, 255, val3a);
leds[p9+138] = CHSV(hue0a, 255, val3a);  
leds[p9+139] = CHSV(hue0a, 255, val3a); 
leds[p9+130] = CHSV(hue0a, 255, val3a); 
leds[p9+109] = CHSV(hue0a, 255, val3a); 
leds[p9+100] = CHSV(hue0a, 255, val3a); 
leds[p9+101] = CHSV(hue0a, 255, val3a); 
leds[p9+102] = CHSV(hue0a, 255, val3a); 


//mid right
leds[p9+112] = CHSV(hue0, 255, val4);
leds[p9+127] = CHSV(hue0, 255, val4); 
leds[p9+113] = CHSV(hue0, 255, val4); 
leds[p9+126] = CHSV(hue0, 255, val4); 

leds[p9+98] = CHSV(hue0a, 255, val4a); 
leds[p9+111] = CHSV(hue0a, 255, val4a);
leds[p9+128] = CHSV(hue0a, 255, val4a); 
leds[p9+141] = CHSV(hue0a, 255, val4a); 
leds[p9+142] = CHSV(hue0a, 255, val4a); 
leds[p9+143] = CHSV(hue0a, 255, val4a); 
leds[p9+144] = CHSV(hue0a, 255, val4a); 
leds[p9+125] = CHSV(hue0a, 255, val4a); 
leds[p9+114] = CHSV(hue0a, 255, val4a); 
leds[p9+95] = CHSV(hue0a, 255, val4a); 
leds[p9+96] = CHSV(hue0a, 255, val4a); 
leds[p9+97] = CHSV(hue0a, 255, val4a); 

//bottom right
leds[p9+117] = CHSV(hue0, 255, val5);
leds[p9+122] = CHSV(hue0, 255, val5); 
leds[p9+118] = CHSV(hue0, 255, val5); 
leds[p9+121] = CHSV(hue0, 255, val5); 

leds[p9+93] = CHSV(hue0a, 255, val5a); 
leds[p9+116] = CHSV(hue0a, 255, val5a);
leds[p9+123] = CHSV(hue0a, 255, val5a); 
leds[p9+146] = CHSV(hue0a, 255, val5a); 
leds[p9+147] = CHSV(hue0a, 255, val5a); 
leds[p9+148] = CHSV(hue0a, 255, val5a); 
leds[p9+149] = CHSV(hue0a, 255, val5a); 
leds[p9+120] = CHSV(hue0a, 255, val5a); 
leds[p9+119] = CHSV(hue0a, 255, val5a); 
leds[p9+90] = CHSV(hue0a, 255, val5a); 
leds[p9+91] = CHSV(hue0a, 255, val5a); 
leds[p9+92] = CHSV(hue0a, 255, val5a); 

    if (timer_0 > 50) {
if (phrase == 0) {val0 = val0 + brightadder;  if (val0 >= 234) {phrase = 1;} }
if (phrase == 1) {val0a = val0a + brightadder; if (val0a >= 234) {phrase = 2;} }
if (phrase == 2) {val0 = val0 - brightadder; val0a = val0a - brightadder;   if (val0 <= 13) {phrase = 0; val0 = 0; val0a = 0;} } 


if (phrase1 == 0) {val1 = val1 + brightadder;  if (val1 >= 234) {phrase1 = 1;} }
if (phrase1 == 1) {val1a = val1a + brightadder; if (val1a >= 234) {phrase1 = 2;} }
if (phrase1 == 2) {val1 = val1 - brightadder; val1a = val1a - brightadder;   if (val1 <= 13) {phrase1 = 0; val1 = 0; val1a = 0;} } 


if (phrase2 == 0) {val2 = val2 + brightadder;  if (val2 >= 234) {phrase2 = 1;} }
if (phrase2 == 1) {val2a = val2a + brightadder; if (val2a >= 234) {phrase2 = 2;} }
if (phrase2 == 2) {val2 = val2 - brightadder; val2a = val2a - brightadder;   if (val2 <= 13) {phrase2 = 0; val2 = 0; val2a = 0;} } 


if (phrase3 == 0) {val3 = val3 + brightadder;  if (val3 >= 234) {phrase3 = 1;} }
if (phrase3 == 1) {val3a = val3a + brightadder; if (val3a >= 234) {phrase3 = 2;} }
if (phrase3 == 2) {val3 = val3 - brightadder; val3a = val3a - brightadder;   if (val3 <= 13) {phrase3 = 0; val3 = 0; val3a = 0;} } 

if (phrase4 == 0) {val4 = val4 + brightadder;  if (val4 >= 234) {phrase4 = 1;} }
if (phrase4 == 1) {val4a = val4a + brightadder; if (val4a >= 234) {phrase4 = 2;} }
if (phrase4 == 2) {val4 = val4 - brightadder; val4a = val4a - brightadder;   if (val4 <= 13) {phrase4 = 0; val4 = 0; val4a = 0;} } 


if (phrase5 == 0) {val5 = val5 + brightadder;  if (val5 >= 234) {phrase5 = 1;} }
if (phrase5 == 1) {val5a = val5a + brightadder; if (val5a >= 234) {phrase5 = 2;} }
if (phrase5 == 2) {val5 = val5 - brightadder; val5a = val5a - brightadder;   if (val5 <= 13) {phrase5 = 0; val5 = 0; val5a = 0;} } 



timer_0 = 0;}






/*
if (resetter == 1) {
  
 phrase = 0;
 phrase1 = 0;
 phrase2 = 0;
 phrase3 = 0;
 phrase4 = 0;

 phrase5 = 0;
 phrase6 = 0;
 phrase7 = 0;
 phrase8 = 0;
 phrase9 = 0;
 phrase10 = 0;
 phrase11 = 0;
 phrase12 = 0;
 phrase13 = 0;

if (mode == 0){

val0 = 230;
val1 = 190;
 val2 = 150;
 val3 = 110;
 val4 = 70;
 val5 = 35;
 val6 = 13;
 
 val7 = 13;
 val8 = 35;
 val9 = 70;
 val10 = 110;
 val11 = 150;
 val12 = 190;
 val13 = 230;
} 


if (mode != 0){

 val0 = 200;
 val1 = 150;
 val2 = 100;
 val3 = 50;
 val4 = 0;
 val5 = 0;
 val6 = 50;
 val7 = 100;
 val8 = 150;
 val9 = 200;
} 



  if (mode == 4) { hue = random (0,256); }
    if (mode == 3) { hue = random (0,256); }
    if (mode == 1) { hue = 0; }
    if (mode == 3) { hue = 0; }
  
  resetter = 0;}



if (timer_U >= 60000) {mode++; if (mode > 4) {mode = 0;} resetter++; timer_U = 0;}

if (mode == 0) {proud (); }
if (mode == 1) { Gs ();}
if (mode == 2) {george (); }
if (mode == 3) { linear_increments_of_i ();}
if (mode == 4) {city ();}
*/

FastLED.show();}
