int soundsensor = A0;
int led1 = 7;
int led2 = 8;
int led3 = 10;
int led4 = 12;
int led5 = 13;


void setup() {
  pinMode (soundsensor, INPUT);
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
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

 
 if (val > 380)
  {
    digitalWrite (led3, HIGH);
  }
  else
  {
    digitalWrite (led3, LOW);
  }

  
  
  if (val > 390)
  {
    digitalWrite (led4, HIGH);
  }
  else
  {
    digitalWrite (led4, LOW);
  }


   if (val > 350)
  {
    digitalWrite (led5, HIGH);
  }
  else
  {
    digitalWrite (led5, LOW);
  }
}
