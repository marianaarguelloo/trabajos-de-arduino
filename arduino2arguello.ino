void setup() {
  pinMode (A5,INPUT); //define que usa el pin A5 como entrada
  Serial.begin (9600); //indico que voy a usar el puerto serial a 9600 baudios
}

void loop() {
  int temperatura = -40 + 0.488155 * (analogRead(A5) - 20); //leo la temperatura en grados C
  delay (1000);
  Serial.print (" La temperatura es ");
  Serial.print(temperatura);
  Serial.println(" grados.");
}
