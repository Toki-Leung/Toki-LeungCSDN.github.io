package day24;

public class Student {
	//类由属性和方法组成
	
	//类的属性
	String name;
	String number;
	String sex;
	int age;
	
	//类的方法
	public void study()
	{
		System.out.println("正在学习");
	}
	public void play()
	{
		System.out.println("正在玩耍");
	}
	
	//类的实现,在main函数里
	public static void main(String[] args)
	{
		Student s=new Student();//引用
		s.name="梁土军";
		s.number="199520";
		s.sex="man";
		s.age=21;
		
		//调用类的属性
		System.out.println("姓名："+s.name+"  学号："+s.number+" 性别："+s.sex+" 年龄："+s.age);
		
		//调用类的方法
		s.study();
		s.play();
		
	}
	
}
