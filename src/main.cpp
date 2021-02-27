#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"

//#include "driver/ledc.h"
//#include "esp_err.h"

#include "AC101.h"
#include "coresignal.h"

extern "C" {
    void app_main(void);
}


void app_main() {
    
    //Installation of the Audio-Codec AC101
    AC101 ac101;
    ac101.begin();
    ac101.ac101_pa_power(0);
    ac101.SetVolumeHeadphone(60);

    // Audio Effect /////////////////////////////
    // Usage:       /////////////////////////////
    // FaustSawtooth faustSawtooth(SR,BS);  
    // faustSawtooth.start();
    
    int SR = 48000;
    int BS = 16;
    coresignal _coresignal(SR,BS);  
    _coresignal.start();
    printf("Starting...");
    

    // loop for periodic Task ///////////////////
    // for example: query Buttons, set Params ///
    // Usage: ///////////////////////////////////
    //faustSawtooth.setParamValue("freq",rand()%(2000-50 + 1) + 50); 

    while(1) {
        for (int i = 2000; i < 20000; i = i + 500) {
        printf("looop... %i", i);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        _coresignal.setParamValue("own_delay", i);
        }
  }
}
