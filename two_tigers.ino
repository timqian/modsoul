// 两只老虎
#include <Servo.h> 

Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;
Servo s6;
Servo s7;
Servo s8;

void setup() {
  s1.attach(2); s2.attach(3); s3.attach(4); s4.attach(5);
  s5.attach(6); s6.attach(7); s7.attach(8); s8.attach(9);
}

void loop() {
  s4.write(90); s5.write(90); s3.write(90); s4.write(90);
  s5.write(90); s6.write(90); s7.write(90); s8.write(90);

  delay(1000);

  // 1 2 3 1
  s4.write(150);
  delay(600);

  s5.write(30); s4.write(90);
  delay(600);

  s5.write(150);
  delay(600);

  s4.write(150); s5.write(90);
  delay(300);

  s4.write(90);
  delay(300);

  // 1 2 3 1
  s4.write(150);
  delay(600);

  s5.write(30); s4.write(90);
  delay(600);

  s5.write(150);
  delay(600);

  s4.write(150); s5.write(90);
  delay(300);

  s4.write(90);
  delay(300);

  // 3 4 5 -
  s5.write(150);
  delay(600);
  s6.write(30); s5.write(90);
  delay(600);
  s6.write(155); // **
  delay(600);
  s6.write(90);
  delay(600);

  // 3 4 5 -
  s5.write(150);
  delay(600);
  s6.write(30); s5.write(90);
  delay(600);
  s6.write(155); // *
  delay(600);
  s6.write(90);
  delay(600);
 
  // 5 6 5 4 3 1
  s6.write(150);
  delay(300);
  s7.write(30); s6.write(90);
  delay(300);
  s6.write(150); s7.write(90);
  delay(300);
  s6.write(30);
  delay(300);

  s5.write(150); s6.write(90);
  delay(600);
  s4.write(150); s5.write(90);
  delay(600);
  s4.write(90);
  
  // 5 6 5 4 3 1
  s6.write(150);
  delay(300);
  s7.write(30); s6.write(90);
  delay(300);
  s6.write(150); s7.write(90);
  delay(300);
  s6.write(30);
  delay(300);

  s5.write(150); s6.write(90);
  delay(600);
  s4.write(150); s5.write(90);
  delay(600);
  s4.write(90);
  
  // 2 5 1
  s5.write(30);
  delay(600);
  s3.write(30); s5.write(90);
  delay(600);
  s4.write(150); s3.write(90);
  delay(600);
  s4.write(90);
  delay(600);
  
  // 2 5 1
  s5.write(30);
  delay(600);
  s3.write(30); s5.write(90);
  delay(600);
  s4.write(150); s3.write(90);
  delay(600);
  s4.write(90);
  delay(600);
  
}
