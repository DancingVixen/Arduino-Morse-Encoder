//Written by RF-Fox [KG3FOX]

int inByte = 0; // Keyboard Input in serial monitor.
const int ledPin = 10; // sets pin 10 as output. You can attach an LED or buzzer here.
const int time_base = 150; // Sets dot to 150ms. [Can change the speed]
const int dash = 3*time_base; // Sets dash to 3 times as kibg as the dot.

void setup() {
 

Serial.begin(9600); // Sets the serial interface rate to 9600baud.
pinMode(ledPin,OUTPUT);} // Sets the LED pin to output.

void loop() {
  //This code will loop until stopped:

int inByte = 0; //Resets variable to 0 so morse only blinks once.
 if (Serial.available() > 0){ // Checks for incoming serial data from the keyboard.
  inByte = Serial.read();} // If serial data from the keyboard is detected it will store the data in the inByte variable.

//Letter/Morse assignments, you can add the same values for Uppercase letters or use lowercase only. 
if (inByte == 'a'){ //Checks if a letter was inputed via serial interface.
digitalWrite(ledPin,HIGH); //Turns LED on.
delay(time_base); //150ms dot delay we set earlier.
digitalWrite(ledPin,LOW); //Turns LED off.
delay(time_base); //Delay.
digitalWrite(ledPin,HIGH); //Turns on LED.
delay(dash); //Dash delay; 3x longer than the dot we set earlier.
digitalWrite(ledPin,LOW); //Turns LED off.
delay(3*time_base);} //Delay

//Bravo(Dash Dot Dot Dot)
if (inByte == 'b'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Charlie(Dash Dot Dash Dot)
if (inByte == 'c'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Delta(Dash Dot Dot)
if (inByte == 'd'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Echo(Dot)
if (inByte == 'e') {
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Foxtrot(Dot Dot Dash Dot)
if (inByte == 'f'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Golf(Dash Dash Dot)
if (inByte == 'g'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Hotel(Dot Dot Dot Dot)
if (inByte == 'h'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//India(Dot Dot)
if (inByte == 'i'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Juliet(Dot Dash Dash Dash)
if (inByte == 'j'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Kilo(Dash Dot Dash)
if (inByte == 'k'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Lima(Dot Dash Dot Dot)
if (inByte == 'l'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Michael(Dash Dash)
if (inByte == 'm'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//November(Dash Dot)
if (inByte == 'n'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Oscar(Dash Dash Dash)
if (inByte == 'o'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Papa(Dot Dash Dash Dot)
if (inByte == 'p'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Quebec(Dash Dash Dot Dash)
if (inByte == 'q'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Romeo(Dot Dash Dot)
if (inByte == 'r'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Sierra(Dot Dot Dot)
if (inByte == 's'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Tango(Dash)
if (inByte =='t'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Uniform(Dot Dot Dash)
if (inByte =='u'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Victor(Dot Dot Dot Dash)
if (inByte == 'v'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Whiskey(Dot Dash Dash)
if (inByte == 'w'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//X-Ray(Dash Dot Dot Dash)
if (inByte == 'x'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Yankee(Dash Dot Dash Dash)
if (inByte == 'y'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}


//Zulu(Dash Dash Dot Dot)
if (inByte == 'z'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//SPACE(7 Dots)
if (inByte == ' '){
digitalWrite(ledPin,LOW);
delay(7*time_base);} // keeps the light off for seven dots, as specified by Morse code

//Numerical 1 (Dot Dash Dash Dash Dash)
if (inByte == '1'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Numerical 2(Dot Dot Dash Dash Dash)
if (inByte == '2'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Numerical3(Dot Dot Dot Dash Dash)
if (inByte == '3'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Numerical 4(Dot Dot Dot Dot Dash)
if (inByte == '4'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Numerical 5(Dot Dot Dot Dot Dot)
if (inByte == '5'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for 6 (Dash Dot Dot Dot Dot)
if (inByte == '6'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Numerical 7(Dash Dash Dot Dot Dot)
if (inByte == '7'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Numerical 8(Dash Dash Dash Dot Dot)
if (inByte == '8'){
   digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
 digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
 digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
 digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
 digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Numerical 9(Dash Dash Dash Dash Dot)
if (inByte == '9'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Numerical 0(Dash Dash Dash Dash Dash)
if (inByte == '0'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}
}
//Written by RF-Fox [KG3FOX]
