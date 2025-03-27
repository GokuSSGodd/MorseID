#include <EEPROM.h>
int greenLed = 5;
int blueLed = 7;
int redLed = 6;
int reedbutton = 10;
int startbutton = 4;
int myID[8];
int idx = 0;
int time;
int press;
const char* morseID[10] = {"-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};
int colorofDot;
int colorofDash;
int speedofLights;
String input;
String newID;
void setup() {
// put your setup code here, to run once:
pinMode(redLed,OUTPUT);
pinMode(greenLed,OUTPUT);
pinMode(blueLed,OUTPUT);
pinMode(startbutton,INPUT_PULLUP);
pinMode(reedbutton,INPUT_PULLUP);
Serial.begin(9600);
for (int x = 0; x < 8; x++){
myID[x] = EEPROM.read(x);
}
time = EEPROM.read(9);
colorofDot = EEPROM.read(10);
colorofDash = EEPROM.read(11);
}
void loop() {
// put your main code here, to run repeatedly:
if (Serial.available() > 0){
input = Serial.readString();
Serial.println(input);
if (input.startsWith("dr")){
colorofDot = redLed;
EEPROM.write(10,redLed);
}
else if (input.startsWith("db")){
colorofDot = blueLed;
EEPROM.write(10,blueLed);
}
else if (input.startsWith("dg")){
colorofDot = greenLed;
EEPROM.write(10,greenLed);
}
else if (input.startsWith("Dr")){
colorofDash = redLed;
EEPROM.write(11,redLed);
}
else if (input.startsWith("Db")){
colorofDash = blueLed;
EEPROM.write(11,blueLed);
}
else if (input.startsWith("Dg")){
colorofDash = greenLed;
EEPROM.write(11,greenLed);
}
else if (input.startsWith("s")){
speedofLights = input.substring(1).toInt();
if(speedofLights == 1){
time = 100;
EEPROM.write(9,100);
}
else if (speedofLights == 2){
time = 500;
EEPROM.write(9,500);
}
else if (speedofLights == 3){
time = 1000;
EEPROM.write(9,1000);
}
}
else if (input.startsWith("i")){
newID = input.substring(1);
for(int i = 0; i < 8; i++){
myID[i] = newID[i] - '0';
EEPROM.write(i,myID[i]);
}
Serial.println("The new ID is: ");
for (int i = 0; i < 8; i++){
Serial.println(myID[i]) + '0';
}
}
}
press = digitalRead(startbutton);
if(press == LOW){
for(int i = 0; morseID[myID[idx]][i] != '\0'; i++) {
if(morseID[myID[idx]][i] == '.'){
digitalWrite(colorofDot,HIGH);
delay(time);
digitalWrite(colorofDot,LOW);
delay(time);
}
else{
digitalWrite(colorofDash,HIGH);
delay(time);
digitalWrite(colorofDash,LOW);
delay(time);
}
}
idx++;
if (idx >= sizeof(myID) / sizeof(myID[0])) {
idx = 0;
}
}
//if it the reedbutton is hit then it resets to the first index of the student number
if (digitalRead(reedbutton) == LOW) {
idx = 0;
digitalWrite(blueLed,HIGH);
delay(time);
digitalWrite(blueLed,LOW);
}
}