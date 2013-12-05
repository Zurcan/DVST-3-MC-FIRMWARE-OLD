#include <mega168p.h>

flash char Parameter_mask[40]={
                                0,                 //0 - ���� ������ �� ���������� 
                                1,                 //1 - ����������������� ��� �������������
                                2,                 //2 - ��� ��� ���������� �������������
                                3,                 //3 - ����������� ���������� ��������
                                4,                 //4 - ������� ������������� ������
                                5,                 //5 - ������� ������������� ������
                                6,                 //6 - ������� ��
                                7,                 //7 - ������� ����������� �����������
                                8,                 //8 - ����� ������� ���������� (� ���)
                                9,                 //9 - ����������������� ����� ���������� (� ���)
                                12,                //10 - ��� ������ ��������� ��������� ����������
                                13,                //11 - ��������� ��������� (F ���)
                                17,                //12 - ���(��)
                                21,                //13 - ������� ���������
                                25,                //14 - ����� ������
                                26,                //15 - ���, 8 �������� (� ���)
                                32,                //16 - ���������, 32 ������� (� ���)
                                56,                //17 - ���������� ����, 16 �������� (� ���)
                                68,                //18 - ���� (D ���)
                                71,                //19 - �������� �����  ��������������� ��������
                                74,                //20 - ������� ������ ������� (F ���)
                                78,                //21 - ������ ������ ������� (F ���)
                                82,                //22 - ����������� ��� (F ���)
                                86,                //23 - ��� ������ ����������
                                87,                //24 - ��� ������� ��������������
                                88,                //25 - ������� �������� ��������� (F ���)
                                92,                //26 - ������ ��������  ��������� (F ���)
                                96,                //27 - ��� ������ �� ������
                                97,                //28 - ��� ��������������� ������ �������������
                                98,                //29 - �������� ����� ����������
                                //101,             //30 - ���� �������� ������ (0- ��������, 1 - ��������� � ���)
                                101,               //30 - ������������� ��� (��) (F ���)
                                105,               //31 - ���������� ��� (��) ��� ��������� "0" ���
                                109,               //32 - ���������� ��� (��) ��� ��������� �����. �������� ���
                                113,               //33 - ��� ������� �������������� (������� 24 ����� ��������������)
                                117,               //34 - ������������� ������ ���������� 0-5 ���� (� ���)
                                123,               //35 - ������������� ������ ���������� 14-24 ���� (� ���)
                                134,               //36 - ������� ��� ������ � �������� ������
                                135,               //37 - �������� ��������� ������ (0-�����, 1 - ����)
                                136,               //38 - "254", ����������
                                137                //39 - ����� �� �������������� ���� �������, ��� �����, ����� ����������� ������� �� ���� �������� 
                               };

