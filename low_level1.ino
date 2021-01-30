#include "Keyboard.h"


const int Bt1 = 6;
const int Bt2 = 5;
const int Bt3 = 4;
const int Bt4 = 3; // 아르카나
const int Bt5 = 2;    // 레헬른

int count=0;
int buff_Count1 = 0;
int movegogo = 0;
int spot = 0;
int noWideAttack = 0;
int movecount = 0;
int sleeping = 0;
int bcounter  = 0;





int hyperdelay(int del)   {

int i = 0;
int x =  del/20;

for(i=1; i <= x ;  i++)
    superrandom20();

}




int superrandom(void)  {
int v = random(8);

 if(v == 0)   {
  Serial.print("sr = 0");

  
  Keyboard.press('f');
  delay(35);
  Keyboard.release('f');
  }

  if(v == 1)   {
Serial.print("sr = 1");
    
    Keyboard.press('l');
  delay(35);
  Keyboard.release('l');
  }

  if(v == 2)   {   
Serial.print("sr = 2");

    
  Keyboard.press('0');
  delay(35);
  Keyboard.release('0');
  }

 if(v == 3)   {
Serial.print("sr = 3");

  
 Keyboard.press('s');
  delay(35);
  Keyboard.release('s');
  }

  if(v == 4)   {
Serial.print("sr = 4");

    
  Keyboard.write(KEY_HOME);
  }

  if(v == 5)   {
  Keyboard.write(KEY_END);
  }

}




int superrandom20(void)  {
  
int v = random(25);

 if(v == 0)   {
 
  Keyboard.press('s');
  delay(20);
  Keyboard.release('s');
  }




  if(v == 1)   {

    Keyboard.press('l');
  delay(20);
  Keyboard.release('l');
  }



  if(v == 2)   {   

  Keyboard.press('0');
  delay(19);
  Keyboard.release('0');
  }

 if(v == 3)   {


  
 Keyboard.press('s');
  delay(19);
  Keyboard.release('s');
  }

  if(v == 4)   {

  Keyboard.write(KEY_HOME);
  delay(19);
  }

  if(v == 5)   {
  Keyboard.write(KEY_END);
  delay(19);
  }


 if(v == 6)   {
 
  Keyboard.press(',');
  delay(19);
  Keyboard.release(',');
  }



 if(v == 7)   {
 
  Keyboard.press('[');
  delay(19);
  Keyboard.release('[');
  }


 if(v == 8)   {
 
  Keyboard.press('z');
  delay(19);
  Keyboard.release('z');
  }




else delay(20);

}




int battlemage(void)   {


  
   Keyboard.press('d'); // 디버프오라  
   delay(85);   
   Keyboard.release('d');

    delay(5000);


     
   Keyboard.press('4'); // 다크오라  
   delay(85);   
   Keyboard.release('4');

    delay(12000);  

    Keyboard.press(KEY_RIGHT_ARROW); // 
   delay(85);   
   Keyboard.release(KEY_RIGHT_ARROW);

    bcounter++;

    if ( bcounter > 4 ) {
       Keyboard.press(KEY_DELETE); //  
       delay(45);   
       Keyboard.release(KEY_DELETE);
       hyperdelay(80);
       delay(40);

       bcounter = 0;
      
    }
  
    
 }









int widerandom(void)  {
int q = random(6);

 if(q == 0)   {
    Keyboard.write('q');
    Keyboard.write('w');
    Keyboard.write('r');
    Keyboard.write('e');
  }

  if(q == 1)   {
     Keyboard.write('r');
     Keyboard.write('w');
     Keyboard.write('q');
     Keyboard.write('e');
   
   
  }

  if(q == 2)   {
    
    Keyboard.write('e');
    Keyboard.write('q');
    Keyboard.write('r');
  }

if(q == 3)   {

   Keyboard.write('e');
   Keyboard.write('w');
   Keyboard.write('q');
   Keyboard.write('r');
  
    
  }

  if(q == 4)   {
  Keyboard.write('e');
  Keyboard.write('r');
   Keyboard.write('w');
    Keyboard.write('q');
  }

  if(q == 5)   {
    
  Keyboard.write('q');
  Keyboard.write('r');
    Keyboard.write('e');
    Keyboard.write('w');
  }

}











int buffrandom(void)  {
int t = random(6);

 if(t == 0)   {
  Keyboard.write('7');
   Keyboard.write('3');
    Keyboard.write('5');
  }

  if(t == 1)   {
     Keyboard.write('7');
  Keyboard.write('5');
   Keyboard.write('3');
   
  }

  if(t == 2)   {
    
  Keyboard.write('3');
    Keyboard.write('7');
    Keyboard.write('5');
  }

if(t == 3)   {

 Keyboard.write('5');
   Keyboard.write('7');
   Keyboard.write('3');
  
    
  }

  if(t == 4)   {
  Keyboard.write('5');
   Keyboard.write('3');
    Keyboard.write('7');
  }

  if(t == 5)   {
    
  Keyboard.write('3');
    Keyboard.write('5');
    Keyboard.write('7');
  }

}

