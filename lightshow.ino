int soundsensor = A0;
int led1 = 7;
int led2 = 10;
int led3 = 12;

void setup() {

  pinMode (soundsensor, INPUT);
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  int val = analogRead (soundsensor);
  Serial.println(val);

  if (val > 350)
  {
    digitalWrite (led1, HIGH);
  }
  else
  {
    digitalWrite (led1, LOW);
  }


  if (val > 370)
  {
    digitalWrite (led2, HIGH);
  }
  else
  {
    digitalWrite (led2, LOW);
  }


  if (val > 390)
  {
    digitalWrite (led3, HIGH);
  }
  else
  {
    digitalWrite (led3, LOW);
  }
}
