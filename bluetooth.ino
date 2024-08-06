#include <Servo.h>
#include <SoftwareSerial.h>


Servo myServo1;  // 서보모터 객체 생성
Servo myServo2;
Servo myServo3;
Servo myServo4;
Servo myServo5;
Servo myServo6;

void setup() {
  myServo1.attach(8); // 서보모터 신호선을 디지털 핀 8에 연결
  myServo2.attach(9);
  myServo3.attach(10);
  myServo4.attach(11);
  myServo5.attach(12);
  myServo6.attach(13); 
  Serial.begin(9600);
  Bluetooth.begin(9600);
}

void loop() {
  if (Bluetooth.available()) { //블루투스에서 정보가 들어오면 if문 실행
    char c = Bluetooth.read();
    Serial.write(c); //
    
    if(c=='1')
    {
      myServo1.write(0);   // 서보모터를 0도 쪽으로 3초간 이동
      delay(300);        
      myServo1.write(90); // 제자리에서 4초간 대기
      delay(400);        
      myServo1.write(180); // 서보모터를 180도 쪽으로 2초간 이동  
      delay(300);        
      myServo1.write(90);
      delay(400); 
      
    }
    else if(c=='2')
    {
      myServo2.write(0);   // 서보모터를 0도 쪽으로 3초간 이동
      delay(300);        
      myServo2.write(90); // 제자리에서 4초간 대기
      delay(400);        
      myServo2.write(180); // 서보모터를 180도 쪽으로 2초간 이동  
      delay(300);        
      myServo2.write(90);
      delay(400); 
      
    }
    else if(c=='3')
    {
      myServo3.write(0);   // 서보모터를 0도 쪽으로 3초간 이동
      delay(300);        
      myServo3.write(90); // 제자리에서 4초간 대기
      delay(400);        
      myServo3.write(180); // 서보모터를 180도 쪽으로 2초간 이동  
      delay(300);        
      myServo3.write(90);
      delay(400); 
      
    }
    else if(c=='4')
    {
      myServo4.write(0);   // 서보모터를 0도 쪽으로 3초간 이동
      delay(300);        
      myServo4.write(90); // 제자리에서 4초간 대기
      delay(400);        
      myServo4.write(180); // 서보모터를 180도 쪽으로 2초간 이동  
      delay(300);        
      myServo4.write(90);
      delay(400); 
      
    }
    else if(c=='5')
    {
      myServo5.write(0);   // 서보모터를 0도 쪽으로 3초간 이동
      delay(300);        
      myServo5.write(90); // 제자리에서 4초간 대기
      delay(400);        
      myServo5.write(180); // 서보모터를 180도 쪽으로 2초간 이동  
      delay(300);        
      myServo5.write(90);
      delay(400); 
      
    }
    else if(c=='6')
    {
      myServo6.write(0);   // 서보모터를 0도 쪽으로 3초간 이동
      delay(300);        
      myServo6.write(90); // 제자리에서 4초간 대기
      delay(400);        
      myServo6.write(180); // 서보모터를 180도 쪽으로 2초간 이동  
      delay(300);        
      myServo6.write(90);
      delay(400); 
      
    }
  
  }

}