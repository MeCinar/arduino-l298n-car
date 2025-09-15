// Mert ÇINAR
// Motor pinleri
int IN1 = 7;
int IN2 = 6;
int IN3 = 5;
int IN4 = 4;

char command; // Bluetooth'tan gelen karakter

void setup() {
  // Motor pinlerini çıkış yap
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Başlangıçta motorlar duruyor
  stopCar();

  // Bluetooth için seri haberleşme
  Serial.begin(9600); 
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.read();
    stopCar(); // Her komuttan önce durdur
    
    switch (command) {
      case 'F': forward(); break;  // İleri
      case 'B': backward(); break; // Geri
      case 'L': left(); break;     // Sol
      case 'R': right(); break;    // Sağ
      case 'S': stopCar(); break;  // Stop
    }
  }
}

// ---- Fonksiyonlar ----
void forward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void backward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void left() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void right() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stopCar() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