/*   아르카나 이동기    */
int movingArcana(void) {


Keyboard.press(KEY_LEFT_ARROW);   //왼쪽을 바라보고

     hyperdelay(100);
     delay(50);
     Keyboard.releaseAll();

 hyperdelay(100);

 if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
      
 int s = random(2);
      

 hyperdelay(120);
delay(200);
      Keyboard.press('d'); // 스포트
   
   hyperdelay(20); delay(305);
    Keyboard.release('d');

//여기서 버프를 쓰자
       hyperdelay(1000);  // 스포트 실행 딜레이
       delay(205);

 if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
        



   Keyboard.press('x'); // 로프
   delay(275);
    Keyboard.release('x');

    
  delay(380);

Keyboard.press(KEY_LEFT_ARROW); 


  Keyboard.press('d'); // 스포트
  
   delay(305);
   
    Keyboard.release('d');
    
    delay(130);

 if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
      


  Keyboard.press('d'); // 스포트
 delay(225);   hyperdelay(80); 
   
    Keyboard.releaseAll();
    
    
    buffrandom();  buffrandom();
    delay(525); // 로프딜레이
    
 
    hyperdelay(350);
   
  
 if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
      

     Keyboard.press(KEY_LEFT_ARROW);   //왼쪽을 바라보고

     delay(80);
     Keyboard.releaseAll();
     delay(250);
    
      Keyboard.press(KEY_LEFT_ALT);      //더블점프
    delay(60);
   Keyboard.release(KEY_LEFT_ALT);
   
      delay(245);
      
     
      Keyboard.press(KEY_LEFT_ALT);
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);
   
     delay(205);  

      Keyboard.press(KEY_LEFT_ALT);      //트리플점프
    hyperdelay(20); delay(35);
   
   Keyboard.release(KEY_LEFT_ALT);

 Keyboard.releaseAll();  //방향키풀고
  /* 착지대기시간*/


   if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
      

  superrandom(); hyperdelay(60);
    delay(435);
    
   Keyboard.press('x'); // 로프
   delay(305);
    Keyboard.release('x');

    
    hyperdelay(220);

    delay(310); // 로프딜레


  if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
      
    
     
      Keyboard.press(KEY_LEFT_ALT);      //더블점프
  hyperdelay(20); delay(35);
   Keyboard.release(KEY_LEFT_ALT);
   
      delay(245);
       superrandom();
     
      Keyboard.press(KEY_LEFT_ALT);
   hyperdelay(20); delay(35);
   Keyboard.release(KEY_LEFT_ALT);

      Keyboard.press('d'); // 스포트십히면 곤란
  hyperdelay(80);  delay(25);
  
    Keyboard.release('d');

 // 스포트 실행 딜레이
      
     delay(295);  
    Keyboard.write('6');  
     hyperdelay(200);

      delay(880);  
      
 if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
      

  Keyboard.press(KEY_LEFT_ALT);      //더블점프
  hyperdelay(20); delay(35);
   Keyboard.release(KEY_LEFT_ALT);
   
      delay(245);
     
      Keyboard.press(KEY_LEFT_ALT);
      superrandom();
   delay(25);
   
   Keyboard.release(KEY_LEFT_ALT);
   
    if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
      
      hyperdelay(340);
  delay(1005);  
  
   
    
      Keyboard.press(KEY_LEFT_ALT);      //더블점프
   hyperdelay(20); delay(35);
   Keyboard.release(KEY_LEFT_ALT);
     hyperdelay(40);
      delay(205);
       
      Keyboard.press(KEY_LEFT_ALT);
  hyperdelay(20); delay(35);
   Keyboard.release(KEY_LEFT_ALT);

   buffrandom();  buffrandom();
 
     delay(1205);  
      hyperdelay(240);

      
 if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
      
    
      Keyboard.press(KEY_LEFT_ALT);      //더블점프
   hyperdelay(20); delay(35);
   Keyboard.release(KEY_LEFT_ALT);
   hyperdelay(40);
      delay(205);
       
      Keyboard.press(KEY_LEFT_ALT);
   hyperdelay(20); delay(35);
   Keyboard.release(KEY_LEFT_ALT);
    superrandom();
  
     delay(1355);  
      hyperdelay(160);

 if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;

      
  // 로프전방향전환
   Keyboard.press(KEY_RIGHT_ARROW);
        hyperdelay(20); delay(65);
        Keyboard.release(KEY_RIGHT_ARROW);
        
    Keyboard.press(' ');
    superrandom();
    delay(585);
    Keyboard.release(' ');     //드릴돌진
    delay(200);
  
  
  delay(400); // 드릴딜레이
  


       Keyboard.press('x'); // 로프
   delay(105);
   Keyboard.write(KEY_RIGHT_ARROW);
    Keyboard.release('x');

     
       Keyboard.press('x'); // 로프씹힘대비
   delay(55);
    Keyboard.release('x');
 hyperdelay(280);
    superrandom();    
    delay(1205); // 로프딜레이
    

     
 if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
      
   
 Keyboard.press(KEY_LEFT_ARROW);  // 로프후 메소먹기
    delay(185);  // 
     hyperdelay(80);
     
    Keyboard.release(KEY_LEFT_ARROW); 

       
   superrandom();
   delay(155); // 메소먹기 딜레이

    Keyboard.press(KEY_RIGHT_ARROW);  
      delay(235);   //다시 역방향으로
     Keyboard.press(' ');
    delay(605);
   Keyboard.release(' ');     //드릴돌진
   delay(200); // 드릴딜레이
    hyperdelay(160);
    
   delay(225);  // // 앞으로 떨어지고
    Keyboard.release(KEY_RIGHT_ARROW); 

    

 if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
      

  delay(355); //잠깐 대기후 메소줍고
   hyperdelay(120);


       Keyboard.press('x'); // 로프
   
    Keyboard.release('x');
