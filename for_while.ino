int i=0;
void setup() {  
  Serial.begin(9600);
}

void loop() { 
  // Döngüler, belirli bir koşula ulaşıldığı sürece bir kod bloğunu çalıştırabilir.
  while (i < 5) {
  Serial.println(i);
  i++;
}

for (int i = 0; i < 5; i++) {
  Serial.println(i);
}
}
