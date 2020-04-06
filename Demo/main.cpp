#include "mbed.h"

DigitalOut led1(LED3);
EventQueue queue(32*EVENTS_EVENT_SIZE);

void blue_LED_toggle(){

    led1 = !led1;

}

int main() {

    // events are simple callbacks

    queue.call_every(500, blue_LED_toggle);


    // events are executed by the dispatch method

    queue.dispatch();

}