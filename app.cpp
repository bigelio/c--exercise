// C++ program to calculate the amount to be paid by the customers for Bicycle rental

#include<iostream>
#include<string>
int main(){

    // welcome message
    std::cout<<"\n\nWelcome to Bicycle rental application"<<std::endl;
    std::cout<<"\t -----------------"<<std::endl;
    std::cout<<"\t| Done by Gelio   |"<<std::endl;
    std::cout<<"\t -----------------"<<std::endl;
    // label
    start:
    // variables declaration
    int starting_time,ending_time,total_amount;
    // printing message on console
    std::cout<<"\tStarting time in hours: ";
    // reading user inputs
    std::cin>>starting_time;
    // printing message on console
    std::cout<<"\tEnding time in hours: ";
    // reading user inputs
    std::cin>>ending_time;
    // checking if starting time is between 0 and 23
    if(starting_time<0 || starting_time>23){
    std::cout<<"\nOoops!😲 Starting time should be between 0 and 23."<<std::endl;
    std::cout<<"\t -----------------"<<std::endl;
    std::cout<<"\t|   Try again     |"<<std::endl;
    std::cout<<"\t -----------------"<<std::endl;
    goto start;
    }

    // checking if ending time is between 0 and 24
    else if(ending_time < 0 || ending_time > 24){
    std::cout<<"\nOoops!😲 Ending time should be between 0 and 24."<<std::endl;
    std::cout<<"\t -----------------"<<std::endl;
    std::cout<<"\t|   Try again     |"<<std::endl;
    std::cout<<"\t -----------------"<<std::endl;
    goto start;
    }
    // checking if starting time is less than ending time
    else if(ending_time < starting_time || starting_time == ending_time){
    std::cout<<"\nOoops!😲 Starting time should be less than ending time."<<std::endl;
    std::cout<<"\t -----------------"<<std::endl;
    std::cout<<"\t|   Try again     |"<<std::endl;
    std::cout<<"\t -----------------"<<std::endl;
    goto start;
    }
    // This section is for determining total amount to be paid based on time intervals
    else{
        int range0_7=0,range7_14=0,range14_19=0,range19_21=0,range21_23=0;
        // range 0-7 in (hours)
        if(starting_time<=7){
            if(ending_time<=7 && starting_time>=0){
                range0_7=(ending_time-starting_time)*500;
            }
            if(ending_time>7){
             range0_7 = (7-starting_time)*500;
            }
        }
        // range 7-14 in (hours)
        if(starting_time<=14 ){
            if(ending_time<8){
                goto result;
            };
            if(ending_time<=14  && starting_time>7){
            range7_14=(ending_time-starting_time)*1000;
            }
            if(ending_time<=14  && starting_time<7){
            range7_14=(ending_time-7)*1000;
            }
            if(ending_time>14){
             range7_14 = (14-8)*1000;
            }
        }
        // range 14-19 in (hours)
        if(starting_time<=19 ){
            if(ending_time<14){
                goto result;
            };
            if(ending_time<=19  && starting_time>14){
            range14_19=(ending_time-starting_time)*1500;
            }

            if(ending_time<=19  && starting_time<14){
            range14_19=(ending_time-14)*1500;
            }
            if(ending_time>19){
             range14_19 = (19-14)*1500;
            }
        }
       // range 19-21 in (hours)
        if(starting_time<=21 ){
            if(ending_time<19){
                goto result;
            };
            if(ending_time<=21  && starting_time>19){
            range19_21=(ending_time-starting_time)*1000;
            }
            if(ending_time<=21  && starting_time<19){
            range19_21=(ending_time-19)*1000;
            }
            if(ending_time>21){
            range19_21 = (21-19)*1000;
            }
        }
        // range 21-23 in (hours)
        if(starting_time<=23 ){
            if(ending_time<21){
                goto result;
            };
             if(ending_time<=23 && starting_time>21){
                range21_23=(ending_time-starting_time)*500;
            }
             if(ending_time<=23 && starting_time<21){
                range21_23=(ending_time-21)*500;
            }
            if(ending_time>23){
             range21_23 = (23-21)*500;
            }
        }
        // label
        result:
        // calculating total amount
        total_amount=range0_7+range21_23+range7_14+range14_19+range19_21;

    }
    // showing amount to pay on console
    std::cout<<"\t ----------------------------------"<<std::endl;
    std::cout<<"\t| Amount to pay"<<" |\t"<<total_amount<<"RWF  |"<<std::endl;
    std::cout<<"\t ----------------------------------"<<std::endl;
    std::cout<<"\t|  😍 Thanks for working with us!  |"<<std::endl;
    std::cout<<"\t ----------------------------------"<<std::endl;
   return 0;
}
// end of program