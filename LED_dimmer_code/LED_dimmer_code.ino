int potValue = 0;
int brightness = 0;
int led1 = 3;


void setup() {
  pinMode(led1,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  potValue = analogRead(A0);
  brightness = map(potValue,0,1023,0,255);
  if (brightness <= 30 )
  {
    brightness = 30;
  }
  else if (brightness >= 200)
  {
    brightness = 200;
  }
  analogWrite(led1,brightness);
  Serial.print("Pot: ");
  Serial.print(potValue);
  Serial.print("brightness: ");
  Serial.print(brightness);

  delay(100);


}
