void setup()
{
  pinMode(7, OUTPUT);// establece un pin como entrada o salida
  pinMode(2, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);// escribe los valores logicos digitales, haciendo que se prenda o se apague
  digitalWrite(2, HIGH);
  delay(1000); // hace que el procesador espere 1 segundo
  digitalWrite(7, LOW);
  delay(1000); 
  digitalWrite(6, HIGH);
  digitalWrite(2, HIGH);
  delay(1000); 
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  delay(3000); // hace que el procesador espere 3 segundos
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(2000); // hace que el procesador espere 2 segundos
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
}