delay(25);
  
      Keyboard.press(KEY_LEFT_ALT);      //더블점프
  hyperdelay(20); delay(35);
   Keyboard.release(KEY_LEFT_ALT);
   
     delay(245);
       superrandom();
      Keyboard.press(KEY_LEFT_ALT);
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);

    Keyboard.press('x'); // 로프
   delay(305);
    Keyboard.release('x');

    
   
     delay(955);  
      hyperdelay(260);

      
      Keyboard.press(KEY_LEFT_ALT);      //더블점프
  hyperdelay(20); delay(35);
   Keyboard.release(KEY_LEFT_ALT);
   hyperdelay(80);
     delay(165);
     
      Keyboard.press(KEY_LEFT_ALT);
  hyperdelay(20); delay(35);
   Keyboard.release(KEY_LEFT_ALT);
   
     delay(1005);  
      hyperdelay(260);

      
 if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
      


      
      Keyboard.press(KEY_LEFT_ALT);      //더블점프
   hyperdelay(20); delay(35);
   Keyboard.release(KEY_LEFT_ALT);
   
     delay(245);
       superrandom();
      Keyboard.press(KEY_LEFT_ALT);
  hyperdelay(20); delay(35);
   Keyboard.release(KEY_LEFT_ALT);

 if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
      
   
     delay(1205);  
      hyperdelay(200);
      

    
 Keyboard.press(KEY_RIGHT_ARROW);  // 앞으로 약간
    delay(655);  // 
    Keyboard.release(KEY_RIGHT_ARROW);

 if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
      


     Keyboard.press(KEY_DOWN_ARROW);    // 밑점
     delay(210);
     Keyboard.press(KEY_LEFT_ALT);
    delay(305);
   Keyboard.releaseAll(); 
 
     Keyboard.press(KEY_LEFT_ARROW);   //다시 진행방향
     delay(235);    //착지대기 
     Keyboard.release(KEY_LEFT_ARROW);

     
      superrandom();  superrandom();
   
     hyperdelay(100);
   superrandom();
  
}








/*  패파 사냥      */



