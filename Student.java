package day24;

public class Student {
	//�������Ժͷ������
	
	//�������
	String name;
	String number;
	String sex;
	int age;
	
	//��ķ���
	public void study()
	{
		System.out.println("����ѧϰ");
	}
	public void play()
	{
		System.out.println("������ˣ");
	}
	
	//���ʵ��,��main������
	public static void main(String[] args)
	{
		Student s=new Student();//����
		s.name="������";
		s.number="199520";
		s.sex="man";
		s.age=21;
		
		//�����������
		System.out.println("������"+s.name+"  ѧ�ţ�"+s.number+" �Ա�"+s.sex+" ���䣺"+s.age);
		
		//������ķ���
		s.study();
		s.play();
		
	}
	
}
