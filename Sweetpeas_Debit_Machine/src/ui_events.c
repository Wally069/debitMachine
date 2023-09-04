 
// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.2.3
// LVGL version: 8.2.0
// Project name: SquareLine_Project

#include "ui.h"

static float a = 0.00;
static float b = 0.00;
static float c = 0.00;
static float d = 0.00;
static float total = 0.00;

void addTotal(float d)
{
	const char *costTotal;
	char msgBuffer[20]; 
	 
	total = total + d;
	costTotal = dtostrf(total, 6, 2, msgBuffer);
	lv_textarea_set_text(ui_TextArea4, costTotal);
}


void addBread(lv_event_t * e)
{
	const char *costTotal;
	char msgBuffer[20];  
	a=a+4.00;
	costTotal = dtostrf(a, 6, 2, msgBuffer);
	lv_textarea_set_text(ui_TextArea3, costTotal);
	addTotal(4.00);
}

void addCupcake(lv_event_t * e)
{
	const char *costTotal;
	char msgBuffer[20];  
	b=b+3.00;
	costTotal = dtostrf(b, 6, 2, msgBuffer);
	lv_textarea_set_text(ui_TextArea1, costTotal);
	addTotal(3.00);
}

void addCrois(lv_event_t * e)
{
	const char *costTotal;
	char msgBuffer[20];  
	c=c+2.00;
	costTotal = dtostrf(c, 6, 2, msgBuffer);
	lv_textarea_set_text(ui_TextArea2, costTotal);
	addTotal(2.00);
}

void cardRead(lv_event_t * e)
{
	ui_cardDetected = 1;
}

void scrTimer(lv_event_t * e)
{
	
}

void resetMCU(lv_event_t * e)
{
	ui_resetMCU = 1;
}