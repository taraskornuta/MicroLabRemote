void FreqOn (void)
{
	TCCR0A = (1<<FOC0A)						//�������������� ��������� ��������� ������ ��� ����������
	|(1<<CS00)|(0<<CS01)|(0<<CS02)			//������ ������������ �� ����������
	|(1<<COM0A0)|(0<<COM0A1)				//��������� ������ �������� �� ���������������
	|(0<<WGM00)|(1<<WGM01)|(0<<WGM02); 		//����� CTC (����� ��� ����������)

	TCNT0 = 0; 								//������ ������� ������� �������
	OCR0A = 111; 							//��� ���������� ����� ��������(111) � ������� �������� ����� ����� � ������������ ��2
}

void FreqOff (void)
{
	TCCR0A = 0;								//��������� ��������� 36000 Hz
	PORTB &= ~PB0;							//��������������� ����� ��������
}