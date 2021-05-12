#define LED 3
#define INTERRUPTOR 5

void setup() {
pinMode (3,OUTPUT);
pinMode (5 ,INPUT);

}

void loop() {
  if ( digitalRead (5) == HIGH){
  digitalWrite (3,HIGH);
  delay (500);
  digitalWrite (3,LOW);
  delay(500);
  }
  else {
  digitalWrite (3,HIGH); 
  delay (1000);
  digitalWrite (3,LOW);
  delay (1000);
  }

}
