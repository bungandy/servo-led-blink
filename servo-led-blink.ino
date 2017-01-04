#include <Servo.h>

Servo myservo;

int LedMerah=9;
int LedHijau=10;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  myservo.attach(8);

  pinMode(LedMerah,OUTPUT);
  pinMode(LedHijau,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i=1; i<=4; i++){
    Serial.println(i);

    myservo.write(90);
    digitalWrite(LedMerah,HIGH);
    Serial.println("-Red on");
    
    delay(300);
    myservo.write(0);
    digitalWrite(LedMerah,LOW);
    digitalWrite(LedHijau,HIGH);
    Serial.println("--Green on");
    
    delay(300);
    digitalWrite(LedHijau,LOW);
  }
  
  
  digitalWrite(LedMerah,LOW);
  Serial.println("----Done---- \n\n\n");
  delay(1000);
}
