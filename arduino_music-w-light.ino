// This program reads in light from the A5 (analog in pin #5) and converts
// it to a number from 0 – 1023. Then we can tell the speaker, using the
// command “tone(pin,freq,duration)”, what tone to play! This makes a
// touch-less musical instrument called a Theremin! Cool!

int lsInPin = A5;     // the analog input pin we're reading the light values from
int ls_value = 0;     // the light sensor value  to record the light level (value of 0-1023)
int soundOutPin = 5;  // the sound output pin assignment (where to send the sound variable)

void setup()
{
  Serial.begin(9600);
  pinMode(lsInPin, INPUT);          // configures the lsInPin as an INPUT
  pinMode(soundOutPin, OUTPUT);   // configures the soundOutPin as an OUTPUT pin
}

void loop()
{
  ls_value = analogRead(lsInPin);   // rads the light sensor values from the "ls" pin (A5)
  Serial.println(ls_value);       // prints light sensor (ls_value) to serial monitor

  // 1) Click compile/upload (upper left two icons)
  // 2) Click the Serial Monitor (upper right) to watch incoming data (ls_value)
  // 3) Fill in the tone() command below with pin & light value data to "play" the light.

  //tone(pin#,frequency); // Step3, uncomment and fill in pin# and frequency
  delay(250);           // optional delay (in milliseconds) to slow things down.
}
