int temperatura = 0

void setup() {
  pinMode (A5,INPUT);
  Serial.begin (9600);
}

void loop() {
  temperatura = -40 + 0.488155 * (analogRead(A5) - 20); //leo la temperatura en grados C
  delay (1000);
  Serial.print (" La temperatura es");

}
