#include <note.h>

#include <note.h>
onpu onpu;

void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // イントロ
  //----------------------------
  onpu.note(96,4,false);
  onpu.note(96,4,false);
  onpu.note(96,4,false);
  onpu.note(96,8,false);
  onpu.note(96,8,false);
  //-----------------------------
  onpu.note(96,8,false);
  onpu.note(96,8,false);
  onpu.note(96,8,false);
  onpu.note(96,8,false);
  onpu.note(96,4,true);
  onpu.note(96,8,false);
  //-----------------------------
  onpu.note(96,4,false);
  onpu.note(96,8,false);
  onpu.renpu(96,8,false,2,false);
  //-----------------------------
  onpu.rest(96,4);
  onpu.note(96,4,false);
  onpu.note(96,4,false);
  onpu.note(96,8,false);
  onpu.note(96,4,false);
  onpu.note(96,8,false);
  //-----------------------------
  onpu.note(96,4,false);
  onpu.rest(96,4);
  onpu.note(96,8,false);
  onpu.note(96,8,false);
  onpu.note(96,8,false);
  onpu.note(96,8,false);
  //-----------------------------
  onpu.note(96,2,false);
  onpu.rest(96,4);
  //Aメロ
  onpu.note(140,16,false);
  onpu.note(140,16,false);
  onpu.note(140,16,false);
  onpu.note(140,16,false);
  //-----------------------------
  onpu.note(140,2,false);
  onpu.rest(140,8);
  onpu.renpu(140,8,false,8,false);
  onpu.note(140,8,false);
  //-----------------------------
  onpu.note(140,4,true);
  onpu.rest(140,16);
  onpu.renpu(140,8,false,8,false);
  onpu.note(140,8,false);
  onpu.note(140,8,false);
  onpu.note(140,8,false);
  //-----------------------------
  onpu.rest(140,8);
  onpu.renpu(140,8,false,8,false);
  onpu.renpu(140,8,false,8,false);
  onpu.renpu(140,8,false,4,false);
  //-----------------------------
  onpu.note(140,4,true);
  onpu.rest(140,16);
  onpu.renpu(140,8,false,4,false);
  onpu.note(140,16,false);
  onpu.note(140,16,false);
  onpu.note(140,16,false);
  onpu.note(140,16,false);
  //-----------------------------
  onpu.note(140,2,false);
  onpu.rest(140,8);
  onpu.renpu(140,8,false,8,false);
  onpu.note(140,8,false);
  //-----------------------------
  onpu.note(140,4,true);
  onpu.renpu(140,8,false,8,false);
  onpu.note(140,8,false);
  onpu.note(140,8,false);
  onpu.note(140,8,false);
  //-----------------------------
  onpu.rest(140,8);
  onpu.renpu(140,8,false,8,false);
  onpu.renpu(140,8,false,8,false);
  onpu.renpu(140,8,false,4,false);
  //-----------------------------
  onpu.note(140,4,true);
  onpu.renpu(140,8,false,4,false);
  onpu.rest(140,8);
  onpu.note(140,16,false);
  onpu.note(140,16,false);
  //-----------------------------
  onpu.note(140,8,true);
  onpu.renpu(140,16,false,8,false);
  onpu.note(140,8,false);
  onpu.note(140,4,false);
  onpu.note(140,4,false);
  //-----------------------------楽譜１枚目終了
  onpu.note(140,4,true);
  onpu.note(140,8,true);
  onpu.note(140,4,false);
  onpu.rest(140,4);
  //-----------------------------
  onpu.note(140,8,true);
  onpu.note(140,16,false);
  onpu.note(140,8,true);
  onpu.note(140,8,false);
  onpu.note(140,4,false);
  onpu.note(140,4,false);
  //-----------------------------
  onpu.note(140,8,true);
  onpu.renpu(140,16,false,8,false);
  onpu.note(140,8,true);
  onpu.note(140,2,false);
  //-----------------------------
  onpu.note(140,8,true);
  onpu.note(140,8,true);
  onpu.note(140,8,false);
  onpu.note(140,16,false);
  onpu.renpu(140,16,false,2,false);
  onpu.renpu(140, 8,false,8,false);
  //-----------------------------
  onpu.note(140,8,true);
  onpu.note(140,8,true);
  onpu.note(140,8,false);
  onpu.note(140,16,false);
  onpu.renpu(140,16,false,4,true);
  onpu.note(140,8,false);
  //-----------------------------
  onpu.note(140,4,false);
  onpu.note(140,4,false);
  onpu.note(140,8,true);
  onpu.renpu(140, 16,false,8,false);
  onpu.note(140,8,false);
  //-----------------------------
  onpu.note(140,8,false);
  onpu.note(140,8,false);
  onpu.note(140,4,false);
  onpu.note(140,8,true);
  onpu.renpu(140, 16,false,8,false);
  onpu.note(140,8,false);
  //-----------------------------
  onpu.note(140,8,true);
  onpu.renpu(140, 16,false,8,false);
  onpu.note(140,8,false);
  onpu.note(140,4,false);
  onpu.note(140,4,false);
  //-----------------------------
  onpu.note(140,4,true);
  onpu.note(140,8,false);
  onpu.note(140,4,false);
  onpu.rest(140,4);
  //-----------------------------
  onpu.note(140,8,true);
  onpu.note(140,16,false);
  onpu.note(140,8,true);
  onpu.note(140,16,false);
  onpu.note(140,4,false);
  onpu.note(140,4,false);
  //-----------------------------
  onpu.note(140,8,true);
  onpu.note(140,16,false);
  onpu.note(140,8,false);
  onpu.note(140,8,false);
  onpu.note(140,4,true);
  onpu.renpu(140, 8,false,8,false);
  onpu.note(140,8,false);
  //-----------------------------
  onpu.note(140,4,false);
  onpu.note(140,4,false);
  onpu.note(140,4,false);
  onpu.note(140,4,false);
  //-----------------------------
  onpu.note(140,8,false);
  onpu.note(140,8,false);
  onpu.note(140,8,false);
  onpu.renpu(140, 8,false,4,false);
  onpu.rest(140,8);
  onpu.note(140,16,false);
  onpu.note(140,16,false);
  //-----------------------------
  onpu.note(140,4,false);
  onpu.note(140,8,true);
  onpu.note(140,8,true);
  onpu.rest(140,8);
  onpu.note(140,8,true);
  onpu.rest(140,8);
  onpu.renpu(140, 8,false,8,false);
  //-----------------------------
  onpu.note(140,8,false);
  onpu.note(140,4,false);
  onpu.rest(140,4);
  onpu.note(140,16,false);
  onpu.note(140,16,false);
  onpu.note(140,16,false);
  onpu.note(140,16,false);
  //-----------------------------楽譜２枚目終了
}
