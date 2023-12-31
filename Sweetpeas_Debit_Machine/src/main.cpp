// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.2.3
// LVGL version: 8.2.0
// Project name: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"
#include <lvgl.h>
#include <TFT_eSPI.h>
#include <Adafruit_GFX.h>
#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN 20
#define SS_PIN 21 

MFRC522 mfrc522(SS_PIN, RST_PIN); // Create MFRC522 instance

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t *ui_Screen1;
lv_obj_t *ui_Image1;
lv_obj_t *ui_Image2;
lv_obj_t *ui_Label2;
lv_obj_t *ui_Label1;
lv_obj_t *ui_Label3;
lv_obj_t *ui_Panel2;
lv_obj_t *ui_Label8;
lv_obj_t *ui_Label7;
lv_obj_t *ui_Label10;
lv_obj_t *ui_Label5;
void ui_event_ImgButtonBread( lv_event_t * e);
lv_obj_t *ui_ImgButtonBread;
void ui_event_ImgButtonPay( lv_event_t * e);
lv_obj_t *ui_ImgButtonPay;
void ui_event_ImgButtonCupcake( lv_event_t * e);
lv_obj_t *ui_ImgButtonCupcake;
void ui_event_ImgButtonCrois( lv_event_t * e);
lv_obj_t *ui_ImgButtonCrois;
lv_obj_t *ui_Label6;
lv_obj_t *ui_TextArea2;
lv_obj_t *ui_TextArea1;
lv_obj_t *ui_TextArea3;
lv_obj_t *ui_TextArea4;
lv_obj_t *ui_Image6;
void ui_event_ImgButton3( lv_event_t * e);
lv_obj_t *ui_ImgButton3;


// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
void ui_event_Screen2( lv_event_t * e);
lv_obj_t *ui_Screen2;
lv_obj_t *ui_Panel3;
lv_obj_t *ui_Image4;


// SCREEN: ui_Screen3
void ui_Screen3_screen_init(void);
void ui_event_Screen3( lv_event_t * e);
lv_obj_t *ui_Screen3;
lv_obj_t *ui_Image5;
void ui_event_ImgButton2( lv_event_t * e);
lv_obj_t *ui_ImgButton2;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_cancel[1] = {&ui_img_cancel02_png};
const lv_img_dsc_t *ui_imgset_checkmark[1] = {&ui_img_checkmark02_png};
const lv_img_dsc_t *ui_imgset_croissant_[3] = {&ui_img_croissant_01_png, &ui_img_croissant_02_png, &ui_img_croissant_03_png};
const lv_img_dsc_t *ui_imgset_cupcake[1] = {&ui_img_cupcake02_png};
const lv_img_dsc_t *ui_imgset_g[3] = {&ui_img_g10_png, &ui_img_g3612_png, &ui_img_g3613_png};
const lv_img_dsc_t *ui_imgset_gauge[1] = {&ui_img_gauge03_png};
const lv_img_dsc_t *ui_imgset_544466547[1] = {&ui_img_589022287};
const lv_img_dsc_t *ui_imgset_rect[1] = {&ui_img_rect504_png};
const lv_img_dsc_t *ui_imgset_1027216419[1] = {&ui_img_1635345530};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_ImgButtonBread( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      addBread( e );
}
}
void ui_event_ImgButtonPay( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_Screen2, LV_SCR_LOAD_ANIM_NONE, 250, 0, &ui_Screen2_screen_init);
}
}
void ui_event_ImgButtonCupcake( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      addCupcake( e );
}
}
void ui_event_ImgButtonCrois( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_PRESSED) {
      addCrois( e );
}
}
void ui_event_ImgButton3( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      resetMCU( e );
}
}
void ui_event_Screen2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_SCREEN_LOADED) {
      cardRead( e );
}
}
void ui_event_Screen3( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_SCREEN_LOADED) {
      scrTimer( e );
}
}
void ui_event_ImgButton2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      resetMCU( e );
}
}

///////////////////// SCREENS ////////////////////

void ui_init( void )
{LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Screen1_screen_init();
ui_Screen2_screen_init();
ui_Screen3_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_Screen1);
}

