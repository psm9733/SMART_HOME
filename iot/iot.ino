//모터드라이버
int IN1 = 9;
int IN2 = 10;
int ENA = 11;

//led, 조도센서
int Led_PIN = 3;
int Ilumination_Analog_PIN = A0;
int Ilumination_Digital_PIN = 2;


int Fade_Value = 0;

void setup()
{
  
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(Ilumination_Digital_PIN, INPUT); // 2번 핀으로 데이터를 값을 받음
  Serial.begin(9600); // 시리얼통신을 시작합니다.
}

void loop() {
  if (digitalRead(Ilumination_Digital_PIN) == HIGH) {
    Serial.println("CDS off");  // 빛이차단되면 출력됩니다
    analogWrite(Led_PIN, Fade_Value = 0);
  }else
    analogWrite(Led_PIN, Fade_Value = 255);
  digitalWrite(ENA, HIGH);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  
  int Ilumination_Data = analogRead(Ilumination_Analog_PIN); // A0핀에서 나오는 아날로그 신호를 변수에 대입. 
  Serial.println(Ilumination_Data);             // Ilumination_Data를 출력합니다.
}

