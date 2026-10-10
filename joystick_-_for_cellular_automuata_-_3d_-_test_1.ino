int xPin = A0;
int yPin = A1;
int buttonPin = 52;
int xVal;
int yVal;
int buttonState; 


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(xPin, INPUT); // to receive information from the joystick to the arduino 
pinMode( yPin, INPUT);
pinMode(buttonPin, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
xVal = analogRead(xPin);
yVal = analogRead(yPin);
buttonState = digitalRead(buttonPin);

//X: XXX|Y: YYY| button: 0/1
Serial.print("X: ");
Serial.print(xVal);
Serial.print("Y: ");
Serial.print(yVal);
Serial.print(" |Button: ");
Serial.print(buttonState);

delay(1000);
}
