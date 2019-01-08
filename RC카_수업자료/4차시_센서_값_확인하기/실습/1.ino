/*
  제목    : 조도센서로 어두워지면 LED 켜기
  내용   : 조도센서를 손으로 가려 어둡게 만들면 LED가 켜지도록 해봅시다.
  https://kocoafab.cc/tutorial/view/356
*/
 
// 조도센서를 A0핀으로 선언하고 led핀을 3번핀으로 선언합니다.
int cds = A0;
int led = 3;
 
// 실행시 가장 먼저 호출되는 함수이며, 최초 1회만 실행됩니다.
// 변수를 선언하거나 초기화를 위한 코드를 포함합니다.
void setup() {
  Serial.begin(9600);          // 조도센서의 동작 상태를 확인하기 위하여 시리얼 통신을 설정합니다. (전송속도 9600bps)
  pinMode(led, OUTPUT);   // LED 핀을 OUTPUT으로 설정합니다.
}
 
// setup() 함수가 호출된 이후, loop() 함수가 호출되며,
// 블록 안의 코드를 무한히 반복 실행됩니다.
void loop() {
  // 조도센서로 부터 측정된 밝기 값을 읽어 cdsValue라는 변수에 저장합니다.
  int cdsValue = analogRead(cds);
 
  // 측정된 밝기 값를 시리얼 모니터에 출력합니다.
  Serial.print("cds =  ");
  Serial.println(cdsValue);
 
  // 조도센서로 부터 측정된 밝기 값이 500보다 크다면, 아래의 블록을 실행합니다.
  // 기준 밝기값은 주변 환경에 따라 바꿔주세요.
  if (cdsValue > 500) {
    digitalWrite(led, HIGH);
    Serial.println("LED ON (cds > 500)");
  }
 
  // 조도센서로 부터 측정된 밝기 값이 500보다 작다면, 아래의 블록을 실행합니다.
  else {
    digitalWrite(led, LOW);
    Serial.println("LED OFF (cds < 500)");
  }
  delay(200);
}