/*********************************************************************/
static const uint16_t screenWidth  = 240;
static const uint16_t screenHeight = 320;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[ screenWidth * screenHeight / 10 ];

TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); /* TFT instance */

#if LV_USE_LOG != 0
/* Serial debugging */
void my_print(const char * buf)
{
    Serial.printf(buf);
    Serial.flush();
}
#endif

/* Display flushing */
void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p )
{
    uint32_t w = ( area->x2 - area->x1 + 1 );
    uint32_t h = ( area->y2 - area->y1 + 1 );

    tft.startWrite();
    tft.setAddrWindow( area->x1, area->y1, w, h );
    tft.pushColors( ( uint16_t * )&color_p->full, w * h, true );
    tft.endWrite();

    lv_disp_flush_ready( disp );
}

/*Read the touchpad*/
void my_touchpad_read( lv_indev_drv_t * indev_driver, lv_indev_data_t * data )
{
    uint16_t touchX = 0, touchY = 0;

    bool touched = tft.getTouch( &touchX, &touchY, 600 );

    if( !touched )
    {
        data->state = LV_INDEV_STATE_REL;
    }
    else
    {
        data->state = LV_INDEV_STATE_PR;

        /*Set the coordinates*/
        data->point.x = touchX;
        data->point.y = touchY;

        Serial.print( "Data x " );
        Serial.println( touchX );

        Serial.print( "Data y " );
        Serial.println( touchY );
    }
}

void setup()
{
    // Serial.begin(115200); // Initialize serial communications with the PC
    // while (!Serial); // Do nothing if no serial port is opened (added for Arduinos based on ATMEGA32U4)
    SPI.begin(); // Init SPI bus
    // mfrc522.PCD_Init(); // Init MFRC522
    // mfrc522.PCD_DumpVersionToSerial(); // Show details of PCD - MFRC522 Card Reader details
    // Serial.println(F("Scan PICC to see UID, SAK, type, and data blocks..."));   

    String LVGL_Arduino = "Hello Arduino! ";
    LVGL_Arduino += String('V') + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();

    // Serial.println( LVGL_Arduino );
    // Serial.println( "I am LVGL_Arduino" );

    lv_init();

    #if LV_USE_LOG != 0
        lv_log_register_print_cb( my_print ); /* register print function for debugging */
    #endif

    tft.begin();          /* TFT init */
    tft.setRotation( 0 ); /* Landscape orientation, flipped */
    
     uint16_t calData[5] = { 290, 3446, 394, 3486, 4 };
    tft.setTouch(calData);

    lv_disp_draw_buf_init( &draw_buf, buf, NULL, screenWidth * screenHeight / 10 );

    /*Initialize the display*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init( &disp_drv );
    /*Change the following line to your display resolution*/
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register( &disp_drv );

    /*Initialize the (dummy) input device driver*/
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init( &indev_drv );
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = my_touchpad_read;
    lv_indev_drv_register( &indev_drv );


    ui_init();

    // Serial.println( "Setup done" );

    mfrc522.PCD_Init();		// Init MFRC522

    ui_cardDetected = 0; 
    ui_resetMCU = 0;

	delay(4);				// Optional delay. Some board do need more time after init to be ready, see Readme
	mfrc522.PCD_DumpVersionToSerial();	// Show details of PCD - MFRC522 Card Reader details
	// Serial.println(F("Scan PICC to see UID, SAK, type, and data blocks..."));
}

void loop() {

    lv_timer_handler(); /* let the GUI do its work */
    delay(5);

    // // Look for new cards
    // if ( ! mfrc522.PICC_IsNewCardPresent()) {
    //   return;
    // }
    if(ui_cardDetected == 1)
    {
        if(mfrc522.PICC_IsNewCardPresent())
        {
             lv_scr_load(ui_Screen3);   
            //  delay(10000);
            //  return;
        }
        // delay(10000);
        // ESP.restart();
    }

    if(ui_resetMCU == 1)
    {
        ESP.restart();
    }
    
    // Dump debug info about the card; PICC_HaltA() is automatically called
    // mfrc522.PICC_DumpToSerial(&(mfrc522.uid));
}

