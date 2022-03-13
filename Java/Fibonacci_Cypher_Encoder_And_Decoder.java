import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;
 
 
 
class Result {
 
   /*
    * Complete the 'fibCypher' function below.
    *
    * The function is expected to return a STRING.
    * The function accepts following parameters:
    *  1. CHARACTER option
    *  2. INTEGER num1
    *  3. INTEGER num2
    *  4. CHARACTER key
    *  5. STRING msg
    */
 
   public static String fibCypher(char option, int num1, int num2, char key, String msg) {
 
       String alphabetString = new String("abcdefghijklmnopqrstuvwxyz");
      ArrayList<Character> alphabet = new ArrayList<Character>();
      int temp = 0;
      String encodedMessage = new String("");
     
      for(int i = 0; i<alphabetString.length(); i++){
          alphabet.add(alphabetString.charAt(i));
      }
         
       int fibOff = 0;
  
       if (option == 'E')
       {
           if (msg.length()<=2)
           {
               fibOff = (alphabet.get((alphabet.indexOf(key) + num1) % 26));
               fibOff = fibOff * 3 + msg.charAt(0);
               encodedMessage+= fibOff;
               fibOff = 0;
               if (alphabet.indexOf(key)<(num2))
               fibOff = (alphabet.get(26 - (Math.abs((alphabet.indexOf(key)-num2) % 26))));
               else if (alphabet.indexOf(key)>=num2)
               fibOff = (alphabet.get((alphabet.indexOf(key) - num2) % 26));
               fibOff = fibOff * 3 + msg.charAt(1);
               encodedMessage+= " " + fibOff;
               fibOff=0;
              
               return encodedMessage;
           }
          
           else
           {
               fibOff = (alphabet.get((alphabet.indexOf(key) + num1) % 26));
               fibOff = fibOff * 3 + msg.charAt(0);
               encodedMessage+= fibOff;
               fibOff = 0;
               if (alphabet.indexOf(key)<(num2))
               fibOff = (alphabet.get(26 - (Math.abs((alphabet.indexOf(key)-num2) % 26))));
               else if (alphabet.indexOf(key)>=num2)
               fibOff = (alphabet.get((alphabet.indexOf(key) - num2) % 26));
               fibOff = fibOff * 3 + msg.charAt(1);
               encodedMessage+= " " + fibOff;
               fibOff=0;
               for (int j = 2; j<msg.length(); j++)
               {
                   temp = num2 % 26;
                   num2 = (num2%26) + (num1%26);
                   num1 = temp;
                  
                   if (j%2 == 0)
                   {
                       fibOff = (alphabet.get((alphabet.indexOf(key) + num2) % 26));
                       fibOff = fibOff * 3 + msg.charAt(j);
                       encodedMessage+= " " + fibOff;
                       fibOff=0;
                   }
                   else if (j%2 == 1)
                   {
                       if (alphabet.indexOf(key)<(num2))
                       {
                          if ((Math.abs((alphabet.indexOf(key)-num2) % 26)==0))
                          {
                              fibOff = alphabet.get(0);
                             
                          }
                         
                          else
                          fibOff = (alphabet.get(26 - (Math.abs((alphabet.indexOf(key)-num2) % 26))));
                         
                       }
                       else if (alphabet.indexOf(key)>=num2)
                       fibOff = (alphabet.get((alphabet.indexOf(key) - num2) % 26));
                       fibOff = fibOff * 3 + msg.charAt(j);
                       encodedMessage+= " " + fibOff;
                       fibOff=0;
                   }
               }
                return encodedMessage;
           }
              
              
              
       }
      
       else if (option == 'D')
       {
           String[] nums = msg.split(" ");
           String decodedMessage = new String("");
          
           fibOff = (alphabet.get((alphabet.indexOf(key) + num1) % 26));
               fibOff *=3;
               decodedMessage += (char)(Integer.parseInt(nums[0]) - fibOff);
               fibOff = 0;
               if (alphabet.indexOf(key)<(num2))
               fibOff = (alphabet.get(25 - (Math.abs((alphabet.indexOf(key)-num2) % 26))));
               else if (alphabet.indexOf(key)>=num2)
               fibOff = (alphabet.get((alphabet.indexOf(key) - num2) % 26));
               fibOff *= 3;
               decodedMessage += (char)(Integer.parseInt(nums[1]) - fibOff);
               fibOff=0;
               for (int k = 2; k<nums.length; k++)
               {
                   temp = num2 % 26;
                   num2 = (num2%26) + (num1%26);
                   num1 = temp;
                  
                   if (k%2 == 0)
                   {
                       fibOff = (alphabet.get((alphabet.indexOf(key) + num2) % 26));
                       fibOff *= 3;
                       decodedMessage += (char)(Integer.parseInt(nums[k]) - fibOff);
                       fibOff=0;
                   }
                   else if (k%2 == 1)
                   {
                       if (alphabet.indexOf(key)<(num2))
                       {
                          if ((Math.abs((alphabet.indexOf(key)-num2) % 26)==0))
                          {
                              fibOff = alphabet.get(0);
                             
                          }
                         
                          else
                          fibOff = (alphabet.get(26 - (Math.abs((alphabet.indexOf(key)-num2) % 26))));
                         
                       }
                       else if (alphabet.indexOf(key)>=num2)
                       fibOff = (alphabet.get((alphabet.indexOf(key) - num2) % 26));
                       fibOff *= 3;
                       decodedMessage += (char)(Integer.parseInt(nums[k]) - fibOff);
                       fibOff=0;
                   }
               }
           return decodedMessage;
       }   
      
           else
           return null;
       }
      
   }
 
 
public class Solution {
   public static void main(String[] args) throws IOException {
       BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
       BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));
 
       char option = bufferedReader.readLine().charAt(0);
 
       int num1 = Integer.parseInt(bufferedReader.readLine().trim());
 
       int num2 = Integer.parseInt(bufferedReader.readLine().trim());
 
       char key = bufferedReader.readLine().charAt(0);
 
       String msg = bufferedReader.readLine();
 
       String result = Result.fibCypher(option, num1, num2, key, msg);
 
       bufferedWriter.write(result);
       bufferedWriter.newLine();
 
       bufferedReader.close();
       bufferedWriter.close();
   }
}
 

