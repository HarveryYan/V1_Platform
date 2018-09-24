 #ifndef  FCT_MSG_H 
 #define  FCT_MSG_H 
#if 0
typedef enum  fct_to_PC_msg_enum
{
    OP_FCT_TO_HMI_START,
    OP_FCT_SOURCE_1 ,
    OP_FCT_FUNCTION_2 ,
    OP_FCT_MEDIA_3 ,
    OP_FCT_RADIO_4 ,
    OP_FCT_BT_5 ,
    OP_FCT_GPS_6 ,
    OP_FCT_KEY_7 ,
    OP_FCT_TMPS_8 ,
    OP_FCT_VOLUME_SET_9 ,
    OP_FCT_FAN_TEST_10 ,
    OP_FCT_AUDIO_SET_11 ,
    OP_FCT_VIDEO_SET_12 ,
    OP_FCT_WIFI_LINK_13 ,
    OP_FCT_BUS_14 ,
    OP_FCT_CUR_STATE_15 ,
    OP_FCT_E_DOG_16 ,
    OP_FCT_SEQ_NUM_17 ,
    OP_FCT_SOFT_VER_18 ,
    OP_FCT_TO_HMI_END,
    //OP_FCT_ACK_127 = 127,
    //OP_FCT_PASSWORD_128 = 128 ,
}TO_PC_GLOBAL_ID;

#endif
//OP_FCT_SOURCE_1 
#define SOURCE_SW                1  /*1 Դ�����л�   */

//OP_FCT_FUNCTION_2 
#define FUNCTION_SW                1  /*2 �����л�   */

//OP_FCT_MEDIA_3 
#define MEDIA_CONTROL            1  /*��ý�����   */
#define SELECTED_SONG            1  /*3 ѡ��ָ������   */
#define MEDIA_51_TRACK_SW        2  /*5 5.1�����л�   */
#define MEDIA_SEEK                3  /*4 ý�����ع���   */

//OP_FCT_RADIO_4 
#define SELECTED_FM_OR_AM        1  /*6 ѡ��FM ��AM  */
#define SELECTED_PRESET            2  /*7 ѡ��Ԥ��̨ */
#define RADIO_SEEK                3  /*8 RADIO  ���ع��� */
#define SET_FREQ                    4  /*9 ����ָ��Ƶ��  */
#define RDS_SATE                    5  /*10 RDS״̬ */
#define RETURN_CUR_FREQ	6  /*11 ���ص�ǰƵ��  */
#define STEREO_MONO_SW		7  /*�������������л�  */
#define DX_LOC_SW			8  /* Զ  ��̨������̨�л�  */



//OP_FCT_BT_5 
#define BT_SW    1  /*12 ��Խ���  */
#define RET_MAC_ADDRESS            2  /*13 ����MAC��ַ  */
#define RET_LINK_STATE           3  /*15 ��������״̬   */
#define RET_WRITE_BT_NAME        4  /*14 ��д������������  */
#define RET_VER_ADD_NAME    5  /*16 ���������汾��MAC��ַ������   */
#define PLAY_MUICE_BT            6  /*17 �������ֲ���  */
#define DIAL_UP                     7  /*18 ����  */
#define RF_QUALITY                8  /*19 ����RF�ź�ǿ��   */

//OP_FCT_GPS_6 
#define LONGITUDE_LATITUDE        1  /*20 ��γ��   */
#define SIMULATE_NAV            2  /*21 ģ�⵼��   */
#define RET_INFO                    3  /*22 ���η����ź�ǿ��: ���ǿ���������FLASH��ռ��������
                                    ������ǰ�����ľ�γ��  */
#define RET_INERTIA_NAV_INFO    4  /*23 ���ع��Ե�����Ϣ:���ٶȣ����ٶ�   */
#define CHECK_TMC_INFO            5  /*24 ���TMC��Ϣ   */

//OP_FCT_KEY_7 
#define RET_KEY_VAL                1  /*25 ���ذ���ֵ(�����̣���尴��)   */


//OP_FCT_TMPS_8 
#define PARTNERSHIP_RET_INFO    1  /*26 ��Բ������ĸ�����������Ϣ */


//OP_FCT_VOLUME_SET_9 
#define SET_SYS_VOLUME            1  /*27 ����ϵͳ����   */