int arcanaDongWit(int wideOver) {

  hyperdelay(60);
  delay(50);
  
   Keyboard.press(KEY_RIGHT_ARROW);  //방향은 왼쪽을 향하게
   delay(325); delay(random(200));
   Keyboard.releaseAll();  
    
     if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
      

 
     Keyboard.press(KEY_LEFT_ALT);
   delay(75);
   Keyboard.release(KEY_LEFT_ALT);

delay(135); delay(random(20));
   
     Keyboard.press(KEY_LEFT_ALT);
   delay(75);
   Keyboard.release(KEY_LEFT_ALT);


   hyperdelay(20);
     Keyboard.press(KEY_LEFT_ALT);
   delay(25);
   Keyboard.releaseAll(); // 점프키 3번 


     Keyboard.press(KEY_UP_ARROW);    // 길이 525 > 1000 
   
     delay(10);
     Keyboard.press('x');  //트랜지션
     hyperdelay(40); delay(140);
     Keyboard.releaseAll(); // 공격키 
     

     Keyboard.press(KEY_LEFT_CTRL);    // 길이 525 > 1000 
   delay(1100);
   Keyboard.release(KEY_LEFT_CTRL); // 공격키 

     Keyboard.press(KEY_RIGHT_ARROW);

     
     hyperdelay(80);
delay(575);  //점프 착지대기  




    if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
       
 
     Keyboard.press(KEY_LEFT_ALT);
   delay(75);
   Keyboard.release(KEY_LEFT_ALT);

delay(140); delay(random(20));
   
     Keyboard.press(KEY_LEFT_ALT);
   delay(75);
   Keyboard.release(KEY_LEFT_ALT);

   
     Keyboard.press(KEY_LEFT_ALT);
   delay(25);
   Keyboard.releaseAll(); // 점프키 3번 



 
     Keyboard.press(KEY_LEFT_CTRL);    // 길이 525 > 1000 
   delay(1100);
   Keyboard.release(KEY_LEFT_CTRL); // 공격키 

     Keyboard.press(KEY_RIGHT_ARROW);

     hyperdelay(80);
delay(505);  //점프 착지대기  




    if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;

 
     Keyboard.press(KEY_LEFT_ALT);
   delay(75);
   Keyboard.release(KEY_LEFT_ALT);

delay(140); delay(random(20));
   
     Keyboard.press(KEY_LEFT_ALT);
   delay(75);
   Keyboard.release(KEY_LEFT_ALT);

   
     Keyboard.press(KEY_LEFT_ALT);
   hyperdelay(20);
   Keyboard.releaseAll(); // 점프키 3번 


     widerandom();
     Keyboard.press(KEY_LEFT_CTRL);    // 길이 525 > 900 
   delay(900);
   Keyboard.release(KEY_LEFT_CTRL); // 공격키 

     Keyboard.press(KEY_RIGHT_ARROW);

     hyperdelay(80);
delay(575);  //점프 착지대기  

     Keyboard.releaseAll();



    if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;



     Keyboard.press(KEY_LEFT_ALT);
   delay(75);
   Keyboard.release(KEY_LEFT_ALT);

   delay(140); delay(random(20));
   
     Keyboard.press(KEY_LEFT_ALT);
   delay(75);
   Keyboard.release(KEY_LEFT_ALT);

   
     Keyboard.press(KEY_LEFT_ALT);
   hyperdelay(20);
   Keyboard.releaseAll(); // 점프키 3번 



     Keyboard.press(KEY_LEFT_CTRL);    // 길이 525 > 900 
   delay(900);
   Keyboard.release(KEY_LEFT_CTRL); // 공격키 

     Keyboard.press(KEY_RIGHT_ARROW);

     hyperdelay(80);
delay(500); delay(random(200));  //점프 착지대기 
Keyboard.write(KEY_DELETE); // 물약 패턴

     Keyboard.releaseAll();




 


/*            전환          */


Keyboard.press(KEY_LEFT_ARROW);  //방향은 왼쪽을 향하게
   delay(130); delay(random(100));
   Keyboard.releaseAll();  
    
     if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
      
  
     Keyboard.press(KEY_DOWN_ARROW);    // 길이 525 > 1000 
   
     delay(130);
     Keyboard.press(KEY_LEFT_ALT);  // 밑점
     hyperdelay(40); delay(140);
     Keyboard.releaseAll(); // 공격키 

   delay(200);

 
     Keyboard.press(KEY_LEFT_ALT);
   delay(75);
   Keyboard.release(KEY_LEFT_ALT);

delay(140); delay(random(20));
   
     Keyboard.press(KEY_LEFT_ALT);
   delay(75);
   Keyboard.release(KEY_LEFT_ALT);


   hyperdelay(20);
     Keyboard.press(KEY_LEFT_ALT);
   delay(25);
   Keyboard.releaseAll(); // 점프키 3번 
     

     widerandom();
    
     Keyboard.press(KEY_LEFT_CTRL);    // 길이 525 > 900 
   delay(900);
   Keyboard.release(KEY_LEFT_CTRL); // 공격키 
   
    Keyboard.press(KEY_LEFT_ARROW);

     hyperdelay(80);
delay(625);  //점프 착지대기  


    if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
      

 
     Keyboard.press(KEY_LEFT_ALT);
   delay(75);
   Keyboard.release(KEY_LEFT_ALT);

delay(140); delay(random(20));
   
     Keyboard.press(KEY_LEFT_ALT);
   delay(75);
   Keyboard.release(KEY_LEFT_ALT);


   hyperdelay(20);
     Keyboard.press(KEY_LEFT_ALT);
   delay(25);
   Keyboard.releaseAll(); // 점프키 3번 
     
    
   
    widerandom();
     Keyboard.press(KEY_LEFT_CTRL);    // 길이 525 > 900 
   delay(900);
   Keyboard.release(KEY_LEFT_CTRL); // 공격키 
   
   Keyboard.press(KEY_LEFT_ARROW);

     hyperdelay(80);
delay(625);  //점프 착지대기  





    if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
      

 
     Keyboard.press(KEY_LEFT_ALT);
   delay(75);
   Keyboard.release(KEY_LEFT_ALT);

delay(140); delay(random(20));
   
     Keyboard.press(KEY_LEFT_ALT);
   delay(75);
   Keyboard.release(KEY_LEFT_ALT);


   hyperdelay(20);
     Keyboard.press(KEY_LEFT_ALT);
   delay(25);
   Keyboard.releaseAll(); // 점프키 3번 
     

     
    
     Keyboard.press(KEY_LEFT_CTRL);    // 길이 525 > 900 
   delay(900);
   Keyboard.release(KEY_LEFT_CTRL); // 공격키 

    Keyboard.press(KEY_LEFT_ARROW);

     hyperdelay(80);
delay(625);  //점프 착지대기  


    if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;


 
     Keyboard.press(KEY_LEFT_ALT);
   delay(75);
   Keyboard.release(KEY_LEFT_ALT);

delay(140); delay(random(20));
   
     Keyboard.press(KEY_LEFT_ALT);
   delay(75);
   Keyboard.release(KEY_LEFT_ALT);


   hyperdelay(20);
     Keyboard.press(KEY_LEFT_ALT);
   delay(25);
   Keyboard.releaseAll(); // 점프키 3번 
     

    
    
     Keyboard.press(KEY_LEFT_CTRL);    // 길이 525 > 900 
   delay(900);
   Keyboard.release(KEY_LEFT_CTRL); // 공격키 

    Keyboard.press(KEY_LEFT_ARROW);

     hyperdelay(80);
delay(625);  //점프 착지대기  



/* 일정 루프후 버프 패턴*/

bcounter++;

if (bcounter > 2)
  {
    
    Keyboard.press('1');
    delay(30);
    Keyboard.releaseAll(); 
    delay(540);
    hyperdelay(100);
    delay(random(200));

    Keyboard.press('2');
    delay(30);
    Keyboard.releaseAll(); 
    delay(500);
    hyperdelay(200);
    delay(random(200));
    
    bcounter = 0;
    
    Keyboard.write(KEY_DELETE);  //물약
    
  }


       Keyboard.press(KEY_RIGHT_ARROW); // 고개를 돌려
   delay(45);
   
   Keyboard.releaseAll();

  

      if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;

delay(70);



}




