

void proud (){
for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }

    if (timer_0 > 50) {
if (phrase == 0) {val0 = val0 + 10;  if (val0 >= 234) {phrase = 1;} }
if (phrase == 1) {val0 = val0 - 10;  if (val0 <= 13) {phrase = 0;} } 

if (phrase1 == 0) {val1 = val1 + 10;  if (val1 >= 234) {phrase1 = 1;} }
if (phrase1 == 1) {val1 = val1 - 10;  if (val1 <= 13) {phrase1 = 0;} } 

if (phrase2 == 0) {val2 = val2 + 10;  if (val2 >= 234) {phrase2 = 1;} }
if (phrase2 == 1) {val2 = val2 - 10;  if (val2 <= 13) {phrase2 = 0;} } 

if (phrase3 == 0) {val3 = val3 + 10;  if (val3 >= 234) {phrase3 = 1;} }
if (phrase3 == 1) {val3 = val3 - 10;  if (val3 <= 13) {phrase3 = 0;} } 

if (phrase4 == 0) {val4 = val4 + 10;  if (val4 >= 234) {phrase4 = 1;} }
if (phrase4 == 1) {val4 = val4 - 10;  if (val4 <= 13) {phrase4 = 0;} } 


if (phrase5 == 0) {val5 = val5 + 10;  if (val5 >= 234) {phrase5 = 1;} }
if (phrase5 == 1) {val5 = val5 - 10;  if (val5 <= 13) {phrase5 = 0;} } 

if (phrase6 == 0) {val6 = val6 + 10;  if (val6 >= 234) {phrase6 = 1;} }
if (phrase6 == 1) {val6 = val6 - 10;  if (val6 <= 13) {phrase6 = 0;} } 

if (phrase7 == 0) {val7 = val7 + 10;  if (val7 >= 234) {phrase7 = 1;} }
if (phrase7 == 1) {val7 = val7 - 10;  if (val7 <= 13) {phrase7 = 0;} } 

if (phrase8 == 0) {val8 = val8 + 10;  if (val8 >= 234) {phrase8 = 1;} }
if (phrase8 == 1) {val8 = val8 - 10;  if (val8 <= 13) {phrase8 = 0;} } 

if (phrase9 == 0) {val9 = val9 + 10;  if (val9 >= 234) {phrase9 = 1;} }
if (phrase9 == 1) {val9 = val9 - 10;  if (val9 <= 13) {phrase9 = 0;} } 

if (phrase10 == 0) {val10 = val10 + 10;  if (val10 >= 234) {phrase10 = 1;} }
if (phrase10 == 1) {val10 = val10 - 10;  if (val10 <= 13) {phrase10 = 0;} }

if (phrase11 == 0) {val11 = val11 + 10;  if (val11 >= 234) {phrase11 = 1;} }
if (phrase11 == 1) {val11 = val11 - 10;  if (val11 <= 13) {phrase11 = 0;} }

if (phrase12 == 0) {val12 = val12 + 10;  if (val12 >= 234) {phrase12 = 1;} }
if (phrase12 == 1) {val12 = val12 - 10;  if (val12 <= 13) {phrase12 = 0;} }

 if (phrase13 == 0) {val13 = val13 + 10;  if (val13 >= 234) {phrase13 = 1;} }
if (phrase13 == 1) {val13 = val13 - 10;  if (val13 <= 13) {phrase13 = 0;} }


timer_0 = 0;}
  
leds[12] = CHSV(0, 255, val0);
leds[11] = CHSV(0, 255, val0); 
leds[10] = CHSV(0, 255, val0); 
leds[9] = CHSV(0, 255, val0); 
leds[8] = CHSV(0, 255, val0); 
leds[7] = CHSV(0, 255, val0);

leds[17] = CHSV(0, 255, val0);
leds[18] = CHSV(0, 255, val0); 
leds[19] = CHSV(0, 255, val0); 
leds[20] = CHSV(0, 255, val0); 
leds[21] = CHSV(0, 255, val0); 
leds[22] = CHSV(0, 255, val0);


leds[12+30] = CHSV(0, 255, val0);
leds[11+30] = CHSV(0, 255, val0); 
leds[10+30] = CHSV(0, 255, val0); 
leds[9+30] = CHSV(0, 255, val0); 
leds[8+30] = CHSV(0, 255, val0); 
leds[7+30] = CHSV(0, 255, val0);

leds[17+30] = CHSV(0, 255, val0);
leds[18+30] = CHSV(0, 255, val0); 
leds[19+30] = CHSV(0, 255, val0); 
leds[20+30] = CHSV(0, 255, val0); 
leds[21+30] = CHSV(0, 255, val0); 
leds[22+30] = CHSV(0, 255, val0);

leds[12+60] = CHSV(0, 255, val0);
leds[11+60] = CHSV(0, 255, val0); 
leds[10+60] = CHSV(0, 255, val0); 
leds[9+60] = CHSV(0, 255, val0); 
leds[8+60] = CHSV(0, 255, val0); 
leds[7+60] = CHSV(0, 255, val0);

leds[17+60] = CHSV(0, 255, val0);
leds[18+60] = CHSV(0, 255, val0); 
leds[19+60] = CHSV(0, 255, val0); 
leds[20+60] = CHSV(0, 255, val0); 
leds[21+60] = CHSV(0, 255, val0); 
leds[22+60] = CHSV(0, 255, val0);

