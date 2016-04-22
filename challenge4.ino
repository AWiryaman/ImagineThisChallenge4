int power=D0;
int button1=D1;
int button2=D2;
int button3=D3;
int button4=D4;
void setup()
{
    pinMode(power, OUTPUT);
    pinMode(button1, INPUT);
    pinMode(button2, INPUT);
    pinMode(button3, INPUT);
    pinMode(button4, INPUT);
    pinMode(D7, OUTPUT);
    digitalWrite(power, HIGH);
}



void loop()
{
    digitalWrite(D7, HIGH);
    if(digitalRead(button1)==HIGH)
    {
        Particle.publish("button1", "Pushed", 60, PRIVATE);
        pinMode(button1, OUTPUT);
        digitalWrite(button1, LOW);
    }
    else if(digitalRead(button2)==HIGH)
    {
        Particle.publish("button1", "Pushed", 60, PRIVATE);
        pinMode(button2, OUTPUT);
        digitalWrite(button2, LOW);
    }
    else if(digitalRead(button3)==HIGH)
       {
        Particle.publish("button1", "Pushed", 60, PRIVATE);
        pinMode(button2, OUTPUT);
        digitalWrite(button2, LOW);
    }
    else if(digitalRead(button4)==HIGH)
    {
        Particle.publish("button1", "Pushed", 60, PRIVATE);
        pinMode(button2, OUTPUT);
        digitalWrite(button2, LOW);
    }
    delay(1000);
    digitalWrite(D7, LOW);
}
