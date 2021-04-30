int temperatura = 0;// define la variable temperatura

void setup()
{
  pinMode(A5, INPUT);// establece el pin como entrada o salida
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  temperatura = -40 + 0.488155 * (analogRead(A5) - 20);
  //lee el sensor analogico,lo multiplica por un factor de conversión y lo guarda en la variable temperatura
  if (temperatura > 35) {// establece que si la temperatura es mayor a 35, prenda el led 3, sino que prenda el led 2
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
  } else {
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
  }
  delay(10); // hace esperar al procesador 10 milisegundos
}
