int distancia = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)//lee la distancia del ultrasonido
{
  pinMode(triggerPin, OUTPUT); 
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);// Establece el pin 'trigger' en estado ALTO durante 10 microsegundos
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);// Lee el pin 'echo' y devuelve el tiempo de viaje de la onda de sonido en microsegundos
}

void setup()
{
  Serial.begin(9600);// indica al puerto serial que va a iniciar en esa medida

  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  distancia = 0;
  Serial.println(distancia);// imprime la data en caracteres ASCII
  if (0.01723 * readUltrasonicDistance(6, 5) < 150) {
    digitalWrite(8, HIGH);
    tone(7, 548668578, 1000);
  } else {
    noTone(7);
    digitalWrite(8, LOW);
  }
  delay(10); 
}
