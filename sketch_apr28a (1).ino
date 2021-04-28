void setup()
{
  pinMode(7, INPUT);//establece el pin como entrada o salida
  pinMode(6, INPUT);
  pinMode(2, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  if (digitalRead(7) == HIGH) {//lee el valor digital del pin
    if (digitalRead(6) == HIGH) {
      digitalWrite(2, HIGH);//permite escribir el valor digital logico del pin, haciendo que se apague o se prenda
      tone(9, 548668578, 1000); // genera una onda de frecuencia especifica, que se puede establecer su duracion o dejarla continuar hasta llamar un noTone
    } else {
      digitalWrite(2, LOW);
      noTone(9);// apaga la onda de frecuencia
    }
  } else {
    digitalWrite(8, LOW);
    noTone(7);
  }
  delay(10); // hace esperar al procesador 10 milisegundos
}
