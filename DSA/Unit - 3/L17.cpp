// ArrayWue
// #include <iostream>
// #include <queue>
// class Sol
// {
// private:
//     queue<int> qu;
// public:
//     void enqueue(int a)
//     {
//         qu.push(a);
//         cout << "Customer ID " << a << " is enqueued." << endl;
//     }
//     void dequeue()
//     {
//         if (!qu.empty())
//         {
//             cout << "Dequeued customer ID: " << qu.front() << endl;
//             qu.pop();
//         }
//         else
//         {
//             cout << "Queue is empty." << endl;
//         }
//     }
//     void display()
//     {
//         if (qu.empty())
//         {
//             cout << "Queue is empty." << endl;
//         }
//         else
//         {
//             cout << "Customer IDs in the queue are: ";
//             queue<int> tempQueue = qu; // Create a copy of the queue
//             while (!tempQueue.empty())
//             {
//                 cout << tempQueue.front() << " ";
//                 tempQueue.pop();
//             }
//             cout << endl;
//         }
//     }
// };
// int main()
// {
//     Sol s;
//     int choice, a;
//     while (cin >> choice)
//     {
//         switch (choice)
//         {
//         case 1:
//             cin >> a;
//             s.enqueue(a);
//             break;
//         case 2:
//             s.dequeue();
//             break;
//         case 3:
//             s.display();
//             break;
//         default:
//             cout << "Invalid option." << endl;
//             break;
//         }
//     }
//     return 0;
// }
