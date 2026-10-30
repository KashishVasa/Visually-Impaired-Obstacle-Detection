int trigpin1 = 5;
int echopin1 = 6;

int trigpin2 = 9;
int echopin2 = 10;

int trigpin3 = 3;
int echopin3 = 11;

int BUZZpin = A0;

void setup() {
  Serial.begin(9600);

  pinMode(trigpin1, OUTPUT);
  pinMode(echopin1, INPUT);

  pinMode(trigpin2, OUTPUT);
  pinMode(echopin2, INPUT);

  pinMode(trigpin3, OUTPUT);
  pinMode(echopin3, INPUT);

  pinMode(BUZZpin, OUTPUT);
  digitalWrite(BUZZpin, LOW);
}

void setFreq(int pwm, int delayTime) {
  analogWrite(BUZZpin, pwm);
  delay(delayTime);
  analogWrite(BUZZpin, 0);
}

long readDistance(int trig, int echo) {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);

  digitalWrite(trig, LOW);

  long duration = pulseIn(echo, HIGH);
  long distance = (duration / 2) / 29.1;

  return distance;
}

void loop() {

  long distance1 = readDistance(trigpin1, echopin1);
  long distance2 = readDistance(trigpin2, echopin2);
  long distance3 = readDistance(trigpin3, echopin3);

  long distance = 1000;

  if (distance1 <= 30) distance = min(distance, distance1);
  if (distance2 <= 30) distance = min(distance, distance2);
  if (distance3 <= 30) distance = min(distance, distance3);

  if (distance != 1000) {

    Serial.print("Distance: ");
    Serial.println(distance);

    if (distance <= 5) {
      setFreq(255, 50);
    }
    else if (distance <= 10) {
      setFreq(230, 150);
    }
    else if (distance <= 15) {
      setFreq(205, 250);
    }
    else if (distance <= 20) {
      setFreq(180, 350);
    }
    else if (distance <= 25) {
      setFreq(155, 450);
    }
    else {
      setFreq(130, 550);
    }
  }
  else {
    analogWrite(BUZZpin, 0);
  }
}