//OP_FCT_FAN_TEST_10 
#define FAN_SW                    1  /*28 ���ȿ���   */
#define FAN_GEAR                    2  /*29  ���ȵ�λ  */

//OP_FCT_AUDIO_SET_11 
#define AUDIO_SET                1  /*30 ������Ƶ��Ϣ   */

//OP_FCT_VIDEO_SET_12 
#define VIDEO_SET                1  /*31 ������Ƶ��Ϣ   */

//OP_FCT_WIFI_LINK_13 
#define WIFI_SW                1  /*WIFIģ�鿪 */
#define WIFI_LINK_AP        2  /*32 ���ӵ�AP   */
#define WIFI_SIGNAL_INTENSITY    3  /*33 �ź�ǿ��  */

//OP_FCT_BUS_14 
#define BUS_ILL                    1  /*35 ����ILL   */
#define BUS_ACC                    2  /*34 ����ACC   */
#define BUS_KEY                    3  /*36 ����KEY   */

//OP_FCT_CUR_STATE_15 
#define CUR_STATE                1  /*37 ���η��ص�ǰ����ֵ������ģʽ�������¶�   */

//OP_FCT_E_DOG_16 
#define E_DOG                    1  /*38 ���ӹ�   */

//OP_FCT_SEQ_NUM_17 
#define SEQ_NUM                    1  /*39 ���к�  */

//OP_FCT_SOFT_VER_18 
#define SOFT_OS_VER                1  /*OS ����汾*/
#define SOFT_BOOT_VER            2  /*BOOT ����汾*/
#define SOFT_APP_VER            3  /*APP ����汾*/
#define SOFT_MCU_VER            4  /*MCU ����汾*/
#define SOFT_MPEG_VER            5  /*MPEG ����汾*/
#define SOFT_MAP_VER            6  /*MAP ����汾*/
#define SOFT_DIVX_VER            7  /*DIVX ����汾*/
#define SOFT_UUID_VER            8  /*UUID ����汾*/
#define SOFT_WIFI_MAC_VER        9  /*WIFI_MAC ����汾*/


#define OP_FCT_ACK_127               127 
#define ACK_OK                        0  /*��Ϣ��ȷ   */
#define ACK_COM_NOT_DEFINE            1  /*��Ϣ����ָ���δ����   */
#define ACK_SUB_COM_NOT_DEFINE    2  /*��Ϣ����ָ���ӹ���δ����   */
#define ACK_CRC_ERROR                3  /*��Ϣ���� У��ͳ���  */
#define ACK_DATA_FRAME_ERROR        4  /*��Ϣ�������ݰ�����   */


#define OP_FCT_PASSWORD_128      128
#define FCT_START                1  /*FCT ��ʼ ����   */
#define FCT_OVER                    2  /*FCT ��������   */

#if 0
#define OMS_OP_FCT_SOURCE_1        ((HMS_FCT_PART<<8)|OP_FCT_SOURCE_1)
#define OMS_OP_FCT_FUNCTION_2         ((HMS_FCT_PART<<8)|OP_FCT_FUNCTION_2)
#define OMS_OP_FCT_MEDIA_3          ((HMS_FCT_PART<<8)|OP_FCT_MEDIA_3)
#define OMS_OP_FCT_RADIO_4          ((HMS_FCT_PART<<8)|OP_FCT_RADIO_4)
#define OMS_OP_FCT_BT_5              ((HMS_FCT_PART<<8)|OP_FCT_BT_5)
#define OMS_OP_FCT_GPS_6              ((HMS_FCT_PART<<8)|OP_FCT_GPS_6)
#define OMS_OP_FCT_KEY_7              ((HMS_FCT_PART<<8)|OP_FCT_KEY_7)
#define OMS_OP_FCT_TMPS_8              ((HMS_FCT_PART<<8)|OP_FCT_TMPS_8)
#define OMS_OP_FCT_VOLUME_SET_9      ((HMS_FCT_PART<<8)|OP_FCT_VOLUME_SET_9)
#define OMS_OP_FCT_FAN_TEST_10      ((HMS_FCT_PART<<8)|OP_FCT_FAN_TEST_10)
#define OMS_OP_FCT_AUDIO_SET_11      ((HMS_FCT_PART<<8)|OP_FCT_AUDIO_SET_11)
#define OMS_OP_FCT_VIDEO_SET_12      ((HMS_FCT_PART<<8)|OP_FCT_VIDEO_SET_12)
#define OMS_OP_FCT_WIFI_LINK_13      ((HMS_FCT_PART<<8)|OP_FCT_WIFI_LINK_13)
#define OMS_OP_FCT_BUS_14              ((HMS_FCT_PART<<8)|OP_FCT_BUS_14)
#define OMS_OP_FCT_CUR_STATE_15      ((HMS_FCT_PART<<8)|OP_FCT_CUR_STATE_15)
#define OMS_OP_FCT_E_DOG_16          ((HMS_FCT_PART<<8)|OP_FCT_E_DOG_16)
#define OMS_OP_FCT_SEQ_NUM_17      ((HMS_FCT_PART<<8)|OP_FCT_SEQ_NUM_17)
#define OMS_OP_FCT_SOFT_VER_18      ((HMS_FCT_PART<<8)|OP_FCT_SOFT_VER_18)
#endif
typedef  enum ApuFctComTXType
{
	APU_FCT_TEST_START = 0x01,
	APU_FCT_TEST_FINISHED,
	APU_FCT_LOAD_FACTORY,
}APU_FCT_COM_TX_TYPE;

