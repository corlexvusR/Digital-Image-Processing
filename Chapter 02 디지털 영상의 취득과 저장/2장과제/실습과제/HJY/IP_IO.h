#pragma once

class CIP_IO
{
public:
    BITMAPINFOHEADER m_BMPheader;   // �Է� ���� ���� BMP ���
    UCHAR* m_BMPbuf;      // BMP �̹��� ��� ����
    UCHAR** m_Inputbuf;    // �Է� �̹��� ����
    UCHAR** m_Outputbuf;   // ��� �̹��� ����

    int m_Width;   // �̹��� �ʺ�
    int m_Height;  // �̹��� ����

public:
    CIP_IO(void);
    ~CIP_IO(void);

    void IO_MakeGrayImagetoBMP(UCHAR** imgbuf);       // Gray �� BMP ��ȯ
    void IO_MakeColorImagetoBMP(UCHAR* rgbbuf);
    UCHAR** memory_alloc2D(int width, int height);    // 2D �޸� �Ҵ�
};
