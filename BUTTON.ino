int led = 7;
int button = 3;
int push;


void setup() {
    Serial.begin(9600);
    pinMode(led,OUTPUT);
    pinMode(button,INPUT);
}

void loop() {
 
  push = digitalRead(button);
  Serial.println(push);
  if(push == 1)
  {
    digitalWrite(led,HIGH);
    delay(100);
    digitalWrite(led,LOW);
    delay(100);
  }else
  {
    digitalWrite(led,LOW);
  }
}