leds[12+90] = CHSV(0, 255, val0);
leds[11+90] = CHSV(0, 255, val0); 
leds[10+90] = CHSV(0, 255, val0); 
leds[9+90] = CHSV(0, 255, val0); 
leds[8+90] = CHSV(0, 255, val0); 
leds[7+90] = CHSV(0, 255, val0);

////////////////////////////////////////Orange

leds[17+90] = CHSV(hue1, 255, val1);
leds[18+90] = CHSV(hue1, 255, val1); 
leds[19+90] = CHSV(hue1, 255, val1); 
leds[20+90] = CHSV(hue1, 255, val1); 
leds[21+90] = CHSV(hue1, 255, val1); 
leds[22+90] = CHSV(hue1, 255, val1);

leds[12+120] = CHSV(hue1, 255, val1);
leds[11+120] = CHSV(hue1, 255, val1); 
leds[10+120] = CHSV(hue1, 255, val1); 
leds[9+120] = CHSV(hue1, 255, val1); 
leds[8+120] = CHSV(hue1, 255, val1); 
leds[7+120] = CHSV(hue1, 255, val1);

leds[17+120] = CHSV(hue1, 255, val1);
leds[18+120] = CHSV(hue1, 255, val1); 
leds[19+120] = CHSV(hue1, 255, val1); 
leds[20+120] = CHSV(hue1, 255, val1); 
leds[21+120] = CHSV(hue1, 255, val1); 
leds[22+120] = CHSV(hue1, 255, val1);

leds[12+150] = CHSV(hue1, 255, val1);
leds[11+150] = CHSV(hue1, 255, val1); 
leds[10+150] = CHSV(hue1, 255, val1); 
leds[9+150] = CHSV(hue1, 255, val1); 
leds[8+150] = CHSV(hue1, 255, val1); 
leds[7+150] = CHSV(hue1, 255, val1);

leds[17+150] = CHSV(hue1, 255, val1);
leds[18+150] = CHSV(hue1, 255, val1); 
leds[19+150] = CHSV(hue1, 255, val1); 
leds[20+150] = CHSV(hue1, 255, val1); 
leds[21+150] = CHSV(hue1, 255, val1); 
leds[22+150] = CHSV(hue1, 255, val1);

leds[12+180] = CHSV(hue1, 255, val1);
leds[11+180] = CHSV(hue1, 255, val1); 
leds[10+180] = CHSV(hue1, 255, val1); 
leds[9+180] = CHSV(hue1, 255, val1); 
leds[8+180] = CHSV(hue1, 255, val1); 
leds[7+180] = CHSV(hue1, 255, val1);

leds[17+180] = CHSV(hue1, 255, val1);
leds[18+180] = CHSV(hue1, 255, val1); 
leds[19+180] = CHSV(hue1, 255, val1); 
leds[20+180] = CHSV(hue1, 255, val1); 
leds[21+180] = CHSV(hue1, 255, val1); 
leds[22+180] = CHSV(hue1, 255, val1);

////////////////////////////////////////Yellow

leds[12+210] = CHSV(hue2, 255, val2);
leds[11+210] = CHSV(hue2, 255, val2); 
leds[10+210] = CHSV(hue2, 255, val2); 
leds[9+210] = CHSV(hue2, 255, val2); 
leds[8+210] = CHSV(hue2, 255, val2); 
leds[7+210] = CHSV(hue2, 255, val2);

leds[17+210] = CHSV(hue2, 255, val2);
leds[18+210] = CHSV(hue2, 255, val2); 
leds[19+210] = CHSV(hue2, 255, val2); 
leds[20+210] = CHSV(hue2, 255, val2); 
leds[21+210] = CHSV(hue2, 255, val2); 
leds[22+210] = CHSV(hue2, 255, val2);

leds[12+240] = CHSV(hue2, 255, val2);
leds[11+240] = CHSV(hue2, 255, val2); 
leds[10+240] = CHSV(hue2, 255, val2); 
leds[9+240] = CHSV(hue2, 255, val2); 
leds[8+240] = CHSV(hue2, 255, val2); 
leds[7+240] = CHSV(hue2, 255, val2);

leds[17+240] = CHSV(hue2, 255, val2);
leds[18+240] = CHSV(hue2, 255, val2); 
leds[19+240] = CHSV(hue2, 255, val2); 
leds[20+240] = CHSV(hue2, 255, val2); 
leds[21+240] = CHSV(hue2, 255, val2); 
leds[22+240] = CHSV(hue2, 255, val2);

leds[12+270] = CHSV(hue2, 255, val2);
leds[11+270] = CHSV(hue2, 255, val2); 
leds[10+270] = CHSV(hue2, 255, val2); 
leds[9+270] = CHSV(hue2, 255, val2); 
leds[8+270] = CHSV(hue2, 255, val2); 
leds[7+270] = CHSV(hue2, 255, val2);

leds[17+270] = CHSV(hue2, 255, val2);
leds[18+270] = CHSV(hue2, 255, val2); 
leds[19+270] = CHSV(hue2, 255, val2); 
leds[20+270] = CHSV(hue2, 255, val2); 
leds[21+270] = CHSV(hue2, 255, val2); 
leds[22+270] = CHSV(hue2, 255, val2);

