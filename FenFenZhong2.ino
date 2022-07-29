
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
  s1.write(90); s2.write(90); s3.write(90);
  delay(500);
  s4.write(90); s5.write(90); s6.write(90); 
  delay(500);
  s7.write(90); s8.write(90);
  delay(500);
  
  s5.write(150); delay(300); s5.write(90);
  s6.write(150); delay(300); s6.write(90);
  
  s7.write(30); delay(450); s7.write(90); delay(150);
  s7.write(30); delay(300); s7.write(90);
  s6.write(150); delay(750); s6.write(90); delay(150);
  s6.write(30); delay(150); s6.write(90); delay(150);
  s6.write(30); delay(150); s6.write(90); delay(150);
  
  s5.write(150); delay(450); s5.write(90); s5.write(90); delay(150);
  s5.write(150); delay(300); s5.write(90);
  s4.write(150); delay(600); s4.write(90); delay(300); 
  s4.write(30); delay(150); s4.write(90); delay(150);
  s4.write(30); delay(150); s4.write(90); delay(150);
  
  s3.write(150); delay(600); s3.write(90);
  s6.write(30); delay(300); s6.write(90);
  s5.write(30); delay(600); s5.write(90);
  s4.write(30); delay(450); s4.write(90); delay(150);
  s4.write(150); delay(900); s4.write(90); delay(300); 

  delay(1500);

  // 揸火箭，带你到
  s2.write(150); s3.write(150); s4.write(150); delay(600);
  s2.write(90); s3.write(90); s4.write(90); delay(300);

  s3.write(30); s4.write(30); s5.write(30); delay(600); delay(600);
  s3.write(90); s4.write(90); s5.write(90); delay(300);

  // 天空去，在太
  s1.write(30); s2.write(30); s3.write(30); delay(600); 
  s1.write(90); s2.write(90); s3.write(90); delay(300);
  
  s3.write(150); s4.write(150); s5.write(150); delay(600); delay(600); 
  s3.write(90); s4.write(90); s5.write(90); delay(300);
  
  // 空中两人住
  s2.write(150); s3.write(150); s4.write(150); delay(600); 
  s2.write(90); s3.write(90); s4.write(90); delay(300);
  
  s3.write(30); s4.write(30); s5.write(30); delay(900);
  s3.write(90); s4.write(90); s5.write(90);delay(300);
  
  s1.write(30); s2.write(30); s3.write(30); delay(900);
  s1.write(90); s2.write(90); s3.write(90); delay(300);

  // 活到
  delay(900); delay(600);

  // 一千岁，都一（揸火箭，带你到）
  s2.write(150); s3.write(150); s4.write(150); delay(600);
  s2.write(90); s3.write(90); s4.write(90); delay(300);

  s3.write(30); s4.write(30); s5.write(30); delay(600); delay(600);
  s3.write(90); s4.write(90); s5.write(90); delay(300);

  // 般心碎，有你在（天空去，在太）
  s1.write(30); s2.write(30); s3.write(30); delay(600); 
  s1.write(90); s2.write(90); s3.write(90); delay(300);
  
  s3.write(150); s4.write(150); s5.write(150); delay(600); delay(600); 
  s3.write(90); s4.write(90); s5.write(90); delay(300);
  
  // 身边多乐趣（空中两人住）
  s2.write(150); s3.write(150); s4.write(150); delay(600); 
  s2.write(90); s3.write(90); s4.write(90); delay(300);
  
  s3.write(30); s4.write(30); s5.write(30); delay(900);
  s3.write(90); s4.write(90); s5.write(90);delay(300);
  
  s1.write(30); s2.write(30); s3.write(30); delay(900);
  s1.write(90); s2.write(90); s3.write(90); delay(300);

  // 共你（活到）
  delay(900); delay(600);

  // 双双对，好得戚（揸火箭，带你到）
  s2.write(150); s3.write(150); s4.write(150); delay(600);
  s2.write(90); s3.write(90); s4.write(90); delay(300);

  s3.write(30); s4.write(30); s5.write(30); delay(600); delay(600);
  s3.write(90); s4.write(90); s5.write(90); delay(300);

  // 好得意，地裂（天空去，在太）
  s1.write(30); s2.write(30); s3.write(30); delay(600); 
  s1.write(90); s2.write(90); s3.write(90); delay(300);
  
  s3.write(150); s4.write(150); s5.write(150); delay(600); delay(600); 
  s3.write(90); s4.write(90); s5.write(90); delay(300);

  // 天崩当闲事
  s2.write(150); s3.write(150); s4.write(150); delay(600); 
  s2.write(90); s3.write(90); s4.write(90); delay(300);
  
  s3.write(30); s4.write(30); s5.write(30); delay(1200);
  s3.write(90); s4.write(90); s5.write(90);delay(300);
  
