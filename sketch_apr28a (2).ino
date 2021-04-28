void setup()// establece los ajustes inicales del codigo
{
  pinMode(8, INPUT);// establece un pin como entrada o salida
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()// hace que el codigo se ejecute un numero infinito de veces
{
  /*
   * if significa 'si...' en ingles, y hace que se ejecute una condicion dependiendo la situacion
   *  digitalRead lee los valores digitales de un pin
   */
  if (digitalRead(8) == HIGH) { // permite escribir los valores logicos digitales de un pin, haciendo que se prenda o que se apague
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
  } else { //significa 'sino' en ingles, y hace que si una condicion se cumple se ejecute un codigo, sino se ejecuta otro codigo
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
  }
  delay(10); // hace que el procesador espere 10 milisegundos
}
