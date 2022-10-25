#define LED 8
#define DIP 7

int edoDip = 0;

void setup()
{
  pinMode(DIP, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  edoDip = digitalRead(DIP);
  if (edoDip == HIGH)
  {
    digitalWrite(LED, 1);
  }
  else
  {
    digitalWrite(LED, 0);
  }
}
