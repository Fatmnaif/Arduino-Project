const int ledpin = 13; 
const int soundpin = A2;  
const int threshold = 35 ; 
void setup() {
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
pinMode(soundpin,INPUT);
}
void loop() {
int soundsens=analogRead(soundpin); // reads analog data from sound sensor
if (soundsens >= threshold) {
digitalWrite(ledpin,HIGH); //turns led on 5  0
delay(100);//1 second 
}

else{
digitalWrite(ledpin,LOW);
}
}
