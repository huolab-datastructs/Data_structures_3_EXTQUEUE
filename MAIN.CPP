#include "../../C/UTILITY.H"
#include "../../C/UTILITY.CPP"
#include "EXTQUEUE.H"
typedef char Queue_entry;

void main()
{
   cout << "Enter lines of text and the program duplicates them." << endl;
   cout << "Use Ctrl-Z (EOF) to terminate the program." << endl;
   while (cin.peek() != EOF) {
      Extended_queue q;
      char c; int ct;
      while ((c = cin.get()) != '\n')
         q.append(c);
      ct = q.size();
      while (q.serve_and_retrieve(c) == success)
         cout << c;
      cout << " : " << ct << endl;
   }
}
