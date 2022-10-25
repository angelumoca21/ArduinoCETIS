#define LED 2

void setup()
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(LED, HIGH);
  Serial.println("Encendido");
  delay(500);
  digitalWrite(LED, LOW);
  Serial.println("Apagado");
  delay(500);
}
