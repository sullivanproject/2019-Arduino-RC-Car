# 설리번 6차시 강의세부계획서
### -김현우




## 6차시 강의 설계 컨셉
- 차시 명 : 무선 조종기 만들어보기
- 차시 담당자 : 김현우
- 차시 강의자 : 김현우, 김민종
- 차시 목표: RC카를 조종할 수 있는 무선 조종기를 만들어보고, 실제로 조종해보기

## 강의 내용
- Bluetooth 모듈의 이해와 활용
	- RF와 Bluetooth에 대한 설명
	- Serial과 baud rate에 대한 설명
	- 다른 곳에서 사용하더라도 어려움이 없도록 원리에 대한 설명 제공
- 메인 소스코드 작성
	- Bluetooth 모듈의 설정을 위한 AT mode
	- 컨트롤러 - Serail 모니터 - RC카 구조에 차례 차례 접근하여 이해가 용이하도록 순서를 정해서 작성 및 테스트
- 동작 테스트 및 수정
	- 간단한 과제를 통해 헬렌의 이해도 파악
	- 헬렌이 원하는 기능을 구현할 수 있도록 도움

## 6차시 강의 세부 설계 내용

### Bluetooth 모듈의 이해와 활용(60분)
- Bluetooth의 원리(25분)
	- RF를 설명하면서 시작
	- Bluetooth의 특징(허가 필요 x, M-S, 주파수 대역 등)
	- Bluetooth의 hopping
- Serail 통신(25분): 
	- Serail과 Parallel
	- SPI/I2C 개념 간략하게 설명
	- UART/USRT 설명 + baudrate의 의미
- RF모듈 회로 제작(20분)
	- Bluetooth 모듈 분석(각 핀의 역할)
	- Bluetooth 통신을 위해 회로 연결
	- GND를 연결해야 하는 이유도 설명

### 메인 소스코드 작성(80분)
- Bluetooth 모듈의 AT mode에 대한 설명 (10분)
- AT mode로 동작시켜서 초기 설정 진행(10분)
- 아래의 순서로 소스 작성 (60분)
	- 컨트롤러 - Serial 모니터
	- Serail 모니터 - RC카
	- RC카 - 컨트롤러

### 동작 테스트 및 수정(40분 ~ 60분)
- 모든 소스를 업로드 한 뒤에 동작 테스트(10분)
- 임의의 과제 해결(10분): LED/CDS 등
- 헬렌이 원하는 대로 소스 변경: 모터 속도/추가 제어 버튼 등의 커스터마이징(20분 ~ 40분)