typedef enum ApuFctFuncSw
{
	APU_FCT_FUNC_EXIT,
	APU_FCT_FUNC_ENTER,
}APU_FCT_FUNC_SW;

 enum 
{
	APU_FCT_FUNC_SWC,
	APU_FCT_FUNC_REVERSE,
	APU_FCT_FUNC_TPMS ,
	APU_FCT_FUNC_BT ,
	APU_FCT_FUNC_SET ,
	APU_FCT_FUNC_ONE_KEY ,
	APU_FCT_FUNC_VR ,
	APU_FCT_FUNC_RESET ,
	APU_FCT_FUNC_SCREEN_ADJ ,
	APU_FCT_FUNC_WIFI ,
	APU_FCT_FUNC_KEY ,
	APU_FCT_FUNC_E_DOG ,
	APU_FCT_FUNC_MAX ,
};



/* Դ�л�  */
#define MCU_TX_FCT_COM     1

/* �����л�  */
#define MCU_TX_FCT_FUNC_SWITCH     2

/* ��ý�����*/
#define MCU_TX_FCT_MEDIA_CTL          3
#define APU_FCT_SEL_TRACK			1
#define APU_FCT_2CH_AND_6CH_SW	2
#define APU_FCT_DVD_SCREEN_SCALE	3

/* BT ����*/
#define MCU_TX_FCT_BT_TEST          4
#define APU_FCT_BT_ON_OFF			0//Open or Close BT device;
#define APU_FCT_BT_REQ_MAC			1//Request BT Mac address;
#define APU_FCT_BT_REQ_BT_STATE	2 //Request BT state;
#define APU_FCT_BT_CHG_BT_NAME	3 //Change BT device name;
#define APU_FCT_BT_REQ_BT_NAME	4 //Request BT device name;
#define APU_FCT_BT_REQ_BT_VERSION	5 //Request BT software version;
#define APU_FCT_BT_DIAL_CALL		6//Send a phone number for dial;
#define APU_FCT_BT_REQ_RF_QUALITY	7//Request RF quality: emission and received signal strength.

/* GPS  ����*/
#define MCU_TX_FCT_GPS_TEST          5
#define APU_FCT_GPS_SIMULATA_ROUTE		0 //Simulate route;
#define APU_FCT_GPS_REQ_RET_QUALITY		1 //Request return GPS quality;
#define APU_FCT_GPS_REQ_RET_GYRO_INFO		2 //Request return gyro info;
#define APU_FCT_GPS_REQ_RET_TMC_INFO		3//Request return TMC info;

/* ��Ƶ����*/
#define MCU_TX_FCT_VIDEO_SET          7
#define APU_FCT_VIDEO_SET_BRIGHTNESS		1 //Simulate route;
#define APU_FCT_VIDEO_SET_CONTRAST		2 //Simulate route;
#define APU_FCT_VIDEO_SET_CHROMA			3 //Simulate route;

