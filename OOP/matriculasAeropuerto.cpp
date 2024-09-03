#include <iostream>
#include <fstream>

#define FILE_DIR "./data.txt"
#define BUFFER_SIZE   (256u)
#define LIST_SIZE     (16u)

std::string CountryList[LIST_SIZE] = {0};
unsigned char CountryNum = 0;
unsigned int ContactList[LIST_SIZE] = {0};

std::string PrefixList[LIST_SIZE] = {
  "D","PP","CF","A7","CC","B","OY","HC","A6","EC","N","PK", "JA","XA","9V","HS"
};

void ProcessLine(std::string &line)
{
 for (int i = 0; i < LIST_SIZE; i++)
 {
   int size = PrefixList[i].length();
   if (line.substr(0,size) == PrefixList[i])
   {
     ContactList[i]++;
   }
 }

}

bool isCountryExist(std::string flight)
{
  unsigned int count = 0;
  bool isExist = false;

  for(count  = 0; count < LIST_SIZE; count++)
  {
    if(strcmp(PrefixList[count]))
    {
      isExist = true;
      break;
    }
  }

  return isExist;
}




void ProcessFile(std::string &filePath)
{
  std::ifstream inputData(filePath);
  std::string line;
  unsigned char count = 0;

  while (std::getline(inputData,line))
  {
    // Reads line by line
    if (line.length() > 1){
       ProcessLine(line);
    }
  }

}

int main()
{
  char FileBuffer[BUFFER_SIZE] = {0};

  ifstream infile;
  infile.open(FILE_DIR);

  infile >> FileBuffer;

  //Testing
  std::cout << FileBuffer;
  //std::cout << "Hello World!\n";
}