leds[12+300] = CHSV(hue2, 255, val2);
leds[11+300] = CHSV(hue2, 255, val2); 
leds[10+300] = CHSV(hue2, 255, val2); 
leds[9+300] = CHSV(hue2, 255, val2); 
leds[8+300] = CHSV(hue2, 255, val2); 
leds[7+300] = CHSV(hue2, 255, val2);


////////////////////////////////////////Green
leds[17+300] = CHSV(hue3, 255, val3);
leds[18+300] = CHSV(hue3, 255, val3); 
leds[19+300] = CHSV(hue3, 255, val3); 
leds[20+300] = CHSV(hue3, 255, val3); 
leds[21+300] = CHSV(hue3, 255, val3); 
leds[22+300] = CHSV(hue3, 255, val3);

leds[12+330] = CHSV(hue3, 255, val3);
leds[11+330] = CHSV(hue3, 255, val3); 
leds[10+330] = CHSV(hue3, 255, val3); 
leds[9+330] = CHSV(hue3, 255, val3); 
leds[8+330] = CHSV(hue3, 255, val3); 
leds[7+330] = CHSV(hue3, 255, val3);

leds[17+330] = CHSV(hue3, 255, val3);
leds[18+330] = CHSV(hue3, 255, val3); 
leds[19+330] = CHSV(hue3, 255, val3); 
leds[20+330] = CHSV(hue3, 255, val3); 
leds[21+330] = CHSV(hue3, 255, val3); 
leds[22+330] = CHSV(hue3, 255, val3);

leds[12+360] = CHSV(hue3, 255, val3);
leds[11+360] = CHSV(hue3, 255, val3); 
leds[10+360] = CHSV(hue3, 255, val3); 
leds[9+360] = CHSV(hue3, 255, val3); 
leds[8+360] = CHSV(hue3, 255, val3); 
leds[7+360] = CHSV(hue3, 255, val3);

leds[17+360] = CHSV(hue3, 255, val3);
leds[18+360] = CHSV(hue3, 255, val3); 
leds[19+360] = CHSV(hue3, 255, val3); 
leds[20+360] = CHSV(hue3, 255, val3); 
leds[21+360] = CHSV(hue3, 255, val3); 
leds[22+360] = CHSV(hue3, 255, val3);

leds[12+390] = CHSV(hue3, 255, val3);
leds[11+390] = CHSV(hue3, 255, val3); 
leds[10+390] = CHSV(hue3, 255, val3); 
leds[9+390] = CHSV(hue3, 255, val3); 
leds[8+390] = CHSV(hue3, 255, val3); 
leds[7+390] = CHSV(hue3, 255, val3);

leds[17+390] = CHSV(hue3, 255, val3);
leds[18+390] = CHSV(hue3, 255, val3); 
leds[19+390] = CHSV(hue3, 255, val3); 
leds[20+390] = CHSV(hue3, 255, val3); 
leds[21+390] = CHSV(hue3, 255, val3); 
leds[22+390] = CHSV(hue3, 255, val3);

/////////////////////////////////////////////Light  Blue
leds[12+420] = CHSV(hue4, 185, val4);
leds[11+420] = CHSV(hue4, 185, val4); 
leds[10+420] = CHSV(hue4, 185, val4); 
leds[9+420] = CHSV(hue4, 185, val4); 
leds[8+420] = CHSV(hue4, 185, val4); 
leds[7+420] = CHSV(hue4, 185, val4);

leds[17+420] = CHSV(hue4, 185, val4);
leds[18+420] = CHSV(hue4, 185, val4); 
leds[19+420] = CHSV(hue4, 185, val4); 
leds[20+420] = CHSV(hue4, 185, val4); 
leds[21+420] = CHSV(hue4, 185, val4); 
leds[22+420] = CHSV(hue4, 185, val4);

leds[12+450] = CHSV(hue4, 185, val4);
leds[11+450] = CHSV(hue4, 185, val4); 
leds[10+450] = CHSV(hue4, 185, val4); 
leds[9+450] = CHSV(hue4, 185, val4); 
leds[8+450] = CHSV(hue4, 185, val4); 
leds[7+450] = CHSV(hue4, 185, val4);

leds[17+450] = CHSV(hue4, 185, val4);
leds[18+450] = CHSV(hue4, 185, val4); 
leds[19+450] = CHSV(hue4, 185, val4); 
leds[20+450] = CHSV(hue4, 185, val4); 
leds[21+450] = CHSV(hue4, 185, val4); 
leds[22+450] = CHSV(hue4, 185, val4);

leds[12+480] = CHSV(hue4, 185, val4);
leds[11+480] = CHSV(hue4, 185, val4); 
leds[10+480] = CHSV(hue4, 185, val4); 
leds[9+480] = CHSV(hue4, 185, val4); 
leds[8+480] = CHSV(hue4, 185, val4); 
leds[7+480] = CHSV(hue4, 185, val4);

leds[17+480] = CHSV(hue4, 185, val4);
leds[18+480] = CHSV(hue4, 185, val4); 
leds[19+480] = CHSV(hue4, 185, val4); 
leds[20+480] = CHSV(hue4, 185, val4); 
leds[21+480] = CHSV(hue4, 185, val4); 
leds[22+480] = CHSV(hue4, 185, val4);