//  s1.write(30); s2.write(30); s3.write(30); delay(300);
//  s1.write(90); s2.write(90); s3.write(90); delay(300);

  // 就算
  s3.write(150); s4.write(150); s5.write(150); delay(1200); delay(600); 
  s3.write(90); s4.write(90); s5.write(90); delay(600);

  // 翻风雨, 只需
  s2.write(150); s3.write(150); s4.write(150); delay(600);
  s2.write(90); s3.write(90); s4.write(90); delay(300);

  s3.write(30); s4.write(30); s5.write(30); delay(600); delay(600);
  s3.write(90); s4.write(90); s5.write(90); delay(300);

  // 提到你，似见
  s1.write(30); s2.write(30); s3.write(30); delay(600); 
  s1.write(90); s2.write(90); s3.write(90); delay(300);

  s3.write(150); s4.write(150); s5.write(150); delay(1800);
  s3.write(90); s4.write(90); s5.write(90); delay(300);

  // 阳光千万里 F G C
  s2.write(150); s3.write(150); s4.write(150); delay(600);
  s2.write(90); s3.write(90); s4.write(90); delay(300);

  s3.write(30); s4.write(30); s5.write(30); delay(600);
  s3.write(90); s4.write(90); s5.write(90); delay(300);

  s1.write(30); s2.write(30); s3.write(30); delay(300); delay(2400); // 有了你
  s1.write(90); s2.write(90); s3.write(90); delay(300);

  // 开心的，mou都称
  s2.write(150); s3.write(150); s4.write(150); delay(600);
  s2.write(90); s3.write(90); s4.write(90); delay(300);

  s3.write(30); s4.write(30); s5.write(30); delay(600); delay(600);
  s3.write(90); s4.write(90); s5.write(90); delay(300);

  // 心满意，咸鱼白
  s1.write(30); s2.write(30); s3.write(30); delay(600); 
  s1.write(90); s2.write(90); s3.write(90); delay(300);
  
  s3.write(150); s4.write(150); s5.write(150); delay(600); delay(600); 
  s3.write(90); s4.write(90); s5.write(90); delay(300);

  // 菜也好好味
  s2.write(150); s3.write(150); s4.write(150); delay(600);
  s2.write(90); s3.write(90); s4.write(90); delay(300);

  s3.write(30); s4.write(30); s5.write(30); delay(1200);
  s3.write(90); s4.write(90); s5.write(90); delay(300);

//  s1.write(30); s2.write(30); s3.write(30); delay(300);
//  s1.write(90); s2.write(90); s3.write(90); delay(300);

  // 我与你
  s3.write(150); s4.write(150); s5.write(150); delay(1800);
  s3.write(90); s4.write(90); s5.write(90); delay(600);

  // 永共聚，分分钟
  s2.write(150); s3.write(150); s4.write(150); delay(600);
  s2.write(90); s3.write(90); s4.write(90); delay(300);

  s3.write(30); s4.write(30); s5.write(30); delay(600); delay(600);
  s3.write(90); s4.write(90); s5.write(90); delay(300);

  // 需要你，你似是
  s1.write(30); s2.write(30); s3.write(30); delay(600); 
  s1.write(90); s2.write(90); s3.write(90); delay(300);
  
  s3.write(150); s4.write(150); s5.write(150); delay(600); delay(600); 
  s3.write(90); s4.write(90); s5.write(90); delay(300);

  // 阳光空气
  s1.write(150); s2.write(150); s3.write(150); delay(600); 
  s1.write(90); s2.write(90); s2.write(90); delay(300);
  
  s3.write(30); s4.write(30); s5.write(30); delay(600);
  s3.write(90); s4.write(90); s5.write(90);delay(300);
  
  s1.write(30); s2.write(30); s3.write(30); delay(600); delay(1800);
  s1.write(90); s2.write(90); s3.write(90); delay(600);

  //
}