eeprom char Parameter_bank[138]={0x00,                                                  //0 - ���� ������ �� ���������� 
                                 0x56,                                                  //1 - ����������������� ��� �������������
                                 0xB3,                                                  //2 - ��� ��� ���������� �������������
                                 0x04,                                                  //3 - ����������� ���������� ��������
                                 0x01,                                                  //4 - ������� ������������� ������
                                 0x01,                                                  //5 - ������� ������������� ������
                                 0x01,                                                  //6 - ������� ��
                                 0x21,                                                  //7 - ������� ����������� �����������
                                 0x00,                                                  //8 - ����� ������� ���������� (� ���)
                                 0x00, 0xBF, 0xBC,                                      //9 - ����������������� ����� ���������� (� ���)
                                 0x6d,                                                  //10 - ��� ������ ��������� ��������� ����������
                                 0,0,0,0,                                               //11 - ��������� ��������� (F ���)
                                 0,0,0,0,                                               //12 - ���(��)
                                 0,0,0,0,                                               //13 - ������� ���������
                                 0x02,                                                  //14 - ����� ������
                                 0,0,0,0,0,0,                                           //15 - ���, 8 �������� (� ���)
                                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,       //16 - ���������, 32 ������� (� ���)
                                 0,0,0,0,0,0,0,0,0,0,0,0,                               //17 - ���������� ����, 16 �������� (� ���)
                                 0,0,0,                                                 //18 - ���� (D ���)
                                 0x01, 0x02, 0x03,                                      //19 - �������� �����  ��������������� ��������
                                 0x42, 0x48,0,0,                                        //20 - ������� ������ ������� (F ���)
                                 0,0,0,0,                                               //21 - ������ ������ ������� (F ���)
                                 0x3C, 0x23, 0xD7, 0x0A,                                //22 - ����������� ��� (F ���)
                                 0,                                                     //23 - ��� ������ ����������
                                 0,                                                     //24 - ��� ������� ��������������
                                 0x00,0x00,0xA0,0x41,                                   //25 - ������� �������� ��������� (F ���)
                                 0,0,0,0,                                               //26 - ������ ��������  ��������� (F ���)
                                 0xf0,                                                  //27 - ��� ������ �� ������
                                 0x0f,                                                  //28 - ��� ��������������� ������ �������������
                                 0x05, 0x00, 0x01,                                      //29 - �������� ����� �������
                                 //0,                                                   //30 - ���� �������� ������ (0- ��������, 1 - ��������� � ���)
                                 0,0,0,0,                                               //30 - ������������� ��� (��) (F ���)
                                 0x00,0x00,0x80,0x40,                                   //31 - ���������� ��� (��) ��� ��������� "0" ���
                                 0x00,0x00,0xA0,0x41,                                   //32 - ���������� ��� (��) ��� ��������� ���������� ���
                                 0,0,0,0,                                               //33 - ��� ������� �������������� (������� 24 ����� ��������������)
                                 0,0,0,0,0,0,                                           //34 - ������������� ������ ���������� 0-5 ���� (� ���)
                                 0,0,0,0,0,0,0,0,0,0,0,                                 //35 - ������������� ������ ���������� 14-24 ���� (� ���)
                                 0,                                                     //36 - ������� ��� ������ � �������� ������
                                 0,                                                     //37 - �������� ��������� ������ (0-�����, 1 - ����)
                                 0,                                                     //38 - "254", ����������
                                 0                                                      //39 - ����� �� �������������� ���� �������, ��� �����, ����� ����������� ������� �� ���� �������� 
                               };
eeprom char Parameter_defaults[138]={0x00,                                                  //0 - ���� ������ �� ���������� 
                                 0x56,                                                  //1 - ����������������� ��� �������������
                                 0xB3,                                                  //2 - ��� ��� ���������� �������������
                                 0x04,                                                  //3 - ����������� ���������� ��������
                                 0x01,                                                  //4 - ������� ������������� ������
                                 0x01,                                                  //5 - ������� ������������� ������
                                 0x01,                                                  //6 - ������� ��
                                 0x21,                                                  //7 - ������� ����������� �����������
                                 0x00,                                                  //8 - ����� ������� ���������� (� ���)
                                 0x00,  0xBF, 0xBC,                                      //9 - ����������������� ����� ���������� (� ���)
                                 0x6d,                                                  //10 - ��� ������ ��������� ��������� ����������
                                 0,0,0,0,                                               //11 - ��������� ��������� (F ���)
                                 0,0,0,0,                                               //12 - ���(��)
                                 0,0,0,0,                                               //13 - ������� ���������
                                 0x02,                                                  //14 - ����� ������
                                 0,0,0,0,0,0,                                           //15 - ���, 8 �������� (� ���)
                                 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,       //16 - ���������, 32 ������� (� ���)
                                 0,0,0,0,0,0,0,0,0,0,0,0,                               //17 - ���������� ����, 16 �������� (� ���)
                                 0,0,0,                                                 //18 - ���� (D ���)
                                 0x01, 0x02, 0x03,                                      //19 - �������� �����  ��������������� ��������
                                 0x42, 0x48,0,0,                                        //20 - ������� ������ ������� (F ���)
                                 0,0,0,0,                                               //21 - ������ ������ ������� (F ���)
                                 0x3C, 0x23, 0xD7, 0x0A,                                //22 - ����������� ��� (F ���)
                                 0,                                                     //23 - ��� ������ ����������
                                 0,                                                     //24 - ��� ������� ��������������
                                 0x00,0x00,0xA0,0x41,                                   //25 - ������� �������� ��������� (F ���)
                                 0,0,0,0,                                               //26 - ������ ��������  ��������� (F ���)
                                 0xf0,                                                  //27 - ��� ������ �� ������
                                 0x0f,                                                  //28 - ��� ��������������� ������ �������������
                                 0x15, 0x06, 0x0b,                                      //29 - �������� ����� �������
                                 //0,                                                   //30 - ���� �������� ������ (0- ��������, 1 - ��������� � ���)
                                 0,0,0,0,                                               //30 - ������������� ��� (��) (F ���)
                                 0x00,0x00,0x80,0x40,                                   //31 - ���������� ��� (��) ��� ��������� "0" ���
                                 0x00,0x00,0xA0,0x41,                                   //32 - ���������� ��� (��) ��� ��������� ���������� ���
                                 0,0,0,0,                                               //33 - ��� ������� �������������� (������� 24 ����� ��������������)
                                 0,0,0,0,0,0,                                           //34 - ������������� ������ ���������� 0-5 ���� (� ���)
                                 0,0,0,0,0,0,0,0,0,0,0,                                 //35 - ������������� ������ ���������� 14-24 ���� (� ���)
                                 0,                                                     //36 - ������� ��� ������ � �������� ������
                                 0,                                                     //37 - �������� ��������� ������ (0-�����, 1 - ����)
                                 0,                                                     //38 - "254", ����������
                                 0                                                      //39 - ����� �� �������������� ���� �������, ��� �����, ����� ����������� ������� �� ���� ��������
                               };                                 