int moving(void)  {


   delay(1000);
   Serial.print("exe moveing.. \n");

      Keyboard.press(KEY_RIGHT_ARROW);
   delay(85);
   Keyboard.release(KEY_RIGHT_ARROW);
   
   
      Keyboard.press(KEY_RIGHT_ARROW);
   delay(55);
   Keyboard.release(KEY_RIGHT_ARROW);

  

   
     Keyboard.press(KEY_LEFT_ALT);
   delay(105);
   Keyboard.release(KEY_LEFT_ALT);

delay(205);
   
     Keyboard.press(KEY_LEFT_ALT);
   delay(105);
   Keyboard.release(KEY_LEFT_ALT);

   
     Keyboard.press(KEY_LEFT_ALT);
   delay(105);
   Keyboard.release(KEY_LEFT_ALT); // 점프키 3번 


delay(1205);  //점프 착지대기  

      Keyboard.press(KEY_LEFT_ALT);
   delay(105);
   Keyboard.release(KEY_LEFT_ALT);
delay(205);
   
     Keyboard.press(KEY_LEFT_ALT);
   delay(105);
   Keyboard.release(KEY_LEFT_ALT);

   
     Keyboard.press(KEY_LEFT_ALT);
   delay(105);
   Keyboard.release(KEY_LEFT_ALT);   // 벽에 도착


 delay(1100);

    Keyboard.press(KEY_LEFT_ARROW);     //왼쪽으로 고개 돌리고
   delay(105);
   Keyboard.release(KEY_LEFT_ARROW);
   

   Keyboard.write('d');        //스포트라이트  
   delay(55);
      Keyboard.press('d'); // 스포트십히면 곤란
   delay(85);
    Keyboard.release('d');
   

   delay(1455);  // 스포트 실행 딜레이
   
   
  
       Keyboard.press('x'); // 로프
   delay(105);
    Keyboard.release('x');

    
       Keyboard.press('x'); // 로프씹힘대비
   delay(55);
    Keyboard.release('x');
  
   delay(725);  // 로프딜레이
 
   


       Keyboard.press(KEY_LEFT_ARROW); // 혹시모르니 고개 또돌리고
   delay(65);
   Keyboard.release(KEY_LEFT_ARROW);

  
  delay(505);
   
     Keyboard.press(KEY_LEFT_ALT);
   delay(105);
   Keyboard.release(KEY_LEFT_ALT);

  
     Keyboard.press(KEY_LEFT_ALT);
   delay(105);
   Keyboard.release(KEY_LEFT_ALT); // 점프키 2번 


delay(1005);  //점프 착지대기  


     Keyboard.press(' ');
   delay(605);
   Keyboard.release(' ');     //드릴돌진

  Keyboard.press(KEY_RIGHT_ARROW);  //메소패턴
delay(325);
 Keyboard.release(KEY_RIGHT_ARROW);
 

Keyboard.press(KEY_LEFT_ARROW);

 

     Keyboard.press(KEY_DOWN_ARROW);    // 밑점
     delay(210);
     Keyboard.press(KEY_LEFT_ALT);
   delay(305);
   Keyboard.releaseAll(); 
   delay(850);          //착지대기
 

   
     Keyboard.press(' ');
   delay(305);
   Keyboard.release(' ');     //드릴돌진


Keyboard.press(' ');
   delay(205);
   Keyboard.release(' ');     //드릴돌진 씹힘대비


delay(1425);  //드릴돌진 딜레이대기



 
    

   
     Keyboard.press(' ');
   delay(305);
   Keyboard.release(' ');     //드릴돌진 2회

   delay(1600);


   Keyboard.write('x');        //로프  
   delay(125);
  
   delay(1325);  // 로프딜레이
 

   Keyboard.press(KEY_LEFT_ALT);
   delay(125);
   Keyboard.release(KEY_LEFT_ALT);

delay(205);
   
     Keyboard.press(KEY_LEFT_ALT);
   delay(105);
   Keyboard.release(KEY_LEFT_ALT);

   
     Keyboard.press(KEY_LEFT_ALT);
   delay(105);
   Keyboard.release(KEY_LEFT_ALT); // 점프키 3번 


delay(1205);  //점프 착지대기  

   Keyboard.press(KEY_LEFT_ALT);
   delay(105);
   Keyboard.release(KEY_LEFT_ALT);

delay(205);
   
     Keyboard.press(KEY_LEFT_ALT);
   delay(105);
   Keyboard.release(KEY_LEFT_ALT);

   
     Keyboard.press(KEY_LEFT_ALT);
   delay(105);
   Keyboard.release(KEY_LEFT_ALT); // 점프키 3번 

    Keyboard.press(KEY_RIGHT_ARROW);   // 바닥 착지와 함께 고개돌리고
   delay(105);
   Keyboard.release(KEY_RIGHT_ARROW);

  Keyboard.write('d'); // 스포트를 안썼다면
   chaos(); chaos();

delay(1765);  //점프 착지대기  


   Keyboard.press(KEY_LEFT_ALT);
   delay(105);
   Keyboard.release(KEY_LEFT_ALT);

delay(205);
   
     Keyboard.press(KEY_LEFT_ALT);
   delay(105);
   Keyboard.release(KEY_LEFT_ALT);

   
     Keyboard.press(KEY_LEFT_ALT);
   delay(105);
   Keyboard.release(KEY_LEFT_ALT); // 점프키 3번 
   
   delay(1305);  //점프 착지대기 



   Keyboard.press(KEY_LEFT_ALT);
   delay(105);
   Keyboard.release(KEY_LEFT_ALT);

delay(205);
   
     Keyboard.press(KEY_LEFT_ALT);
   delay(105);
   Keyboard.release(KEY_LEFT_ALT);

   
     Keyboard.press(KEY_LEFT_ALT);
   delay(105);
   Keyboard.release(KEY_LEFT_ALT); // 점프키 3번 
   delay(1105);  //점프 착지대기 




    
     Keyboard.press(' ');
   delay(305);
   Keyboard.release(' ');     //드릴돌진

    superrandom(); 
   chaos();
   
    chaos();

   delay(1300);
   


}






