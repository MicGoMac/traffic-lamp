/*
  traffic lamp

  Turns 3 color LED on consequently, repeatedly.

*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);


}
  int red=11;
  int yellow=12;
  int green=13;

  int red_delay=2000;
  int yellow_delay=1000;
  int green_delay=3000;
   
// the loop function runs over and over again forever
void loop() {
  digitalWrite(red, HIGH);   
  delay(red_delay);          
  digitalWrite(red, LOW);    

  digitalWrite(yellow, HIGH);   
  delay(yellow_delay);          
  digitalWrite(yellow, LOW); 

  digitalWrite(green, HIGH);   
  delay(green_delay);          
  digitalWrite(green, LOW); 
}
