
#define _CONFIG_C_
#include "..\config\inc.h"
////////////////////////////////////////////////////////////////////////////////
////������ ��������
/*

���� ��������ע������,��ͬ��������ĸ��д
     �� �����ʱ��:  TaskTimer
     g_  global   ȫ�� 
     l_  local    ����
     s_  static   ��̬
     
                  
     g_cX/g_iX/g_wX/g_bX  ȫ�� char/int(short)/long/bool�ͱ���
     g_uX/g_tX/g_eX/g_fx  ȫ�� union/struct/enum�ͱ���/�����ͱ���
     g_XX        ȫ��һ�����
     gc_XX       ȫ��const
     ga_XX       ȫ������
     gp_XX       ȫ��ָ��
     ����(lX_../sX_.. ͬgX_..)
     caXX/ctXX/wpXX..      �ֲ�������ǰ׺ ֱ���� ����+����

����: ����������ע������:��������Ⱥ��� TaskSchedule
     ������������:
     ģ������д+������ע����
     �� OS_TaskSchedule
     ������ǰ���ش�����ֵ����ǰ׺

�ṹ��������:  �ṹ����+��ע����    (��������ĸ��д)
�ṹ���Ͷ���:  �ṹ����+��ע�Ͷ�����(ȫ��д)
     eXX/tXX/uXX/fXX
     ��
     typedef enum{
      
     }eTASK_STATE;  enum�ڲ�����ȫ��д

     typedef struct{
     
     }tTASK_BLOCK;

     typedef union{
     
     }uTASK_BUFF;
     struct,union�ڲ��������þֲ�������������

     typedef (void)(*fUSER_FUNC)(void)

�궨������:
D_       ��ͷȫ��д   ������
_XXX_    XXȫ��д     ����ֵ
_XxxXxx  ����ĸ��д   �����궨��
XX_XX_XX ȫ��д�����ʷָ���
*/
////////////////////////////////////////////////////////////////////////////////

//--------------------------------0123456789ABCEF0123456789ABCDEF-------------------  
/*
#ifdef  D_AMP_TDA75610
const char ga_cSoftwareVer[] = "MC_V8_S401_V1.28A_160119_01\x0";//15B+'\0'
#else
const char ga_cSoftwareVer[] = "MC_V8_S401_V1.28C_160707_02\x0";//15B+'\0'
#endif
*/
#ifndef R103_H15T_OVERSEAS
#ifndef D_AMP_TDA7388
const char ga_cSoftwareVer[] = "MC_V8_R103-H15T_V0.41A_170502\x0";//15B+'\0'
#else
const char ga_cSoftwareVer[] = "MC_V8_R103-H15T_V0.41C_170502\x0";//15B+'\0' // use TDA7388
#endif
#else  //�����汾��
const char ga_cSoftwareVer[] = "MC_V8_R103-H15T_V0.41C_170502U\x0";//15B+'\0' // use TDA7388
#endif



#if _COMPILER_  == _IAR_EWV850_
#pragma    constseg = FLAG_VER
#elif _COMPILER_ == _RENESAS_CUBE_
    #pragma section const "iap_ver_const" begin
#endif
const char ga_cBootVer[8] = {'B','.','0','1','\0','\0','\0','\0'};
#if _COMPILER_ == _IAR_EWV850_
#pragma    constseg = default
#elif _COMPILER_ == _RENESAS_CUBE_
    #pragma section const "iap_ver_const" end
#endif