int buff(void)  { 
  
   
    Serial.print("buff execute \n");

    Keyboard.press('3');
   delay(35);
   Keyboard.release('3');






}


int buff2(void)  {   //쓸심용 버프
  
   
    Serial.print("buff2 execute \n");

    Keyboard.press('7');
   delay(35);
   Keyboard.release('7');


}


int chaos(void)  { 
   /* pt  0 */
int v = random(8);

   
if (v == 0)  {
    Serial.print("chaos 0 execute \n");

   Keyboard.press('2');
   delay(35);
   Keyboard.release('2');

    
}
     /* pt  1 */
if (v == 1)  {
    Serial.print("chaos 1 execute \n");

    Keyboard.press('5');
   delay(35);
   Keyboard.release('5');

}
     /* pt  2 */
if (v == 2)  {
    Serial.print("chaos 2 execute \n");

    Keyboard.press('6');
   delay(35);
   Keyboard.release('6');

}
     /* pt  3 */
if (v == 3)  {
    Serial.print("chaos 3 execute \n");

    Keyboard.press(KEY_LEFT_SHIFT);
   delay(35);
   Keyboard.release(KEY_LEFT_SHIFT);

}
     /* pt  4 */
if (v == 4)  {
    Serial.print("chaos 4 execute \n");

    Keyboard.press('6');
   delay(25);
   Keyboard.release('6');

}
     /* pt  5 */
if (v == 5)  {
    Serial.print("chaos 5 execute \n");

     Keyboard.press('l');
   delay(35);
   Keyboard.release('l');


     Keyboard.press('f');
   delay(25);
   Keyboard.release('f');

}

        /* pt  6 */
if (v == 6)  {
    Serial.print("chaos 6 execute \n");

     Keyboard.press('0');
   delay(15);
   Keyboard.release('0');


     Keyboard.press(KEY_F5);
   delay(25);
   Keyboard.release(KEY_F5);
          }

if (v == 7)  {
    Serial.print("chaos 7 execute \n");

   Keyboard.press('8');
   delay(35);
   Keyboard.release('8');

      }



}