leds[12+510] = CHSV(hue4, 185, val4);
leds[11+510] = CHSV(hue4, 185, val4); 
leds[10+510] = CHSV(hue4, 185, val4); 
leds[9+510] = CHSV(hue4, 185, val4); 
leds[8+510] = CHSV(hue4, 185, val4); 
leds[7+510] = CHSV(hue4, 185, val4);

////////////////////////////////////Dark Blue

leds[17+510] = CHSV(hue5, 255, val5);
leds[18+510] = CHSV(hue5, 255, val5); 
leds[19+510] = CHSV(hue5, 255, val5); 
leds[20+510] = CHSV(hue5, 255, val5); 
leds[21+510] = CHSV(hue5, 255, val5); 
leds[22+510] = CHSV(hue5, 255, val5);

leds[12+540] = CHSV(hue5, 255, val5);
leds[11+540] = CHSV(hue5, 255, val5); 
leds[10+540] = CHSV(hue5, 255, val5); 
leds[9+540] = CHSV(hue5, 255, val5); 
leds[8+540] = CHSV(hue5, 255, val5); 
leds[7+540] = CHSV(hue5, 255, val5);

leds[17+540] = CHSV(hue5, 255, val5);
leds[18+540] = CHSV(hue5, 255, val5); 
leds[19+540] = CHSV(hue5, 255, val5); 
leds[20+540] = CHSV(hue5, 255, val5); 
leds[21+540] = CHSV(hue5, 255, val5); 
leds[22+540] = CHSV(hue5, 255, val5);

leds[12+570] = CHSV(hue5, 255, val5);
leds[11+570] = CHSV(hue5, 255, val5); 
leds[10+570] = CHSV(hue5, 255, val5); 
leds[9+570] = CHSV(hue5, 255, val5); 
leds[8+570] = CHSV(hue5, 255, val5); 
leds[7+570] = CHSV(hue5, 255, val5);

leds[17+570] = CHSV(hue5, 255, val5);
leds[18+570] = CHSV(hue5, 255, val5); 
leds[19+570] = CHSV(hue5, 255, val5); 
leds[20+570] = CHSV(hue5, 255, val5); 
leds[21+570] = CHSV(hue5, 255, val5); 
leds[22+570] = CHSV(hue5, 255, val5);

leds[12+600] = CHSV(hue5, 255, val5);
leds[11+600] = CHSV(hue5, 255, val5); 
leds[10+600] = CHSV(hue5, 255, val5); 
leds[9+600] = CHSV(hue5, 255, val5); 
leds[8+600] = CHSV(hue5, 255, val5); 
leds[7+600] = CHSV(hue5, 255, val5);

leds[17+600] = CHSV(hue5, 255, val5);
leds[18+600] = CHSV(hue5, 255, val5); 
leds[19+600] = CHSV(hue5, 255, val5); 
leds[20+600] = CHSV(hue5, 255, val5); 
leds[21+600] = CHSV(hue5, 255, val5); 
leds[22+600] = CHSV(hue5, 255, val5);
////////////////////////////////////////Violet

leds[12+630] = CHSV(hue6, 255, val6);
leds[11+630] = CHSV(hue6, 255, val6); 
leds[10+630] = CHSV(hue6, 255, val6); 
leds[9+630] = CHSV(hue6, 255, val6); 
leds[8+630] = CHSV(hue6, 255, val6); 
leds[7+630] = CHSV(hue6, 255, val6);

leds[17+630] = CHSV(hue6, 255, val6);
leds[18+630] = CHSV(hue6, 255, val6); 
leds[19+630] = CHSV(hue6, 255, val6); 
leds[20+630] = CHSV(hue6, 255, val6); 
leds[21+630] = CHSV(hue6, 255, val6); 
leds[22+630] = CHSV(hue6, 255, val6);

leds[12+660] = CHSV(hue6, 255, val6);
leds[11+660] = CHSV(hue6, 255, val6); 
leds[10+660] = CHSV(hue6, 255, val6); 
leds[9+660] = CHSV(hue6, 255, val6); 
leds[8+660] = CHSV(hue6, 255, val6); 
leds[7+660] = CHSV(hue6, 255, val6);

leds[17+660] = CHSV(hue6, 255, val6);
leds[18+660] = CHSV(hue6, 255, val6); 
leds[19+660] = CHSV(hue6, 255, val6); 
leds[20+660] = CHSV(hue6, 255, val6); 
leds[21+660] = CHSV(hue6, 255, val6); 
leds[22+660] = CHSV(hue6, 255, val6);

leds[12+690] = CHSV(hue6, 255, val6);
leds[11+690] = CHSV(hue6, 255, val6); 
leds[10+690] = CHSV(hue6, 255, val6); 
leds[9+690] = CHSV(hue6, 255, val6); 
leds[8+690] = CHSV(hue6, 255, val6); 
leds[7+690] = CHSV(hue6, 255, val6);

leds[17+690] = CHSV(hue6, 255, val6);
leds[18+690] = CHSV(hue6, 255, val6); 
leds[19+690] = CHSV(hue6, 255, val6); 
leds[20+690] = CHSV(hue6, 255, val6); 
leds[21+690] = CHSV(hue6, 255, val6); 
leds[22+690] = CHSV(hue6, 255, val6);

leds[12+720] = CHSV(hue6, 255, val6);
leds[11+720] = CHSV(hue6, 255, val6); 
leds[10+720] = CHSV(hue6, 255, val6); 
leds[9+720] = CHSV(hue6, 255, val6); 
leds[8+720] = CHSV(hue6, 255, val6); 
leds[7+720] = CHSV(hue6, 255, val6);