/* WIFI ����*/
#define MCU_TX_FCT_WIFI_TEST		8
#define APU_FCT_WIFI_ON_OFF		0 //Open or Close WiFi device;
#define APU_FCT_WIFI_LINK_AP		1//Inform Apu to connects a special AP;
#define APU_FCT_WIFI_REQ_ISSI		2 //Request WiFi signal strength.

/* ����汾*/
#define MCU_TX_FCT_REQ_VER		9
#define APU_FCT_VERSION_OS			0//OS version;
#define APU_FCT_VERSION_BOOT		1//Boot version;
#define APU_FCT_VERSION_APP		2//App version;
#define APU_FCT_VERSION_MPEG		3//MPEG version;
#define APU_FCT_VERSION_MAP		4//Navigation Map version;

/*FCT���� APU TX MCU*/

#define APU_TX_MCU_RESULT_BASIC	2
typedef enum
{
	FCT_TEST_SOURCE_SWITCH, //FCT test: source switch.
	FCT_TEST_SWC_STUDY_FUNC = 10, //FCT test: SWC Study function.
	FCT_TEST_REVERSE, //FCT test: Reverse function.
	FCT_TEST_SETUP_MENU, //FCT test: Setup function.
	FCT_TEST_VOICE_ASSIST, //FCT test: Voice Recognation function.
	FCT_TEST_BT_FUNC, //FCT test: Bluetooth function.
	FCT_TEST_WIFI_FUNC, //FCT test: Bluetooth function.
	FCT_TEST_ONE_KEY_NAVI, //FCT test: One Key Navi function.
	FCT_TEST_MEDIA_SEL_TRACK = 20, //FCT test: Media Player select track.
	FCT_TEST_2_6_CH_SW, //FCT test: DVD 2CH and 6CH switch.
	FCT_TEST_DVD_DISP_SW, //FCT test: DVD 16:9 and 4:3 switch.
	FCT_TEST_BRIGHTNESS_SET = 40, //FCT test: Screen brightness set.
	FCT_TEST_CONTRAST_SET, //FCT test: Screen contrast set.
	FCT_TEST_CHROMA_SET, //FCT test: Screen chroma set.
	FCT_TEST_TYPE_MAX,
} BASIC_TEST_TYPE;

typedef enum
{
	FCT_TEST_RESULT_FAIL, // 0 FCT test fail
	FCT_TEST_RESULT_SUCCESS, // 1 FCT test success.
	FCT_TEST_RESULT_WITH_DATA, // 2 FCT test with data type result.
	FCT_TEST_RESULT_UNSUPPORT, // 3 FCT test unspoort function.
	FCT_TEST_RESULT_MAX,
} FCT_TEST_RESULT_TYPE;

typedef enum
{
	FCT_BT_TEST_RESULT_MAC, //BT FCT test result: MAC Address.
	FCT_BT_TEST_RESULT_NAME, //BT FCT test result: Device Name.
	FCT_BT_TEST_RESULT_VERSION, //BT FCT test result: Software version.
	FCT_BT_TEST_RESULT_RF_QUALITY, //BT FCT test result: Signal Strength.
	FCT_BT_TEST_RESULT_MAX,
} FCT_BT_TEST_RESULT;

typedef enum
{
	FCT_GPS_TEST_RESULT_QUALITY, //GPS FCT test result: Receive quality.
	FCT_GPS_TEST_RESULT_GYRO, //GPS FCT test result: Current Gyro info.
	FCT_GPS_TEST_RESULT_TMC, //GPS FCT test result: Receive TMC info.
	FCT_GPS_TEST_RESULT_MAX,
} FCT_GPS_TEST_RESULT;
typedef enum
{
	FCT_WIFI_TEST_RESULT_QUALITY, //WiFi FCT test result: Receive quality.
	FCT_WIFI_TEST_RESULT_MAX,
} FCT_WIFI_TEST_RESULT;
typedef enum
{
	FCT_VERSION_OS, //OS version;
	FCT_VERSION_BOOT, //Boot version;
	FCT_VERSION_APP, //App version;
	FCT_VERSION_MPEG, //MPEG version;
	FCT_VERSION_MAP, //Navigation Map version;
}FCT_VERSION_TYPE;


#endif

