import java.util.*;
public class Formula
{
    void formula(int a,int b)
    {
        System.out.println("The area of a rectangle is "+(a*b));
    }
    void formula(int a)
    {
        System.out.println("The area of a sqaure is "+(a*a));
    }
    void formula(double a)
    {
        System.out.println("The area of circle is "+(3.14*a*a));
    }
    void formula(int a,int b,int c)
    {
        int d=(b*b)-4*a*c;
        double r1=(-b+d)/2*a;
        double r2=(-b-d)/2*a;
        System.out.println("The value of the quadratic equation is "+r1+" and "+r2);
    }
}
class Area extends formula
{
    public static void main(Strings args[])
    {
        System.out.println("The area of rectangle when a=5 and b=10.");
        formula ob = new formula(5,10);
        System.out.println(ob.formula(5,10));
    }
}