flash char Command_mask [31][25]=
{                       {38, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9},                                                             //0 - ������� ���������� �������������
                        {10, 11, 11, 11, 11},                                                                              //1 - ������� ��������� ����������
                        {12, 12, 12, 12, 13, 13, 13, 13},                                                                  //2 - ������� ��� � ������� ���������
                        {12, 12, 12, 12, 10, 13, 13, 13, 13},                                                              //3 - ������� ��� � 4 ���������������� ������������ ����������
                        {14},                                                                                              //6 - �������� ����� ���������� � ���� HART
                        {38, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9},                                                             //11 - ������� ���������� �������������, ����������� � ����
                        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},  //12 - ������� ���������
                        {15, 15, 15, 15, 15, 15, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 18, 18, 18},              //13 - ������� ���, ����������, ����
                        {19, 19, 19, 10, 20, 20, 20, 20, 21, 21, 21, 21, 22, 22, 22, 22},                                  //14 - ������� ���������� � �������������� �������� ��������� ��������
                        {23, 24, 10, 25, 25, 25, 25, 26, 26, 26, 26, 39, 39, 39, 39, 27, 28},                              //15 - ������� �������� ����������
                        {29, 29, 29},                                                                                      //16 - ������� �������� �����
                        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},  //17 - �������� ���������
                        {15, 15, 15, 15, 15, 15, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 18, 18, 18},              //18 - �������� ���, ����������, ����
                        {29, 29, 29},                                                                                      //19 - �������� �������� �����
                        {10, 25, 25, 25, 25, 26, 26, 26, 26},                                                              //35 - �������� �������� ���������
                        {0},                                                                                               //36 - ���������� �������� �������� ������� ��������� (������� ������ SPAN)
                        {0},                                                                                               //37 - ���������� �������� ������� ������� ��������� (������� ������ ZERO)
                        {0},                                                                                               //38 - �������� ���� "������������ ����������"
                        //{30},                                                                                            //39 - �������� ������
                        {30},                                                                                              //40 - ����/����� �� ������ �������������� ����
                        {0},                                                                                               //41 - ��������� ��������������� (� ����� ������ - �������� HART)
                        {0},                                                                                               //42 - ��������� ����� �������� ����������
                        {0},                                                                                               //43 - ���������� 0 ��������� ����������
                        {10},                                                                                              //44 - �������� ������� ��������� ��������� ����������
                        {31,31,31},                                                                                        //45 - ���������� 0 ���
                        {32,32,32},                                                                                        //46 - ���������� ����������� �������� ���
                        {33},                                                                                              //47 - �������� ������� ��������������
                        {34, 34, 34, 34, 34, 34, 39, 39, 39, 39, 39, 39, 39, 39, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35},  //48 - ������� �������������� ������ ����������
                        {19, 19, 19},                                                                                      //49 - �������� �������� ����� ��������������� ��������
                        {3},                                                                                               //59 - �������� ���������� ��������
                        {36},                                                                                              //108 - �������� ����� ������� ��� ��������� ������
                        {37},                                                                                              //109 - �������� ��������� ������
};      

flash char Command_number [3][31] =    {
                                        {0,1,2,3,6,11,12,13,14,15,16,17,18,19,35,36,37,38,40,41,42,43,44,45,46,47,48,49,59,108,109},           //������ ������
                                        {0,0,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1},                                       //������� ������=0, ������� ������=1                         
                                        {0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},                                       //������� ���������� ����������� ��������� =0, ������������=1 
                                       } ;                                                                              