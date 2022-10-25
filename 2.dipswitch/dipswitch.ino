#define LED 8
#define DIP 7

int edoDip = 0;

void setup()
{
  pinMode(DIP, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  edoDip = digitalRead(DIP);
  if (edoDip == HIGH)
  {
    digitalWrite(LED, 1);
    Serial.println("1");
  }
  else
  {
    digitalWrite(LED, 0);
    Serial.println("0");
  }
}
