REM ----------------------------------------------------------------
echo ��ȡ���ļ�,������ԭ.c�����ļ���,��ʽ���£�ע�����·����e c h o��ע�����
echo ����������ʽ��Ҫ���ϴ˹ؼ���
echo copy ..\..\..\out\build\i2c.o        ..\..\src_user\i2c\i2c.o

REM --------------------------------------------------------------------
echo ɾ��������ļ�����ʽ���£�e c h o��ע�����
echo ����������ʽ��Ҫ���ϴ˹ؼ���

echo del  ..\..\src_user\i2c\i2c.c

REM --------------------------------------------------------------------
DEL ..\..\..\out\hex\McuAppUpdate.img


DEL ..\..\..\out\hex\app.hex
rename ..\..\..\out\hex\HQ10.hex app.hex 
..\..\lib\tool\McuAutoMakeUpdate.exe ..\..\lib\tool\boot.hex ..\..\..\out\hex\app.hex ..\..\..\out\hex

DEL ..\..\..\out\hex\Mcu_download.hex
rename ..\..\..\out\hex\McuBootApp.hex  Mcu_download.hex  


DEL ..\..\..\out\hex\McuBootApp.bin
DEL ..\..\..\out\hex\app.hex