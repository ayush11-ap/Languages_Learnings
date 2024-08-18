// package Day 3;
import java.util.Scanner;

class app {
    public static void main(String[] args) {
        Scanner sccr = new Scanner(System.in);
        int num = sccr.nextInt();
        int numCopy = num;
         System.out.println(num);

         int revNum = 0;
         while(num > 0){
            int newNum = num % 10;
            revNum = revNum * 10 + newNum;
            num = num / 10;
             System.out.println(newNum);
         }
         System.out.println(numCopy == revNum);
    }
}
