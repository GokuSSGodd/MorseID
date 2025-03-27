//all my variables
int greenLed = 5;
int blueLed = 7;
int redLed = 6;
int reedbutton = 10;
int startbutton = 4;
int myID[] = {0,0,7,8,0,7,4,9};
int idx = 0;
const char* morseID[10] = {".----","..---","...--","....-",".....","-....","--...","---..","----.","-----"};
void setup() {
// all my setup code:
pinMode(redLed,OUTPUT);
pinMode(greenLed,OUTPUT);
pinMode(blueLed,OUTPUT);
pinMode(startbutton,INPUT_PULLUP);
pinMode(reedbutton,INPUT_PULLUP);
}
void loop() {
// main code:
//outputs red if it's a “.” and outputs a green if it's a “-”.
int press = digitalRead(startbutton);
if(press == LOW){
for(int i = 0; morseID[myID[idx]][i] != '\0'; i++) {
if(morseID[myID[idx]][i] == '.'){
digitalWrite(redLed,HIGH);
delay(500);
digitalWrite(redLed,LOW);
delay(500);
}
else{
digitalWrite(greenLed,HIGH);
delay(500);
digitalWrite(greenLed,LOW);
delay(500);
}
}
//increments to the next number
idx++;
if (idx >= sizeof(myID) / sizeof(myID[0])) {
idx = 0; //resets the index if it goes over the size of the array,
//just incase
}
}
//if it the reedbutton is hit then it resets to the first index of the student number
if (digitalRead(reedbutton) == LOW) {
idx = 0;
digitalWrite(blueLed,HIGH);
delay(500);
digitalWrite(blueLed,LOW);
}
}