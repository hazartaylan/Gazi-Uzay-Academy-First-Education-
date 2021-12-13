int i=0;
int a=5;
int b=20;
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
}

void loop() {
  i++;
  // put your main code here, to run repeatedly:
   if(i<10){
      Serial.println(a);
    }else if(i>10){
        Serial.println(b);
      }else{
        Serial.println("10");
        } 
  delay(1000);
}
