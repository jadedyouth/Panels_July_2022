void george (){
for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }


  
 for(int i = 0; i < Gmax; i++) { leds[p0_G[i]] = CHSV(hue, 255, val0); }
  for(int i = 0; i < Emax; i++) { leds[p1_E[i]] = CHSV(hue, 255, val0); }
   for(int i = 0; i < Omax; i++) { leds[p2_O[i]] = CHSV(hue, 255, val0); }
      for(int i = 0; i < Rmax; i++) { leds[p3_R[i]] = CHSV(hue, 255, val0); }
  for(int i = 0; i < Gmax; i++) { leds[p4_G[i]] = CHSV(hue, 255, val0); }

   for(int i = 0; i < Gmax; i++) { leds[p5_G[i]] = CHSV(hue, 255, val5); }
    for(int i = 0; i < Gmax; i++) { leds[p6_E[i]] = CHSV(hue, 255, val5); }
    for(int i = 0; i < Omax; i++) { leds[p7_O[i]] = CHSV(hue, 255, val5); }
    for(int i = 0; i < Rmax; i++) { leds[p8_R[i]] = CHSV(hue, 255, val5); }
   for(int i = 0; i < Gmax; i++) { leds[p9_G[i]] = CHSV(hue, 255, val5); }

    if (timer_0 > 50) {

      if (gate == 0 ) {
if (phrase == 0) {val0 = val0 + 30;  if (val0 >= 234) {phrase = 1;} }
if (phrase == 1) {val0 = val0 - 30;  if (val0 <= 13) {phrase = 0; gate ++;} } 

}

if (gate == 1 ) {

if (phrase5 == 0) {val5 = val5 + 30;  if (val5 >= 234) {phrase5 = 1;} }
if (phrase5 == 1) {val5 = val5 - 30;  if (val5 <= 13) {phrase5 = 0; gate = 0;} } 

}

timer_0 = 0;}
  }
