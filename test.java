import java.util.*;
class MT extends Threads{
    public void run(){
        for(int i=0;i<5;i++){
            System.out.println(i);
            try{
                Thread.sleep(1000);
            }
            catch(InterruptedException e){

            }
            
        }
    }
}
class Test{
    public static void main(String args[]){
        MT obj=new MT();
        obj.start();
    }
}