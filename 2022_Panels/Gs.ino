
void Gs () {
  for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }


 for(int i = 0; i < Gmax; i++) { leds[p0_G[i]] = CHSV(hue, 255, val0); }
 for(int i = 0; i < Gmax; i++) { leds[p1_G[i]] = CHSV(hue, 255, val1); }
 for(int i = 0; i < Gmax; i++) { leds[p2_G[i]] = CHSV(hue, 255, val2); }
 for(int i = 0; i < Gmax; i++) { leds[p3_G[i]] = CHSV(hue, 255, val3); }
 for(int i = 0; i < Gmax; i++) { leds[p4_G[i]] = CHSV(hue, 255, val4); }
 
 for(int i = 0; i < Gmax; i++) { leds[p5_G[i]] = CHSV(hue, 255, val5); }
 for(int i = 0; i < Gmax; i++) { leds[p6_G[i]] = CHSV(hue, 255, val6); }
 for(int i = 0; i < Gmax; i++) { leds[p7_G[i]] = CHSV(hue, 255, val7); }
 for(int i = 0; i < Gmax; i++) { leds[p8_G[i]] = CHSV(hue, 255, val8); }
 for(int i = 0; i < Gmax; i++) { leds[p9_G[i]] = CHSV(hue, 255, val9); }


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


timer_0 = 0;}

  
  }
