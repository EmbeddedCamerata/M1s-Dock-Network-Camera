#include <stdbool.h>
#include <stdio.h>

/* FreeRTOS */
#include <FreeRTOS.h>
#include <task.h>

/* bl808 c906 std driver */
#include <bl808_glb.h>
#include <bl_cam.h>

#include <m1s_c906_xram_wifi.h>

void main()
{
    vTaskDelay(1);
    bl_cam_mipi_mjpeg_init();

    m1s_xram_wifi_init();
    
    // Change WIFI and IP into your's
    m1s_xram_wifi_connect("E2524 Pro Max", "25242524");
    m1s_xram_wifi_upload_stream("192.168.3.16", 8888);
    
}