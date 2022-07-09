void linear_increments_of_i () {
for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }

  
  hue = 0;
  if (timer_0 > 500) {
if (phrase == 0) {ivariable++;  if (ivariable >= 40) {phrase = 1;} }
if (phrase == 1) {ivariable--;  if (ivariable <= 3) {phrase = 0;} } 

timer_0 = 0;}
for(int i = 0; i < NUM_LEDS; i= i+ ivariable) { leds[i] = CHSV(hue, 255, 255); }
leds[0] = CHSV(0, 0, 0); //was on and i didnt know why. this seemed easier


}