leds[17+720] = CHSV(hue6, 255, val6);
leds[18+720] = CHSV(hue6, 255, val6); 
leds[19+720] = CHSV(hue6, 255, val6); 
leds[20+720] = CHSV(hue6, 255, val6); 
leds[21+720] = CHSV(hue6, 255, val6); 
leds[22+720] = CHSV(hue6, 255, val6);

///////////////////////////////////////////////////////////LOWER ROW
leds[p5+12] = CHSV(0, 255, val7);
leds[p5+11] = CHSV(0, 255, val7); 
leds[p5+10] = CHSV(0, 255, val7); 
leds[p5+9] = CHSV(0, 255, val7); 
leds[p5+8] = CHSV(0, 255, val7); 
leds[p5+7] = CHSV(0, 255, val7);

leds[p5+17] = CHSV(0, 255, val7);
leds[p5+18] = CHSV(0, 255, val7); 
leds[p5+19] = CHSV(0, 255, val7); 
leds[p5+20] = CHSV(0, 255, val7); 
leds[p5+21] = CHSV(0, 255, val7); 
leds[p5+22] = CHSV(0, 255, val7);


leds[p5+12+30] = CHSV(0, 255, val7);
leds[p5+11+30] = CHSV(0, 255, val7); 
leds[p5+10+30] = CHSV(0, 255, val7); 
leds[p5+9+30] = CHSV(0, 255, val7); 
leds[p5+8+30] = CHSV(0, 255, val7); 
leds[p5+7+30] = CHSV(0, 255, val7);

leds[p5+17+30] = CHSV(0, 255, val7);
leds[p5+18+30] = CHSV(0, 255, val7); 
leds[p5+19+30] = CHSV(0, 255, val7); 
leds[p5+20+30] = CHSV(0, 255, val7); 
leds[p5+21+30] = CHSV(0, 255, val7); 
leds[p5+22+30] = CHSV(0, 255, val7);

leds[p5+12+60] = CHSV(0, 255, val7);
leds[p5+11+60] = CHSV(0, 255, val7); 
leds[p5+10+60] = CHSV(0, 255, val7); 
leds[p5+9+60] = CHSV(0, 255, val7); 
leds[p5+8+60] = CHSV(0, 255, val7); 
leds[p5+7+60] = CHSV(0, 255, val7);

leds[p5+17+60] = CHSV(0, 255, val7);
leds[p5+18+60] = CHSV(0, 255, val7); 
leds[p5+19+60] = CHSV(0, 255, val7); 
leds[p5+20+60] = CHSV(0, 255, val7); 
leds[p5+21+60] = CHSV(0, 255, val7); 
leds[p5+22+60] = CHSV(0, 255, val7);

leds[p5+12+90] = CHSV(0, 255, val7);
leds[p5+11+90] = CHSV(0, 255, val7); 
leds[p5+10+90] = CHSV(0, 255, val7); 
leds[p5+9+90] = CHSV(0, 255, val7); 
leds[p5+8+90] = CHSV(0, 255, val7); 
leds[p5+7+90] = CHSV(0, 255, val7);

////////////////////////////////////////Orange

leds[p5+17+90] = CHSV(hue1, 255, val8);
leds[p5+18+90] = CHSV(hue1, 255, val8); 
leds[p5+19+90] = CHSV(hue1, 255, val8); 
leds[p5+20+90] = CHSV(hue1, 255, val8); 
leds[p5+21+90] = CHSV(hue1, 255, val8); 
leds[p5+22+90] = CHSV(hue1, 255, val8);

leds[p5+12+120] = CHSV(hue1, 255, val8);
leds[p5+11+120] = CHSV(hue1, 255, val8); 
leds[p5+10+120] = CHSV(hue1, 255, val8); 
leds[p5+9+120] = CHSV(hue1, 255, val8); 
leds[p5+8+120] = CHSV(hue1, 255, val8); 
leds[p5+7+120] = CHSV(hue1, 255, val8);

leds[p5+17+120] = CHSV(hue1, 255, val8);
leds[p5+18+120] = CHSV(hue1, 255, val8); 
leds[p5+19+120] = CHSV(hue1, 255, val8); 
leds[p5+20+120] = CHSV(hue1, 255, val8); 
leds[p5+21+120] = CHSV(hue1, 255, val8); 
leds[p5+22+120] = CHSV(hue1, 255, val8);

leds[p5+12+150] = CHSV(hue1, 255, val8);
leds[p5+11+150] = CHSV(hue1, 255, val8); 
leds[p5+10+150] = CHSV(hue1, 255, val8); 
leds[p5+9+150] = CHSV(hue1, 255, val8); 
leds[p5+8+150] = CHSV(hue1, 255, val8); 
leds[p5+7+150] = CHSV(hue1, 255, val8);

leds[p5+17+150] = CHSV(hue1, 255, val8);
leds[p5+18+150] = CHSV(hue1, 255, val8); 
leds[p5+19+150] = CHSV(hue1, 255, val8); 
leds[p5+20+150] = CHSV(hue1, 255, val8); 
leds[p5+21+150] = CHSV(hue1, 255, val8); 
leds[p5+22+150] = CHSV(hue1, 255, val8);

