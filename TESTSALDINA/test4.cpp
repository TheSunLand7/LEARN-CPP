#include <iostream>
#include <string>

//A tough code.
/*
#include <cassert>
#include <vector>

struct questions {
    const std::string question;
    const std::vector<std::string> answers;
    const uint16_t numb_of_right_answer;
};

bool is_asked_question_right(const questions&);
bool input_is_valid(const uint16_t, const uint16_t);
uint16_t input(const int16_t);
void quizz(std::vector<questions>);


int main() {
    std::vector<questions> question_pool{};
    question_pool.push_back({"Which is the smallest county?", {"USA", "India", "Vatican City"}, 3});
    question_pool.push_back({"What is the biggest animal in the world?", {"Elephant", "Blue whale", "Great white shark"}, 2});
    question_pool.push_back({"How many elements are there in the periodic table", {"117", "118", "119", "120", "121"}, 2});
    quizz(question_pool);
}

void quizz(std::vector<questions> question_pool) {
    uint16_t correct_answers{};
    uint16_t total_answers{};
    for (const auto& q : question_pool) {
        if (is_asked_question_right(q)) correct_answers++;
        total_answers++;
    }
    std::cout << std::endl << "You answered " << correct_answers << " out of " << total_answers << " questions right";
}

bool is_asked_question_right(const questions& question) {
    std::cout << question.question << std::endl;
    size_t ans_numb{};
    for (const auto& ans : question.answers) {
        std::cout << ++ans_numb << ":\t" << ans << std::endl;
    }
    if (input((question.answers).size()) == question.numb_of_right_answer) {
        std::cout << "Correct!" << std::endl << std::endl;
        return true;
    }
    std::cout << "Incorrect!" << std::endl << std::endl;
    return false;
}

uint16_t input(const int16_t number_of_answers) {
    uint16_t Input{};
    std::cout << "Choose 1-" << number_of_answers << ":   ";
    std::cin >> Input;
    assert ((Input >= 0) && (Input < 65535));
    while (! (input_is_valid(Input, number_of_answers))) {
        std::cout << "Invalid Input! Pleas try again." << std::endl;
        Input = input(number_of_answers);
    }
    return Input;
}

bool input_is_valid(const uint16_t input, const uint16_t number_of_answers) {
    if ((input >= 1) && (input <= number_of_answers)) return true;
    return false;
}  // END OF CODE.
*/
/*
using namespace std;

int main()
{
    const int ANSWER_COL = 4;
    const int ARRAY_ROW_SIZE = 5;
    const int ARRAY_COL_SIZE = 5;
    const int BASE_INDEX = 0;

    short int iCorrectCount = 0;

    string strAnswer = "";

    printf("\n Choose the correct answer from the given options.\n");
    printf(" There are five questions to answer and for each question, you must choose\n");
    printf(" from the three options provided, which is the correct answer...        \n\n");
    printf("                                              ... Good Luck!/Bahati njema!\n");

    string queArray[ARRAY_ROW_SIZE][ARRAY_COL_SIZE] = {
    {"a) Who was SA's first democratic president?", "1. T.M. Mbeki", "2. H.W. de Klerk", "3. N. Mandela", "3"},
    {"b) Which is the biggest soccer team in South Africa?", "1. Kaizer Chiefs", "2. Orlando Pirates", "3. Mamelodi Sundowns", "1"},
    {"c) Which of these planet is the closest to the Sun?", "1. Mars", "2. Jupiter", "3. Mercury", "3"},
    {"d) Which mammal has 98% of genealogy similar to homo sapiens'?","1. Monkey", "2. Chimpanzee", "3. Orangutan", "2"},
    {"e) Which member of the pop group New Edition was ejected from the group?", "1. M. Bivin", "2. B. Brown", "3. R. Bell", "2"} };

    for (int i=0;i<ARRAY_ROW_SIZE;i++) {
        // print the question ...
        cout << queArray[i][BASE_INDEX] << endl;

        // print the three possible answers ...
        cout << endl;
        for(int j=1; j<ARRAY_COL_SIZE-1; j++) {
            cout << queArray[i][j] << endl;
        }
        cout << endl;
        // Enter the answer choice ...
        cout << "Choose one of 1 - 3: ";
        cin >> strAnswer;

        if (strAnswer == queArray[i][ANSWER_COL]) {
            printf("\n    Congratulations! Correct!\n\n");
            iCorrectCount++;
        } else {
            printf("\n    Ooop! Incorrect!\n\n");
        }
    }

    switch (iCorrectCount) {
    case 0: {
        printf(" You got NOT even a single answer correct. This is a crisis!\n");
        break;
    }
    case 1 : {
        printf(" You got only a single answer correct. YOU ARE NOT ALLOWED TO BREED!!!\n");
        break;
    }
    case 2: {
        printf(" You got 2 out of [%d]. There is hope for you!\n", &ARRAY_ROW_SIZE);
        break;
    }
    case 3: {
        printf(" You got 3 out of [%d]. You need to read a bit more, friend!\n", &ARRAY_ROW_SIZE);
        break;
    }

    case 4: {
        printf(" You got 4 out of [%d]. Not bad at all!\n", &ARRAY_ROW_SIZE);
        break;
    }
    case 5: {
        printf(" Excellent! You are allowed to breed!!! \n");
        break;
    }
    default:
        printf("\n THIS SHOULD NEVER BE DISPLAYED!!!\n");
        exit (999);
    }
    cout << endl; system("pause"); return 0;
}  //END OF CODE.
*/
/*
const int SIZE=3;
using namespace std;// --don't do that, it's [a] bad practice

struct Tquestion
{
    string question;
    string answer_option1;
    string answer_option2;
    string answer_option3;
    int correct_answer;
};

void List_init(Tquestion *qList)
{
  qList[0]={"what is the highest mountain in the world ?","Chomolungma","Dhaulagiri I","Nanga Parbat", 1};
  qList[1]={"who hasn't played a bond of these actors ?","Roger Moor","Martin Freeman","Timothy Dalton", 2};
  qList[2]={"What year did Depeche Mode release the album 'Violator'","1990","1985","1983", 1};
}
void ask(Tquestion *qList, int*p)
{
    int num;
    for(int i=0; i<SIZE; i++)
    {
        cout<<"\nQuestion #"<<i+1<<" \n"<<qList[i].question<<"\n\n";
        cout<<"1. "<<qList[i].answer_option1<<endl;
        cout<<"2. "<<qList[i].answer_option2<<endl;
        cout<<"3. "<<qList[i].answer_option3<<endl;
        cout<< "  Enter the number of correct answer: ";
        cin>>num;
            if(num==qList[i].correct_answer)
            {
                cout<<"Correct\n";
                (*p)+=100;
            }
            else cout<<"Incorrect\n";
    }
}
int main()
{
    Tquestion *qList=new Tquestion[SIZE];
    List_init(qList);
    int SCORE=0;
    int *pSCORE=&SCORE;
    ask(qList,pSCORE);
    cout<<"\n Your score :"<<SCORE;
    delete []qList;
    return 0;
}  // END OF CODE.
*/
/* A LITTLE ABOUT STRUCTURES*/
//Building a quiz app with 5 questions. || --> DONE!
//If possible add scores and money cost.  || --> IN PROGRESS!