int gogo1(int r)
   {
int i=0;
  /* pt  0 */
if (r == 0)  {
    Serial.print("pt 0 execute \n");
    
   Keyboard.write(KEY_LEFT_CTRL);
     delay(1040);
     Keyboard.write(KEY_LEFT_CTRL);
     delay(1040);
     Keyboard.write(KEY_LEFT_CTRL);
     delay(1040);
     
     
  Keyboard.press(KEY_LEFT_ARROW);
  delay(85);
   Keyboard.release(KEY_LEFT_ARROW);
     return 0;
      
}


 /* pt  1 */
if (r == 1)  {
    Serial.print("pt 1 execute \n");
    
     Keyboard.press(KEY_LEFT_CTRL);
     delay(2805);
   Keyboard.release(KEY_LEFT_CTRL);



 Keyboard.press(KEY_LEFT_ARROW);
  delay(155);
   Keyboard.release(KEY_LEFT_ARROW);

   Keyboard.press(KEY_RIGHT_ARROW);
  delay(155);
   Keyboard.release(KEY_RIGHT_ARROW);
   
     return 0;
}

 /* pt  2 */
if (r == 2)  {
    Serial.print("pt 2 execute \n");

     Keyboard.write(KEY_LEFT_CTRL);
     delay(940);
     Keyboard.write(KEY_LEFT_CTRL);
     delay(1000);
     Keyboard.write(KEY_LEFT_CTRL);
     delay(1000);
     Keyboard.write(KEY_LEFT_CTRL);
     delay(1040);
     
   Keyboard.press(KEY_RIGHT_ARROW);
   delay(45);
   Keyboard.release(KEY_RIGHT_ARROW);
     return 0;
          }



 /* pt  3 */
if (r == 3)  {
    Serial.print("pt 3 execute \n");

     Keyboard.press(KEY_LEFT_ALT);
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);

    Keyboard.press(KEY_LEFT_CTRL);
   delay(55);
   Keyboard.release(KEY_LEFT_CTRL);

   
   delay(800);

   

      Keyboard.press(KEY_LEFT_ALT);
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);
   

    Keyboard.press(KEY_LEFT_CTRL);
   delay(55);
   Keyboard.release(KEY_LEFT_CTRL);


   delay(800);



      Keyboard.press(KEY_LEFT_ALT);
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);
   

    Keyboard.press(KEY_LEFT_CTRL);
   delay(55);
   Keyboard.release(KEY_LEFT_CTRL);


   delay(800);


      Keyboard.press(KEY_LEFT_ALT);
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);

    Keyboard.press(KEY_LEFT_CTRL);
   delay(55);
   Keyboard.release(KEY_LEFT_CTRL);


   
   delay(850);


  
   Keyboard.press(KEY_RIGHT_ARROW);
   delay(65);
   Keyboard.release(KEY_RIGHT_ARROW);
    delay(255);

   return 0;
     }
/* pt  4 */
if (r == 4)  {
    Serial.print("pt 4 execute \n");

   chaos();   
   Keyboard.press(KEY_LEFT_ARROW);  //먼저 왼편으로 이동
  
   delay(435);
   
    
  
      Keyboard.press(KEY_LEFT_ALT);      //더블점프
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);

     delay(225);
   
      Keyboard.press(KEY_LEFT_ALT);
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);

    delay(275);  

   Keyboard.press(KEY_LEFT_CTRL);    //점프중에 시커를 던진다
   delay(55);
   Keyboard.release(KEY_LEFT_CTRL);

    delay(855);  

  
     
      Keyboard.press(KEY_LEFT_ALT);      //더블점프
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);

     delay(225);
   
      Keyboard.press(KEY_LEFT_ALT);
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);

    delay(275);  

  
Keyboard.press('e');  // 슈퍼노바
delay(25);
Keyboard.release('e');

   Keyboard.press(KEY_LEFT_CTRL);    //점프중에 시커를 던진다
   
    
    delay(1355);  

// 반대편 전환 방향을 바꾸머 시커를 던진
   Keyboard.release(KEY_LEFT_CTRL);
   

     Keyboard.release(KEY_LEFT_ARROW);    //키를 놓는다
     chaos();chaos();    

    
Keyboard.press(KEY_RIGHT_ARROW);  //오른편으로 이동

   delay(305);
 
 delay(225);
 
      Keyboard.press(KEY_LEFT_ALT);      //더블점프
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);

     delay(225);
   
      Keyboard.press(KEY_LEFT_ALT);
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);

    delay(275);  

   Keyboard.press(KEY_LEFT_CTRL);    //점프중에 시커를 던진다
   delay(55);
   Keyboard.release(KEY_LEFT_CTRL);

    delay(855);  



    
      Keyboard.press(KEY_LEFT_ALT);      //더블점프
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);

     delay(225);
   
      Keyboard.press(KEY_LEFT_ALT);
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);

    delay(275);  

   Keyboard.press(KEY_LEFT_CTRL);    //점프중에 시커를 던진다
   delay(55);
   chaos();
   Keyboard.release(KEY_LEFT_CTRL);

    delay(855);  


   
    
      Keyboard.press(KEY_LEFT_ALT);      //더블점프
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);

     delay(225);
   
      Keyboard.press(KEY_LEFT_ALT);
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);

    delay(275);  

   Keyboard.press(KEY_LEFT_CTRL);    //점프중에 시커를 던진다
   delay(55);
   Keyboard.release(KEY_LEFT_CTRL);

    delay(855);  
 



      Keyboard.press(KEY_LEFT_ALT);      //더블점프
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);

     delay(225);
   
      Keyboard.press(KEY_LEFT_ALT);
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);

    delay(275);  

   Keyboard.press(KEY_LEFT_CTRL);    //점프중에 시커를 던진다
   delay(55);
   Keyboard.release(KEY_LEFT_CTRL);
    chaos(); 
    delay(845);  

 
      Keyboard.press(KEY_LEFT_ALT);      //더블점프
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);

     delay(225);
   
      Keyboard.press(KEY_LEFT_ALT);
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);

    delay(275);  

   Keyboard.press(KEY_LEFT_CTRL);    //점프중에 시커를 던진다
   delay(55);
   Keyboard.release(KEY_LEFT_CTRL);

    delay(455);  
    chaos();chaos();    chaos();

    
    delay(650); //벽으로 더 이동하라구
    
    
   Keyboard.release(KEY_RIGHT_ARROW);

   // 다시 반대편