leds[p5+12+180] = CHSV(hue1, 255, val8);
leds[p5+11+180] = CHSV(hue1, 255, val8); 
leds[p5+10+180] = CHSV(hue1, 255, val8); 
leds[p5+9+180] = CHSV(hue1, 255, val8); 
leds[p5+8+180] = CHSV(hue1, 255, val8); 
leds[p5+7+180] = CHSV(hue1, 255, val8);

leds[p5+17+180] = CHSV(hue1, 255, val8);
leds[p5+18+180] = CHSV(hue1, 255, val8); 
leds[p5+19+180] = CHSV(hue1, 255, val8); 
leds[p5+20+180] = CHSV(hue1, 255, val8); 
leds[p5+21+180] = CHSV(hue1, 255, val8); 
leds[p5+22+180] = CHSV(hue1, 255, val8);

////////////////////////////////////////Yellow

leds[p5+12+210] = CHSV(hue2, 255, val9);
leds[p5+11+210] = CHSV(hue2, 255, val9); 
leds[p5+10+210] = CHSV(hue2, 255, val9); 
leds[p5+9+210] = CHSV(hue2, 255, val9); 
leds[p5+8+210] = CHSV(hue2, 255, val9); 
leds[p5+7+210] = CHSV(hue2, 255, val9);

leds[p5+17+210] = CHSV(hue2, 255, val9);
leds[p5+18+210] = CHSV(hue2, 255, val9); 
leds[p5+19+210] = CHSV(hue2, 255, val9); 
leds[p5+20+210] = CHSV(hue2, 255, val9); 
leds[p5+21+210] = CHSV(hue2, 255, val9); 
leds[p5+22+210] = CHSV(hue2, 255, val9);

leds[p5+12+240] = CHSV(hue2, 255, val9);
leds[p5+11+240] = CHSV(hue2, 255, val9); 
leds[p5+10+240] = CHSV(hue2, 255, val9); 
leds[p5+9+240] = CHSV(hue2, 255, val9); 
leds[p5+8+240] = CHSV(hue2, 255, val9); 
leds[p5+7+240] = CHSV(hue2, 255, val9);

leds[p5+17+240] = CHSV(hue2, 255, val9);
leds[p5+18+240] = CHSV(hue2, 255, val9); 
leds[p5+19+240] = CHSV(hue2, 255, val9); 
leds[p5+20+240] = CHSV(hue2, 255, val9); 
leds[p5+21+240] = CHSV(hue2, 255, val9); 
leds[p5+22+240] = CHSV(hue2, 255, val9);

leds[p5+12+270] = CHSV(hue2, 255, val9);
leds[p5+11+270] = CHSV(hue2, 255, val9); 
leds[p5+10+270] = CHSV(hue2, 255, val9); 
leds[p5+9+270] = CHSV(hue2, 255, val9); 
leds[p5+8+270] = CHSV(hue2, 255, val9); 
leds[p5+7+270] = CHSV(hue2, 255, val9);

leds[p5+17+270] = CHSV(hue2, 255, val9);
leds[p5+18+270] = CHSV(hue2, 255, val9); 
leds[p5+19+270] = CHSV(hue2, 255, val9); 
leds[p5+20+270] = CHSV(hue2, 255, val9); 
leds[p5+21+270] = CHSV(hue2, 255, val9); 
leds[p5+22+270] = CHSV(hue2, 255, val9);

leds[p5+12+300] = CHSV(hue2, 255, val9);
leds[p5+11+300] = CHSV(hue2, 255, val9); 
leds[p5+10+300] = CHSV(hue2, 255, val9); 
leds[p5+9+300] = CHSV(hue2, 255, val9); 
leds[p5+8+300] = CHSV(hue2, 255, val9); 
leds[p5+7+300] = CHSV(hue2, 255, val9);


////////////////////////////////////////Green
leds[p5+17+300] = CHSV(hue3, 255, val10);
leds[p5+18+300] = CHSV(hue3, 255, val10); 
leds[p5+19+300] = CHSV(hue3, 255, val10); 
leds[p5+20+300] = CHSV(hue3, 255, val10); 
leds[p5+21+300] = CHSV(hue3, 255, val10); 
leds[p5+22+300] = CHSV(hue3, 255, val10);

leds[p5+12+330] = CHSV(hue3, 255, val10);
leds[p5+11+330] = CHSV(hue3, 255, val10); 
leds[p5+10+330] = CHSV(hue3, 255, val10); 
leds[p5+9+330] = CHSV(hue3, 255, val10); 
leds[p5+8+330] = CHSV(hue3, 255, val10); 
leds[p5+7+330] = CHSV(hue3, 255, val10);

leds[p5+17+330] = CHSV(hue3, 255, val10);
leds[p5+18+330] = CHSV(hue3, 255, val10); 
leds[p5+19+330] = CHSV(hue3, 255, val10); 
leds[p5+20+330] = CHSV(hue3, 255, val10); 
leds[p5+21+330] = CHSV(hue3, 255, val10); 
leds[p5+22+330] = CHSV(hue3, 255, val10);

leds[p5+12+360] = CHSV(hue3, 255, val10);
leds[p5+11+360] = CHSV(hue3, 255, val10); 
leds[p5+10+360] = CHSV(hue3, 255, val10); 
leds[p5+9+360] = CHSV(hue3, 255, val10); 
leds[p5+8+360] = CHSV(hue3, 255, val10); 
leds[p5+7+360] = CHSV(hue3, 255, val10);

