
#include <Servo.h>                  //library servo

Servo myservo;                      //deklarasi servo
int pinservo = 9;                   //pin yang digunakan nantinya
double pos = 0;                        //deklarasi posisi servo
int waktu =0;                       //waktu pengatur yang akan digunakan 

void setup() {
  myservo.attach(pinservo);         //identifikasi port servo yang digunakan pada pin 9 
}
void loop() {
  if(waktu <=30){                   //jika waktu < dari 10 maka
    set_servo(1);                  //setservo aka dipanggil dan parameter 10ms adalah waktu servo mencapai sudut berikutnya
    waktu ++;                       //waktu akan ditambah menjadi 1 dan terus bertambah 1
  }else if(waktu >=30){             //jika waktu lebih dari 10 >=10 maka 
   // myservo.write(0);
    delay(10000);                    //delay akan aktif selama 5 detik
    waktu = 0;                      //waktu diubah menjadi 0 kembali
  }
}
void set_servo(int dly){            //methode ini memiliki parameter dly
  for(pos = 0; pos<=180; pos+=0.2){    //untuk pos 0; posisi kecil atau = 180; maka posisi akan ditambah 1 
    myservo.write(pos);             //memerintahkan servo kearah posisi pos
    delay(dly);                     //jeda selama dly yang ditetapkan
    }
   for(pos = 180; pos>=0; pos-=0.2){   //untuk pos 180; posisi kecil atau = 0; maka posisi akan kurang 1 
    myservo.write(pos);             //memerintahkan servo kearah posisi pos
    delay(dly);                     //jeda selama dly yang ditetapkan    
    }
  }
