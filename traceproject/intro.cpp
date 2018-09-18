#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

//start by creating void trace_start(char* filename)
//This will emit the first character in the JSON File which is typically a '['
//JSON format is [ { string : value closing bracket , for the next line ex: [ {"name": "Asub", "cat": "PERF", "ph": "B", "pid": 22630, "tid": 22630, "ts": 829},
 //{"name": "Asub", "cat": "PERF", "ph": "E", "pid": 22630, "tid": 22630, "ts": 833}
//]

struct trace_contents //structure that holds the trace events
{
    string name;
    string category;
    string arguments;
    string ph;

    int ts;
    int pid;
    int tid;

};


void start_trace(char* filename);
void trace_event_start(char* name, char* categories, char* arguments);
void trace_event_end(char* arguments);
void trace_end();


trace_contents *trace_data;
ofstream myfile;
char filename[256];
int main ()
{
start_trace("testing1.txt");
cout<<"File name has been entered?"<<endl;
//test function to see if it works
trace_event_start((char*) "NAME", (char*) "CAT", (char*) "ARG");
return 0;

//create the classes and put the funtion in the class

}


void start_trace(char* filename)
{
        myfile.open(filename);
        if (myfile.fail())//checking to see if the file has opened or not
            {
                cout<< "File has failed to open"<<endl;
                exit(1);
            }
    myfile<< "[";
     trace_data= new trace_contents[10000];//allocate enough memory in order to hold 10k trace items
   int c=0;//counter for the indices
//need a condition in order to start the process
};
void trace_end()
{
    myfile<< "]";
    myfile.close();

};
void trace_event_start(char*name, char* categories, char* arguments)
    {

        int c=0;
        trace_data[c].name= (string)name;
        trace_data[c].category= (string)categories;
        trace_data[c].ph= "B";
        trace_data[c].pid= 1;
        trace_data[c].tid = 1;
        //need something to keep track of timer
        //for testing purposes
        //cout<< trace_data[c].name <<endl<< trace_data[c].category<< endl<<trace_data[c].ph<<endl<< trace_data[c].pid<<endl<<trace_data[c].tid<<endl;

    };
void trace_event_end(char* arguments)
{
};
