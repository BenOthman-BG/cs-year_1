public class string {

    public static void main(String[] args) {

        String welcome  = "welcome othmn barmaja are you the greatest ";

        System.out.println(welcome.length());
        
        //yuruiruirruir
        
        System.out.println(welcome.charAt(33));

        System.out.println(welcome.indexOf("a"));

        System.out.println(welcome.indexOf("a" ,16));

        System.out.println(welcome.indexOf("a", 19));
        System.out.println(welcome.lastIndexOf("a"));

        String subtext = welcome.substring(20 ,30);

       System.out.println(subtext);
    }
    
}
