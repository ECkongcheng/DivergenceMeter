#ifndef __NIXIEAPP_H
#define __NIXIEAPP_H

typedef enum
{
	Mode_N_T,				//��ͨʱ����ʾģʽ
	Mode_D_T,				//������ʱ����ʾģʽ
	Mode_N_D,				//��ͨ������ʾģʽ
	Mode_D_D,				//������������ʾģʽ
	Mode_TEM,				//�¶���ʾģʽ
	Mode_D_M,				//��������ʾģʽ �ο� Steins;Gate
	
}ModeTypedef;

typedef enum
{
	Normal,
	Menu,						//���˵�
	TimeConfig,			//ʱ������
	DateConfig,			//��������
	
}StateTypedef;

typedef struct
{
	volatile uint8_t keymap;
	volatile uint16_t keytimes;
}KeyTypedef;

void Nixie_Setup(void); //Ӧ������
void Nixie_Loop(void);	//Ӧ����ѯ
void Nixie_Interrupt(void);//Ӧ���ж� ÿ1msһ��

#endif /*__NIXIE_H*/
