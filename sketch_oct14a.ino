#define led3 3
#define pot A0
void setup() {
  pinMode(led3,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int pot_val = analogRead(pot);
  Serial.print("pot :");
  Serial.print(pot_val);
  Serial.print("   ||  ");
  int pmw = map(pot_val,0,1023,0,255);
  Serial.print(" map :");
  Serial.println(pmw);
  analogWrite(led3,pmw);
  delay(300);
}
