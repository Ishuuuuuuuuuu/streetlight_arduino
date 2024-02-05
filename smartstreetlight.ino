//first of all enter the pins
const int ledPin = 13;
const int ldrPin = A0;

void setup() {
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
pinMode(ldrPin, INPUT);
}

void loop() {
int ldr = analogRead(ldrPin);
if (ldrStatus <= 200) {
digitalWrite(ledPin, HIGH);
Serial.print("Its Night Time, Turn on the LED : ");
Serial.println(ldr);
}

else {
digitalWrite(ledPin, LOW);
Serial.print("Its daytime, Turn off the LED : ");
Serial.println(ldr);
}
}