leds[p5+17+360] = CHSV(hue3, 255, val10);
leds[p5+18+360] = CHSV(hue3, 255, val10); 
leds[p5+19+360] = CHSV(hue3, 255, val10); 
leds[p5+20+360] = CHSV(hue3, 255, val10); 
leds[p5+21+360] = CHSV(hue3, 255, val10); 
leds[p5+22+360] = CHSV(hue3, 255, val10);

leds[p5+12+390] = CHSV(hue3, 255, val10);
leds[p5+11+390] = CHSV(hue3, 255, val10); 
leds[p5+10+390] = CHSV(hue3, 255, val10); 
leds[p5+9+390] = CHSV(hue3, 255, val10); 
leds[p5+8+390] = CHSV(hue3, 255, val10); 
leds[p5+7+390] = CHSV(hue3, 255, val10);

leds[p5+17+390] = CHSV(hue3, 255, val10);
leds[p5+18+390] = CHSV(hue3, 255, val10); 
leds[p5+19+390] = CHSV(hue3, 255, val10); 
leds[p5+20+390] = CHSV(hue3, 255, val10); 
leds[p5+21+390] = CHSV(hue3, 255, val10); 
leds[p5+22+390] = CHSV(hue3, 255, val10);

/////////////////////////////////////////////Light Blue
leds[p5+12+420] = CHSV(hue4, 185, val11);
leds[p5+11+420] = CHSV(hue4, 185, val11); 
leds[p5+10+420] = CHSV(hue4, 185, val11); 
leds[p5+9+420] = CHSV(hue4, 185, val11); 
leds[p5+8+420] = CHSV(hue4, 185, val11); 
leds[p5+7+420] = CHSV(hue4, 185, val11);

leds[p5+17+420] = CHSV(hue4, 185, val11);
leds[p5+18+420] = CHSV(hue4, 185, val11); 
leds[p5+19+420] = CHSV(hue4, 185, val11); 
leds[p5+20+420] = CHSV(hue4, 185, val11); 
leds[p5+21+420] = CHSV(hue4, 185, val11); 
leds[p5+22+420] = CHSV(hue4, 185, val11);

leds[p5+12+450] = CHSV(hue4, 185, val11);
leds[p5+11+450] = CHSV(hue4, 185, val11); 
leds[p5+10+450] = CHSV(hue4, 185, val11); 
leds[p5+9+450] = CHSV(hue4, 185, val11); 
leds[p5+8+450] = CHSV(hue4, 185, val11); 
leds[p5+7+450] = CHSV(hue4, 185, val11);

leds[p5+17+450] = CHSV(hue4, 185, val11);
leds[p5+18+450] = CHSV(hue4, 185, val11); 
leds[p5+19+450] = CHSV(hue4, 185, val11); 
leds[p5+20+450] = CHSV(hue4, 185, val11); 
leds[p5+21+450] = CHSV(hue4, 185, val11); 
leds[p5+22+450] = CHSV(hue4, 185, val11);

leds[p5+12+480] = CHSV(hue4, 185, val11);
leds[p5+11+480] = CHSV(hue4, 185, val11); 
leds[p5+10+480] = CHSV(hue4, 185, val11); 
leds[p5+9+480] = CHSV(hue4, 185, val11); 
leds[p5+8+480] = CHSV(hue4, 185, val11); 
leds[p5+7+480] = CHSV(hue4, 185, val11);

leds[p5+17+480] = CHSV(hue4, 185, val11);
leds[p5+18+480] = CHSV(hue4, 185, val11); 
leds[p5+19+480] = CHSV(hue4, 185, val11); 
leds[p5+20+480] = CHSV(hue4, 185, val11); 
leds[p5+21+480] = CHSV(hue4, 185, val11); 
leds[p5+22+480] = CHSV(hue4, 185, val11);

leds[p5+12+510] = CHSV(hue4, 185, val11);
leds[p5+11+510] = CHSV(hue4, 185, val11); 
leds[p5+10+510] = CHSV(hue4, 185, val11); 
leds[p5+9+510] = CHSV(hue4, 185, val11); 
leds[p5+8+510] = CHSV(hue4, 185, val11); 
leds[p5+7+510] = CHSV(hue4, 185, val11);

////////////////////////////////////Dark Blue

leds[p5+17+510] = CHSV(hue5, 255, val12);
leds[p5+18+510] = CHSV(hue5, 255, val12); 
leds[p5+19+510] = CHSV(hue5, 255, val12); 
leds[p5+20+510] = CHSV(hue5, 255, val12); 
leds[p5+21+510] = CHSV(hue5, 255, val12); 
leds[p5+22+510] = CHSV(hue5, 255, val12);

leds[p5+12+540] = CHSV(hue5, 255, val12);
leds[p5+11+540] = CHSV(hue5, 255, val12); 
leds[p5+10+540] = CHSV(hue5, 255, val12); 
leds[p5+9+540] = CHSV(hue5, 255, val12); 
leds[p5+8+540] = CHSV(hue5, 255, val12); 
leds[p5+7+540] = CHSV(hue5, 255, val12);

