#include "s21_smart_calc.h"

double input_parsing(char* input, double load_x) {
  list_calc* input_calc = NULL;
  double result_output = 0;
  int input_len = strlen(input);
  char temp_str[255] = {'\0'};
  int flag = 0;
  for (int i = 0, j = 0; i <= input_len; i++) {
    if (is_digit(input[i])) {
      temp_str[j++] = input[i];
      flag = 1;
    } else if (input[i] == '+') {
        if (temp_str[0] == '\0' && input[i - 1] != ')') {
            temp_str[j++] = '+';
            continue;
        }

      if (input[i - 1] == '(') {
        temp_str[j++] = input[i];
      } else {
        read_num(&input_calc, temp_str, &flag, &j);
        push_back(&input_calc, 0, LOW_PR, PLUS);
      }
    } else if (input[i] == '-') {
        if (temp_str[0] == '\0' && input[i - 1] != ')') {
            temp_str[j++] = '-';
            continue;
        }
      if (input[i - 1] == '(') {
        temp_str[j++] = input[i];
      } else {
        read_num(&input_calc, temp_str, &flag, &j);
        push_back(&input_calc, 0, LOW_PR, MINUS);
      }
    } else if (input[i] == '*') {
      if (input[i - 1] == '(') {
        temp_str[j++] = input[i];
      } else {
        read_num(&input_calc, temp_str, &flag, &j);
        push_back(&input_calc, 0, MEDIUM_PR, MULT);
      }
    } else if (input[i] == '/') {
      if (input[i - 1] == '(') {
        temp_str[j++] = input[i];
      } else {
        read_num(&input_calc, temp_str, &flag, &j);
        push_back(&input_calc, 0, MEDIUM_PR, DIV);
      }
    } else if (input[i] == '^') {
      if (input[i - 1] == '(') {
        temp_str[j++] = input[i];
      } else {
        read_num(&input_calc, temp_str, &flag, &j);
        push_back(&input_calc, 0, HIGH_PR, POW);
      }
    } else if (input[i] == 'm') {
      if (input[i + 1] == 'o' ? input[i + 2] == 'd' ? 1 : 0 : 0) {
        i += 2;
        read_num(&input_calc, temp_str, &flag, &j);
        push_back(&input_calc, 0, MEDIUM_PR, MOD);
      }
    } else if (input[i] == 'c') {
      if (input[i + 1] == 'o' ? input[i + 2] == 's' ? 1 : 0 : 0) {
        i += 2;
        read_num(&input_calc, temp_str, &flag, &j);
        push_back(&input_calc, 0, HIGH_PR, COS);
      }
    } else if (input[i] == 's') {
      if (input[i + 1] == 'i' ? input[i + 2] == 'n' ? 1 : 0 : 0) {
        i += 2;
        read_num(&input_calc, temp_str, &flag, &j);
        push_back(&input_calc, 0, HIGH_PR, SIN);
      }
    } else if (input[i] == 't') {
      if (input[i + 1] == 'a' ? input[i + 2] == 'n' ? 1 : 0 : 0) {
        i += 2;
        read_num(&input_calc, temp_str, &flag, &j);
        push_back(&input_calc, 0, HIGH_PR, TAN);
      }
    } else if (input[i] == 'q') {
      if (input[i + 1] == 'r' ? input[i + 2] == 't' ? 1 : 0 : 0) {
        i += 2;
        read_num(&input_calc, temp_str, &flag, &j);
        push_back(&input_calc, 0, HIGH_PR, SQRT);
      }
    } else if (input[i] == 'a') {
      if (input[i + 1] == 'c') {
        if (input[i + 2] == 'o' ? input[i + 3] == 's' ? 1 : 0 : 0) {
          i += 3;
          read_num(&input_calc, temp_str, &flag, &j);
          push_back(&input_calc, 0, HIGH_PR, ACOS);
        }
      } else if (input[i + 1] == 's') {
        if (input[i + 2] == 'i' ? input[i + 3] == 'n' ? 1 : 0 : 0) {
          i += 3;
          read_num(&input_calc, temp_str, &flag, &j);
          push_back(&input_calc, 0, HIGH_PR, ASIN);
        }
      } else if (input[i + 1] == 't') {
        if (input[i + 2] == 'a' ? input[i + 3] == 'n' ? 1 : 0 : 0) {
          i += 3;
          read_num(&input_calc, temp_str, &flag, &j);
          push_back(&input_calc, 0, HIGH_PR, ATAN);
        }
      }
    } else if (input[i] == 'l') {
      if (input[i + 1] == 'n' ? 1 : 0) {
        i += 1;
        push_back(&input_calc, 0, HIGH_PR, LN);
      } else if (input[i + 1] == 'o' ? input[i + 2] == 'g' ? 1 : 0 : 0) {
        i += 2;
        push_back(&input_calc, 0, HIGH_PR, LOG);
      }
    } else if (input[i] == '(') {
      push_back(&input_calc, 0, LLOW_PR, LEFT);
    } else if (input[i] == ')') {
      read_num(&input_calc, temp_str, &flag, &j);
      push_back(&input_calc, 0, LLOW_PR, RIGHT);
    } else if (input[i] == 'x') {
      push_back(&input_calc, load_x, 0, 0);
    } else if (input[i] == '.') {
      temp_str[j++] = input[i];
      flag = 1;
    } else {
      read_num(&input_calc, temp_str, &flag, &j);
    }
  }
  for (int i = 0; i < 255; i++) {
    temp_str[i] = '\0';
  }
  if (!check_input(input, input_len)) {
    if (input_calc != NULL) {
      input_calc = coup_list(input_calc);
    }
    if (input_calc != NULL) {
      input_calc = sort_station(input_calc);
    }
    if (input_calc != NULL) {
      input_calc = coup_list(input_calc);
    }
    result_output = calculation(input_calc);
  } else {
    while (input_calc) {
      list_calc* chistim = input_calc;
      input_calc = input_calc->next;
      free(chistim);
    }
  }
  return result_output;
}

