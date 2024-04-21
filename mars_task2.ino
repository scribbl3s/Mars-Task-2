int pwm_pin=2;
int dir_pin=3;
int trig_pin=4;
int echo_pin=5;

int distance;
int duration;

void setup()
{
  pinMode(trig_pin,OUTPUT);
  pinMode(echo_pin,INPUT);
  pinMode(pwm_pin,OUTPUT);
  pinMode(dir_pin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig_pin,LOW);
  delayMicroseconds(2);

  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);

  duration = pulseIn(echo_pin, HIGH);
  distance = duration * 0.0343 / 2;
  Serial.println("distance:");
  Serial.println(distance);

  if(distance>100){
    //150 pwm acw
    Serial.println("150 acw");
    digitalWrite(dir_pin,HIGH);
    analogWrite(pwm_pin,150);
    delay(1000);
  }

  else if((distance>75)&&(distance<=100)){
    //75 pwm acw
    Serial.println("75 acw");
    digitalWrite(dir_pin,HIGH);
    analogWrite(pwm_pin,75);
    delay(1000);

  }

  else if((distance>50)&&(distance<=75)){
    //stop
    Serial.println("stop");
    digitalWrite(dir_pin,HIGH);
    analogWrite(pwm_pin,0);
    delay(1000);
  }

  else if((distance>25)&&(distance<=50)){
    //75 pwm cw
    Serial.println("75 cw");
    digitalWrite(dir_pin,LOW);
    analogWrite(pwm_pin,75);
    delay(1000);
  }

  else if(distance<=25){
    //150 pwm cw
    Serial.println("150 cw");
    digitalWrite(dir_pin,LOW);
    analogWrite(pwm_pin,150);
    delay(1000);
  }
}


 