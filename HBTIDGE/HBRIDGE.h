#pragma __HBRIDGE_H_

extern unsigned long HBRIDGE_u32ActiveDirection;

void HBRIDGE_vidSendPwm(unsigned char duty);
unsigned char HBRIDGE_u8CalcDuty(unsigned int spead);
void HBRIDGE_vidMain100ms(void);