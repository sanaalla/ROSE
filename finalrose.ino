//From Data to Perception, Digital Futures Masters at OCAD University
//Sana Shepko & Emma Brito
//"Every 42 Seconds", February 5th 2018

//Every 42 seconds someone experiences domestic abuse in Canada. This data is visualized through the use of red lights embedded into a white rose.
//This code turns on red LEDs sewn into the rose with conductive thread for 42 seconds. The lights turn off for 2 seconds after 42 seconds, and then turn on again.

int led1 = 13; //the pin that the wire is attached to, which is then attached to conductive thread controlling multiple LEDs


void setup() {
  // initialize digital pin 13 as an output.
  pinMode(led1, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led1, HIGH); //turn on the LEDs for 42 seconds
  delay(42000);                       
  digitalWrite(led1, LOW);//turn off the LEDs for 2 seconds
  delay(2000);                       
}
