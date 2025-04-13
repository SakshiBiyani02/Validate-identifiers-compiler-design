#include <iostream>     // For input/output operations 
#include <string>       
#include <set>          
#include <regex>        
#include <cctype>       
// For using string class 
// For set data structure 
// For regex validation 
// For character-based checks 
#include <algorithm>    // Additional utilities (if needed) 
#include <vector>       
using namespace std; 
// For potential list handling 
// Reserved keywords in C++ 
set<string> reserved_keywords = { 
"auto", "break", "case", "char", "const", "continue", "default", "do", 
"double", "else", "enum", "extern", "float", "for", "goto", "if", 
    "int", "long", "register", "return", "short", "signed", "sizeof", 
    "static", "struct", "switch", "typedef", "union", "unsigned", "void", 
    "volatile", "while" 
}; 
 
// Predefined function/class names 
set<string> existing_function_class_names = { 
    "main", "print", "calculate" 
}; 
 
// Validates the identifier 
bool isValidIdentifier(const string &identifier) { 
    // Check length 
    if (identifier.length() < 1 || identifier.length() > 20) { 
        cout << "Invalid: Length is " << identifier.length() << endl; 
        return false; 
    } else { 
        cout << "Length check passed." << endl; 
    } 
 
    // Check first character 
    if (!isalpha(identifier[0]) && identifier[0] != '_') { 
        cout << "Invalid: First character is not a letter or underscore." << endl; 
        return false; 
    } else { 
        cout << "First character check passed." << endl; 
    } 
 
    // Check character rules 
    for (size_t i = 1; i < identifier.length(); ++i) { 
        if (!isalnum(identifier[i]) && identifier[i] != '_') { 
            cout << "Invalid: Contains special character or whitespace." << endl; 
            return false; 
        } 
        if (identifier[i] == '_' && identifier[i - 1] == '_') { 
            cout << "Invalid: Contains repeating underscores." << endl; 
            return false; 
        } 
        if (isdigit(identifier[i - 1]) && (identifier[i] == '_' || identifier[i] == '-')) { 
            cout << "Invalid: Contains numeric hyphenation." << endl; 
            return false; 
        } 
    } 
    cout << "No repeating underscores and numeric hyphenation check passed." << endl; 
 
    // Check reserved keywords 
    if (reserved_keywords.find(identifier) != reserved_keywords.end()) { 
        cout << "Invalid: Identifier is a reserved keyword." << endl; 
        return false; 
    } else { 
        cout << "Reserved keyword check passed." << endl; 
    } 
 
    // Check predefined names 
    if (existing_function_class_names.find(identifier) != existing_function_class_names.end()) { 
        cout << "Invalid: Identifier is an existing function or class name." << endl; 
        return false; 
    } else { 
        cout << "Function/class name check passed." << endl; 
    } 
 
    // Regex validation 
    regex english_chars("^[A-Za-z0-9_]*$"); 
    if (!regex_match(identifier, english_chars)) { 
        cout << "Invalid: Contains non-English characters." << endl; 
        return false; 
    } else { 
        cout << "English characters check passed." << endl; 
    } 
 
    return true; // Valid identifier 
} 
 
int main() { 
    string identifier; 
 
    // Get identifier from user 
    cout << "Enter an identifier: "; 
    cin >> identifier; 
 
    // Validate and display result 
    cout << "Checking: " << identifier << endl; 
    if (isValidIdentifier(identifier)) { 
        cout << identifier << " is a valid identifier." << endl; 
    } else { 
        cout << identifier << " is an invalid identifier." << endl; 
    } 
    return 0; // Exit program 
} 