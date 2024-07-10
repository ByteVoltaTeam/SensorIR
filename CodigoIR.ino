#define OutPin 11 // Pino de Saída de valor digital

void setup() {
  Serial.begin(9600); // Inicia a comunicação serial com baudrate de 9600
  pinMode(OutPin, INPUT); // diz que o modo de OutPin é saída

}

void loop() {
  int ValorRead = digitalRead(OutPin); // Variável que armazena a leitura do Sensor IR
  Serial.println("Leitura SensorIR:   " + String(ValorRead));
}