list_calc* sort_station(list_calc* head) {
  list_calc* result = NULL;
  list_calc* temp = NULL;
  while (head) {
    if (head->priority == 0) {
      push_back(&result, head->in_num, 0, 0);
    } else {
      if (temp != NULL) {
        if ((head->priority > temp->priority) || (head->type == LEFT)) {
          push_back(&temp, 0, head->priority, head->type);
        } else {
          if (head->type == RIGHT) {
            while (temp && (temp->type != LEFT)) {
              push_back(&result, 0, temp->priority, temp->type);
              list_calc* freeshit = temp;
              temp = temp->next;
              free(freeshit);
            }
          } else {
            push_back(&result, 0, temp->priority, temp->type);
            pop_back(&temp);
          }
          push_back(&temp, 0, head->priority, head->type);
          if (result->type < COS) {
            if (temp->type == RIGHT) {
              pop_back(&temp);
            }
            if (temp->type == LEFT) {
              pop_back(&temp);
            }
          }
        }
      } else {
        push_back(&temp, 0, head->priority, head->type);
      }
    }
    list_calc* head_free = head;
    head = head->next;
    free(head_free);
  }
  while (temp) {
    if (temp->type != LEFT && temp->type != RIGHT)
      push_back(&result, 0, temp->priority, temp->type);
    list_calc* freeshit = temp;
    temp = temp->next;
    free(freeshit);
  }

  return result;
}

