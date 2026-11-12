#include <stdio.h>
#include "led.h"
#include "wifi.h"

int main(void)
{
    led_init();
    wifi_init();

    while(1)
    {
        led_toggle();
        wifi_send_data();
    }
    return 0;
}
