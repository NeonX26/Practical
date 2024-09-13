public class Pract9{
    public static void main(String[] args){
        String s = "computer";
        String s1 = "computer";
        String s2 = new String("computer");
        String s3 = "Vishal";

        if(s.equals(s1)){
            System.out.println("Strings are equal ");
        } else {
            System.out.println("String are not equal");
        }

        if(s1==s2){
            System.out.println("String are equal");
        } else {
            System.out.println("Strings are not equal");
        }

        System.out.println("The character of third position " + s.charAt(2));
        System.out.println("The character of fifth position " + s.charAt(4));

        System.out.println("Append one string with another " + s2.concat("Language"));
        System.out.println("String append with s1 = " + s1 + "None");

        System.out.println(s3.equalsIgnoreCase("Vishal"));

        System.out.println(s3.length());
        System.out.println(s3.toUpperCase());
        System.out.println(s3.toLowerCase());

        System.out.println(s3.trim());

        System.out.println(s3.substring(3));
        System.out.println(s3.substring(3, 5));
    }
}