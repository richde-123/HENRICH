        case '/':
33
            if (secondNumber == 0) {
34
                printf("Division by zero\n");
35
            } else {
36
                result = firstNumber / secondNumber;
37
                printf("Result: %d / %d = %d\n", firstNumber, secondNumber, result);
38
            }
39
            break;
40
41
        case '%':
42
            if (secondNumber == 0) {
43
                printf("Division by zero\n");
44
            } else {
45
                result = firstNumber % secondNumber;
46
                printf("Result: %d %% %d = %d\n", firstNumber, secondNumber, result);
47
            }
48
            break;
49
50
        default:
51
            printf("Invalid Operator\n");
52
            break;
53
    }
54
55
    return 0;
56
}
57
