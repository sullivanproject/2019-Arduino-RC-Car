/*
  제목    : 조도에 따라 LED밝기 조절하기
  내용   : 어두운 정도에 따라 점점 더 밝아지는 LED를 만들어 봅시다.
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
 
  //map함수와 constrain을 사용하여 조도센서의 밝기 범위를 0~1023에서 0~255로 변경
  cdsValue = map(cdsValue, 0, 1023, 0, 255);
  cdsValue = constrain(cdsValue, 0, 255);
  analogWrite(led,cdsValue);
  delay(200);
}