double calculation(list_calc* head) {
  list_calc* temp = NULL;
  double result = 0;
  int count = 2;
  double a = 0;
  double b = 0;
  while (head) {
    if (head->priority == 0) {
      push_back(&temp, head->in_num, 0, 0);
    } else if ((head->priority > 0) && (head->type < COS && head->type > 0)) {
      while (temp) {
        if (count == 2) {
          b = temp->in_num;
        } else if (count == 1) {
          a = temp->in_num;
        } else if (count == 0) {
          break;
        }
        count--;
        list_calc* freeshit = temp;
        temp = temp->next;
        free(freeshit);
      }
      if (count == 0) {
        push_back(&temp, arichmetics(a, b, head->type), 0, 0);
      }
      count = 2;
    } else if ((head->priority > 0) &&
               (head->type > MOD && head->type < LEFT)) {
      while (temp) {
        if (count == 2) {
          b = temp->in_num;
        } else if (count == 1) {
          break;
        }
        count--;
        list_calc* freeshit = temp;
        temp = temp->next;
        free(freeshit);
      }
      if (count == 1) {
        push_back(&temp, triganimetric(b, head->type), 0, 0);
      }
      count = 2;
    }
    list_calc* freeshit = head;
    head = head->next;
    free(freeshit);
  }
  if (temp != NULL) {
    result = temp->in_num;
    free(temp);
  }
  return result;
}

double arichmetics(double a, double b, int sumbol) {
  double result = 0;
  if (sumbol == PLUS) {
    result = a + b;
  } else if (sumbol == MINUS) {
    result = a - b;
  } else if (sumbol == DIV) {
    result = a / b;
  } else if (sumbol == MULT) {
    result = a * b;
  } else if (sumbol == POW) {
    result = pow(a, b);
  } else if (sumbol == MOD) {
    result = fmod(a, b);
  }
  return result;
}

double triganimetric(double a, int sumbol) {
  double result = 0;
  if (sumbol == COS) {
    result = cos(a);
  } else if (sumbol == SIN) {
    result = sin(a);
  } else if (sumbol == TAN) {
    result = tan(a);
  } else if (sumbol == ACOS) {
    result = acos(a);
  } else if (sumbol == ASIN) {
    result = asin(a);
  } else if (sumbol == ATAN) {
    result = atan(a);
  } else if (sumbol == SQRT) {
    result = sqrt(a);
  } else if (sumbol == LN) {
    result = log(a);
  } else if (sumbol == LOG) {
    result = log10(a);
  }
  return result;
}

void read_num(list_calc** input_calc, char* temp_str, int* flag, int* x) {
  if (*flag && temp_str) {
    push_back(input_calc, atof(temp_str), 0, 0);
    *x = 0;
    *flag = 0;
    for (int i = 0; i < 255; i++) {
      temp_str[i] = '\0';
    }
  }
}

list_calc* coup_list(list_calc* head) {
  list_calc* temp = NULL;
  while (head) {
    list_calc* for_clean = head;
    push_back(&temp, head->in_num, head->priority, head->type);
    head = head->next;
    free(for_clean);
  }
  return temp;
}

void push_back(list_calc** head, double in_num, int priority, int type) {
  list_calc* temp = calloc(1, sizeof(list_calc));
  temp->in_num = in_num;
  temp->priority = priority;
  temp->type = type;
  temp->next = *head;
  *head = temp;
}

list_calc pop_back(list_calc** head) {
  list_calc* ptr = NULL;
  list_calc temp = {0};
  ptr = (*head);
  temp.in_num = ptr->in_num;
  temp.priority = ptr->priority;
  temp.type = ptr->type;
  (*head) = (*head)->next;
  free(ptr);
  return temp;
}

int check_input(const char* input, int size) {
  int check = 0;
  for (int i = 0; i < size; i++) {
    if (input[i] == '(') {
      check = (input[i + 1] == ')' ? 1 : check);
    }
    if (input[i] == ')') {
      check = (input[i + 1] == '(' ? 1 : check);
    }
  }
  return check;
}

int is_digit(char i) {
  int res = 0;
  if (i >= '0' && i <= '9') res = 1;
  return res;
}