Keyboard.press(KEY_LEFT_ARROW);  //다시 왼편으로 이동
   delay(55);

 Keyboard.press(KEY_LEFT_CTRL);    //방향을 바꾸며 시커
   delay(55);
   Keyboard.release(KEY_LEFT_CTRL);

   
  delay(850); //시커종료 딜레이
  
  
      Keyboard.press(KEY_LEFT_ALT);      //더블점프
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);

     delay(225);
   
      Keyboard.press(KEY_LEFT_ALT);
   delay(55);
   Keyboard.release(KEY_LEFT_ALT);

    delay(275);  
 
   Keyboard.press(KEY_LEFT_CTRL);    //점프중에 시커를 던진다
   delay(55);
   Keyboard.release(KEY_LEFT_CTRL);
  

    delay(855);  

   Keyboard.press(' ');    //점프중에 시커를 던진다
   delay(55);
   Keyboard.release(' ');

    delay(105);  
    chaos();
    chaos();
    
  Keyboard.release(KEY_LEFT_ARROW);
  
  chaos();


   
     return 0;
          }




}



void setup() {
  Serial.begin(9600);
  Keyboard.begin();

 
  
  pinMode(Bt1, INPUT);
  pinMode(Bt2, INPUT);
  pinMode(Bt3, INPUT);
  pinMode(Bt4, INPUT);
  pinMode(Bt5, INPUT);
  
  
}

void loop() {
             
int rand1;      //랜덤 변수
int rand2;
int rand3;      //랜덤 변수
int rand4;





  




   /* 아르카나 버튼      */
 if (digitalRead(Bt3)== HIGH)     //  버튼4가 하이가 되면 아르카나 실행
{
  Serial.print("pressed bt4 \n");
      
         arcanaDongWit(noWideAttack);  //자동사냥 
          movecount++;  // 패턴이 실행되면 행동카운트 1 증가
         noWideAttack = 0; // 광역기를 아낀다 이 변수가 1일땐 광역기를 쓰지 않는다
          Keyboard.releaseAll();
       

   
   if (movecount > 9999) {           // 3 번 행동시 스포트 씀 30 * 5 = 150초 + a  3번으로 바꾸기 테스트
       if (digitalRead(Bt3)== LOW)     //스위치 꺼지면 종료
        return 0;
        movingArcana(); // 이동합수
         Keyboard.releaseAll();

        
         noWideAttack = 1; // 이동기를 쓰고난 후에는 광역기를 아끼자
         movecount = 0; // 행동카운트 0으로 초기화
         sleeping++;
         
   }

          if (sleeping > 999)  {   //콤보킬 초기화 패턴
            hyperdelay(2000);  delay(17000);
             sleeping = 0;
             movecount++;
              
          }
}
          
 /* 배틀메이지
if (digitalRead(Bt1==LOW) ) {


       while (1)       { //디지털신호 버튼2가 로우일떄 반복
   battlemage();    //랜덤으로 패턴실행
}

            
   //Serial.print(rand1);  //난수들 시리얼에 찍는다

               }
              
*/

/* //레헬른 구두점령지 버튼
   
 if (digitalRead(Bt5)== HIGH)     // 디지털신호로 읽어온다 버튼5가 하이가 되면 실행
{
  while (digitalRead(Bt2)== LOW) { //디지털신호 버튼2가 로우일떄 반복ㅌ
    rand1= random(5);
    rand2= random(3);
   //Serial.print(rand1);  //난수들 시리얼에 찍는다

   gogo1(rand1);    //랜덤으로 패턴실행
  

      

  if (rand2 == 2) 
   chaos();

   
         
         buff_Count1++;  //쓸심버프패턴
if (rand1 == 4)  
  count = count + 15;

else count= count + 4 ;    // 버프패턴


if (buff_Count1 ==4 )      //쓸심은 패턴이 4번 실행될시 발동
{
  buff2();
  buff_Count1 = 0;
       }




if (count >= 14) {       //버프는 패턴이 14초이상 실행될시 발동 

   movegogo++;
   
          buff();
          count = 0;
               }



               if (movegogo == 8 )  {   // 무빙은 버프가 10번 실행시 실시
                moving();
                movegogo = 0;
               
               }

               
}
  
   
 
  }  
  */

  
}
