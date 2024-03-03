//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Task
//{
//public:
//    string description;
//    bool completed;
//    Task(string desc) : description(desc), completed(false) {}
//};
//
//class ToDoList 
//{
//    vector<Task*> tasks;
//public:
//    void addTask(string desc) {
//        tasks.push_back(new Task(desc));
//    }
//
//    void listTasks() 
//    {
//        for (size_t i = 0; i < tasks.size(); ++i) 
//        {
//            cout << "Task " << i + 1 << ": " << tasks[i]->description;
//            if (tasks[i]->completed) 
//            {
//                cout << " (completed)";
//            }
//            cout << endl;
//        }
//    }
//
//    void markTaskCompleted(size_t index)
//    {
//        if (index >= tasks.size()) 
//        {
//            cout << "Invalid task index." << endl;
//            return;
//        }
//        tasks[index]->completed = true;
//        cout << "Task " << index + 1 << " marked as completed." << endl;
//    }
//
//    ~ToDoList() 
//    {
//        for (auto& task : tasks) delete task;
//    }
//};
//
//int main()
//{
//    ToDoList myList;
//    myList.addTask("go to sleep");
//    myList.addTask("Go to the school");
//    cout << "Initial tasks:" << endl;
//    myList.listTasks();
//    myList.markTaskCompleted(0);
//    myList.markTaskCompleted(1);
//    return 0;
//}
