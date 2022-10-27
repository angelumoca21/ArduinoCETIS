#define s4 A5
#define s3 A4
#define s2 A3
#define s1 A2
#define A 0
#define B 1
#define C 3
#define D 3
#define E 4
#define F 5
#define G 6

int edos1 = 0;
int edos2 = 0;
int edos3 = 0;
int edos4 = 0;

void setup()
{
    pinMode(s1,INPUT);
    pinMode(s2,INPUT);
    pinMode(s3,INPUT);
    pinMode(s4,INPUT);
    pinMode(A,OUTPUT);
    pinMode(B,OUTPUT);
    pinMode(C,OUTPUT);
    pinMode(D,OUTPUT);
    pinMode(E,OUTPUT);
    pinMode(F,OUTPUT);
    pinMode(G,OUTPUT);
}

void loop()
{
    edos1 = digitalRead(s1);
    edos2 = digitalRead(s2);
    edos3 = digitalRead(s3);
    edos4 = digitalRead(s4);

    if (edos1 == 0 && edos2 == 0 && edos3 == 0 && edos4 == 0)
    {
        //0 catodo
        digitalWrite(A,1);
        digitalWrite(B,1);
        digitalWrite(C,1);
        digitalWrite(D,1);
        digitalWrite(E,1);
        digitalWrite(F,1);
        digitalWrite(G,0);
        //0 anodo
        digitalWrite(A,0);
        digitalWrite(B,0);
        digitalWrite(C,0);
        digitalWrite(D,0);
        digitalWrite(E,0);
        digitalWrite(F,0);
        digitalWrite(G,1);
    }
    else if (edos1 == 0 && edos2 == 0 && edos3 == 0 && edos4 == 1)
    {
        //1
        digitalWrite(A,0);
        digitalWrite(B,1);
        digitalWrite(C,1);
        digitalWrite(D,0);
        digitalWrite(E,0);
        digitalWrite(F,0);
        digitalWrite(G,0);
    }
    else
    {
        //E de error
        digitalWrite(A,1);
        digitalWrite(B,0);
        digitalWrite(C,0);
        digitalWrite(D,1);
        digitalWrite(E,1);
        digitalWrite(F,1);
        digitalWrite(G,1);
    }
}