
#ifdef M5UNIFIED
#include <M5Unified.h>
#else
#include <Arduino.h>
#endif
#include "ui/lv_setup.h"
#include "ui/ui.h"

#include "Esp.h"

void setup() {
#ifdef M5UNIFIED
    auto cfg = M5.config();
    M5.begin(cfg);
#else
    Serial.begin(115200);
#endif
    while (!Serial) {
        yield();
    }
    Serial.printf("Hello, World!\n");
}

void loop() {
    delay(1000);
    Serial.printf("Hello, World loop!\n");
    Serial.printf("Total PSRAM=%u\n", ESP.getPsramSize());
    Serial.printf("Free PSRAM=%u\n", ESP.getFreePsram());
}