leds[p5+17+540] = CHSV(hue5, 255, val12);
leds[p5+18+540] = CHSV(hue5, 255, val12); 
leds[p5+19+540] = CHSV(hue5, 255, val12); 
leds[p5+20+540] = CHSV(hue5, 255, val12); 
leds[p5+21+540] = CHSV(hue5, 255, val12); 
leds[p5+22+540] = CHSV(hue5, 255, val12);

leds[p5+12+570] = CHSV(hue5, 255, val12);
leds[p5+11+570] = CHSV(hue5, 255, val12); 
leds[p5+10+570] = CHSV(hue5, 255, val12); 
leds[p5+9+570] = CHSV(hue5, 255, val12); 
leds[p5+8+570] = CHSV(hue5, 255, val12); 
leds[p5+7+570] = CHSV(hue5, 255, val12);

leds[p5+17+570] = CHSV(hue5, 255, val12);
leds[p5+18+570] = CHSV(hue5, 255, val12); 
leds[p5+19+570] = CHSV(hue5, 255, val12); 
leds[p5+20+570] = CHSV(hue5, 255, val12); 
leds[p5+21+570] = CHSV(hue5, 255, val12); 
leds[p5+22+570] = CHSV(hue5, 255, val12);

leds[p5+12+600] = CHSV(hue5, 255, val12);
leds[p5+11+600] = CHSV(hue5, 255, val12); 
leds[p5+10+600] = CHSV(hue5, 255, val12); 
leds[p5+9+600] = CHSV(hue5, 255, val12); 
leds[p5+8+600] = CHSV(hue5, 255, val12); 
leds[p5+7+600] = CHSV(hue5, 255, val12);

leds[p5+17+600] = CHSV(hue5, 255, val12);
leds[p5+18+600] = CHSV(hue5, 255, val12); 
leds[p5+19+600] = CHSV(hue5, 255, val12); 
leds[p5+20+600] = CHSV(hue5, 255, val12); 
leds[p5+21+600] = CHSV(hue5, 255, val12); 
leds[p5+22+600] = CHSV(hue5, 255, val12);
////////////////////////////////////////Violet

leds[p5+12+630] = CHSV(hue6, 255, val13);
leds[p5+11+630] = CHSV(hue6, 255, val13); 
leds[p5+10+630] = CHSV(hue6, 255, val13); 
leds[p5+9+630] = CHSV(hue6, 255, val13); 
leds[p5+8+630] = CHSV(hue6, 255, val13); 
leds[p5+7+630] = CHSV(hue6, 255, val13);

leds[p5+17+630] = CHSV(hue6, 255, val13);
leds[p5+18+630] = CHSV(hue6, 255, val13); 
leds[p5+19+630] = CHSV(hue6, 255, val13); 
leds[p5+20+630] = CHSV(hue6, 255, val13); 
leds[p5+21+630] = CHSV(hue6, 255, val13); 
leds[p5+22+630] = CHSV(hue6, 255, val13);

leds[p5+12+660] = CHSV(hue6, 255, val13);
leds[p5+11+660] = CHSV(hue6, 255, val13); 
leds[p5+10+660] = CHSV(hue6, 255, val13); 
leds[p5+9+660] = CHSV(hue6, 255, val13); 
leds[p5+8+660] = CHSV(hue6, 255, val13); 
leds[p5+7+660] = CHSV(hue6, 255, val13);

leds[p5+17+660] = CHSV(hue6, 255, val13);
leds[p5+18+660] = CHSV(hue6, 255, val13); 
leds[p5+19+660] = CHSV(hue6, 255, val13); 
leds[p5+20+660] = CHSV(hue6, 255, val13); 
leds[p5+21+660] = CHSV(hue6, 255, val13); 
leds[p5+22+660] = CHSV(hue6, 255, val13);

leds[p5+12+690] = CHSV(hue6, 255, val13);
leds[p5+11+690] = CHSV(hue6, 255, val13); 
leds[p5+10+690] = CHSV(hue6, 255, val13); 
leds[p5+9+690] = CHSV(hue6, 255, val13); 
leds[p5+8+690] = CHSV(hue6, 255, val13); 
leds[p5+7+690] = CHSV(hue6, 255, val13);

leds[p5+17+690] = CHSV(hue6, 255, val13);
leds[p5+18+690] = CHSV(hue6, 255, val13); 
leds[p5+19+690] = CHSV(hue6, 255, val13); 
leds[p5+20+690] = CHSV(hue6, 255, val13); 
leds[p5+21+690] = CHSV(hue6, 255, val13); 
leds[p5+22+690] = CHSV(hue6, 255, val13);

leds[p5+12+720] = CHSV(hue6, 255, val13);
leds[p5+11+720] = CHSV(hue6, 255, val13); 
leds[p5+10+720] = CHSV(hue6, 255, val13); 
leds[p5+9+720] = CHSV(hue6, 255, val13); 
leds[p5+8+720] = CHSV(hue6, 255, val13); 
leds[p5+7+720] = CHSV(hue6, 255, val13);

leds[p5+17+720] = CHSV(hue6, 255, val13);
leds[p5+18+720] = CHSV(hue6, 255, val13); 
leds[p5+19+720] = CHSV(hue6, 255, val13); 
leds[p5+20+720] = CHSV(hue6, 255, val13); 
leds[p5+21+720] = CHSV(hue6, 255, val13); 
leds[p5+22+720] = CHSV(hue6, 255, val13);
  
  
  }
