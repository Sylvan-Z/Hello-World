const int bPin=13;
bool bp=false;
bool pbp=false;
void setup() {
  // put your setup code here, to run once:
  pinMode(bPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  pbp=bp;
  if(digitalRead(bPin)==HIGH){
    bp=true;
  }
  else{
    bp=false;
  }
  if(pbp==false and bp==true){
    Serial.println("Hello_World");
  }
}
