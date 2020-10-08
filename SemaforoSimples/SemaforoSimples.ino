// Identifca os pinos que serão utilizados para cada cor
int red = 10;
int yellow = 9;
int green = 8;

void setup() {
  // Configura as portas selecionadas como saída (OUTPUT)
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // Apaga a luz vermelha e verde enquanto deixa a amarela acessa
  digitalWrite(red, low);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);

  delay(2000); // 2 seconds

  // Apaga a luz amarela a acende a vermelha
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);

  delay(4000); // 4 seconds

  // Apaga a luz vermelha e acende a luz verde
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);

  delay(4000); // 4 seconds
}
