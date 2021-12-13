#define red 8
#define green 9
#define yellow 10

void setup() {
   pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
}

void loop() {
   // yeşili söndür sarıyı yak
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(3000);

    // sarıyı söndür kırmızı yak
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(5000);

    // kırmızı ve sarı aynı anda yak
    digitalWrite(yellow, HIGH);
    delay(2000);

    // Yeşil yak
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    delay(3000);
   
}
