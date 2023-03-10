int ledpin = D0; // D1(gpio5)
int button = 5; //D2(gpio4)
int buttonState=0;
void setup() {
 pinMode(ledpin, OUTPUT);
 pinMode(button, INPUT);
}
void loop() {
 buttonState=digitalRead(button); // put your main code here, to run repeatedly:
//  if (buttonState == 1)
//  {
//  analogWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
//   delay(1000);                      // wait for a second
//   analogWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
//   delay(1000);                      // wait for a second
// }//  if (buttonState==0)
//  {
//  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
//   delay(200);                      // wait for a second
//   digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
//   delay(1000);                      // wait for a second
// }
for( int i = 0; i < 25; i ++ ){
  analogWrite(ledpin,i);
  delay(100);
}
for( int i = 25; i > 0; i -- ){
  analogWrite(ledpin,i);
  delay(100);
}  
}