struct Question {
    std::string question;
    std::string answerOption[3];
    int correct;
};

void answers1(Question q);
void answers2(Question q);
void answers3(Question q);

int main() {
    
    Question q1, q2, q3;
    answers1(q1);
    answers2(q2);
    answers3(q3);

    std::cin.get();
    return 0;
}

void answers1(Question q) {
    int options, size;

    q.question = "What is the smallest country?";
    q.answerOption[0] = "1. USA";
    q.answerOption[1] = "2. INDIA";
    q.answerOption[2] = "3. VATICAN CITY";
    q.correct = 3;
    std::cout << q.question << std::endl;
    
    size = sizeof(q.answerOption) / sizeof(q.answerOption[0]);
    
    for (int i = 0; i < size; i++) {
        std::cout << q.answerOption[i] << std::endl;
    }
    
    std::cout << "Choose 1-3: "; std::cin >> options;
    if (options == q.correct) {
        std::cout << "Correct!" << std::endl << std::endl;
    } else
        std::cout << "Incorrect!" << std::endl << std::endl;
}

void answers2(Question q) {
    int options, size;

    q.question = "What's the biggest animal in the world?";
    q.answerOption[0] = "1. ELEPHANT";
    q.answerOption[1] = "2. BLUE WHALE";
    q.answerOption[2] = "3. GREAT WHITE SHARK";
    q.correct = 2;
    std::cout << q.question << std::endl;
    
    size = sizeof(q.answerOption) / sizeof(q.answerOption[0]);
    
    for (int i = 0; i < 3; i++) {
        std::cout << q.answerOption[i] << std::endl;
    }
    
    std::cout << "Choose 1-3: "; std::cin >> options;
    if (options == q.correct) {
        std::cout << "Correct!" << std::endl << std::endl;
    } else
        std::cout << "Incorrect!" << std::endl << std::endl;
}

void answers3(Question q) {
    int options, size;

    q.correct = 1;
    q.answerOption[0] = "1. 118 ELEMENTS";
    q.answerOption[1] = "2. 119 ELEMENTS";
    q.answerOption[2] = "3. 120 ELEMENTS";
    q.question = "How many elements are there in the periodic table?";
    std::cout << q.question << std::endl;
    
    size = sizeof(q.answerOption) / sizeof(q.answerOption[0]);
    
    for (int i = 0; i < 3; i++) {
        std::cout << q.answerOption[i] << std::endl;
    }
    
    std::cout << "Choose 1-3: "; std::cin >> options;
    if (options == q.correct) {
        std::cout << "Correct!" << std::endl << std::endl;
    } else
        std::cout << "Incorrect!" << std::endl << std::endl;
}

