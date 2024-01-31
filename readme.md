# Repository Information

In this repository, you'll find solved questions related to Data Structures and Algorithms (DSA). I am following the approach of Striver for solving these questions.

Check Out full course : (https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/)[https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/]

## Environment

- Operating System: Ubuntu

## Setting up VS Code for Input and Output

To set up Visual Studio Code (VS Code) for handling input from "input.txt" and output to "output.txt", you can use the following configuration.

### tasks.json Configuration

If you have Ubuntu, add the following configuration to your `tasks.json` file in your VS Code workspace:

```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "Compile and run",
      "type": "shell",
      "command": "",
      "args": [
        "cp",
        "\"${file}\"",
        "${workspaceFolder}/jspwTest.cpp",
        "&&",
        "g++",
        "jspwTest.cpp",
        "-o",
        "jspwTest",
        "&&",
        "./jspwTest",
        "<",
        "input.txt",
        ">",
        "output.txt",
        "&&",
        "rm",
        "jspwTest",
        "&&",
        "rm",
        "jspwTest.cpp"
      ],
      "presentation": {
        "reveal": "never"
      },
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "problemMatcher": {
        "owner": "cpp",
        "fileLocation": ["relative", "${workspaceRoot}"],
        "pattern": {
          "regexp": "^(.*):(\\d+):(\\d+):\\s+(warning|error):\\s+(.*)$",
          "file": 1,
          "line": 2,
          "column": 3,
          "severity": 4,
          "message": 5
        }
      }
    }
  ]
}
```

This configuration will compile and run your C++ code, taking input from "input.txt" and redirecting the output to "output.txt".

Feel free to customize the configuration based on your specific needs.
