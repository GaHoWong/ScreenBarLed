#ifndef __WS2812B_H
#define __WS2812B_H

extern uint32_t WS2812B_Buf[];	//0xGGRRBB

void WS2812B_Init(void);
void WS2812B_ClearBuf(void);
void WS2812B_SetBuf(uint32_t Color);
void WS2812B_UpdateBuf(void);

#endif
