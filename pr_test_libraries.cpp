#include "pr_test_libraries.h"

#include "Arduino.h"

pr_test::pr_test(){
    this->data=data;
}
void pr_test::pr_printdata(int data){
    Serial.println(data);
}
