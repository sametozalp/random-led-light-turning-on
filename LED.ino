void setup() {
  // put your setup code here, to run once:
  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
  pinMode(D7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  func(randomF());
}

void func(int a) {
  digitalWrite(a,HIGH);
  delay(100);
  digitalWrite(a,LOW);
  delay(100 );
}

int randomF(){
  return random(0,7);
}
