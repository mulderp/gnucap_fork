
#include <iostream>
#include <linenoise.hpp>



int main(int argn, char ** argv) {

   const std::string path = "history.txt";

   // Setup completion words every time when a user types
   linenoise::SetCompletionCallback([](const char* editBuffer, std::vector<std::string>& completions) {
       if (editBuffer[0] == 'h') {
           completions.push_back("hello");
           completions.push_back("hello there");
       }
   });
   
   // Enable the multi-line mode
   linenoise::SetMultiLine(true);
   
   // Set max length of the history
   linenoise::SetHistoryMaxLen(4);
   
   // Load history
   linenoise::LoadHistory(path.c_str());
   
   while (true) {
       // Read line
       std::string line;
       auto quit = linenoise::Readline("hello> ", line);
   
       if (quit || line == "quit") {
           break;
       }
   
       std::cout <<  "echo: '" << line << "'" << std::endl;
   
       // Add text to history
       linenoise::AddHistory(line.c_str());
   }
   
   // Save history
   linenoise::SaveHistory(path.c_str());

}
