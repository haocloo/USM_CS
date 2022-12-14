```mermaid
flowchart TB
START(["Start"])
START --> B[/"read largest_length,largest_width"/]
B --> C["counter = 0"]

DIMENSION1{"largest_width > temp_length"}

DIMENSION1TRUE["largest_length = largest_width - (1.6*2) <br>largest_width = temp_length - (1.6*2)</br>"]

DIMENSION1FALSE["largest_length = temp_length - (1.6*2) <br>largest_width -= (1.6*2)</br>"]

C --> DIMENSION1
DIMENSION1 --> |"TRUE"|DIMENSION1TRUE
DIMENSION1 -->|"FALSE"| DIMENSION1FALSE

PRECISION["largest_length = round(largest_length * 1000.0) / 1000.0 <br>
    largest_width = round(largest_width * 1000.0) / 1000.0</br>"]

DIMENSION1TRUE & DIMENSION1FALSE --> PRECISION --> IF1 --> |"TRUE"|DISPLAY1 --> COUNTER1

IF1{"largest_length >= 3 OR largest_width >= 1.3"}
DISPLAY1[/"Display 'Oval Stefan with 10 seaters'"/]
COUNTER1["counter += 1"]

COUNTER1 -->IF2 -->|"TRUE"| DISPLAY2 --> COUNTER2
IF1 -->|"FALSE"|IF2

IF2{"largest_length >= 3 OR largest_width >= 1"}
DISPLAY2[/"Display 'Rectangle Shade with 12 seaters'"/]
COUNTER2["counter += 1"]
COUNTER2 --> EXIT2{"counter == 2"} -->|"TRUE"| STOP(["Stop"])
EXIT2 --> |"FALSE"|IF3

IF3{"largest_length >= 2.1 OR largest_width >= 1"}
DISPLAY3[/"Display 'Rectangle Bertha with 8 seaters'"/]
COUNTER3["counter += 1"]
COUNTER3 --> DISPLAY3 --> EXIT3{"counter == 2"} -->|"TRUE"| STOP(["Stop"])
EXIT3 -->|"FALSE"| IF4

IF2 --> |"FALSE"|IF3
IF3 --> |"TRUE"|COUNTER3

IF4{"largest_length >= 1.5 OR largest_width >= 1.5"}
DISPLAY4[/"Display 'Round Nadine with 8 seaters'"/]
COUNTER4["counter += 1"]
COUNTER4 --> DISPLAY4 --> EXIT4{"counter == 2"} -->|"TRUE"| STOP(["Stop"])
EXIT4 -->|"FALSE"| IF5

IF3 --> |"FALSE"|IF4
IF4 --> |"TRUE"|COUNTER4

IF5{"largest_length >= 1.5 OR largest_width >= 0.9"}
DISPLAY5[/"Display 'Rectangle Niklas with 6 seaters'"/]
COUNTER5["counter += 1"]
COUNTER5 --> DISPLAY5 --> EXIT5{"counter == 2"} -->|"TRUE"| STOP(["Stop"])
EXIT5 -->|"FALSE"| IF6

IF4 --> |"FALSE"|IF5
IF5 --> |"TRUE"|COUNTER5

IF6{"largest_length >= 1.35 OR largest_width >= 1.35"}
DISPLAY6[/"Display 'Round Emma with 6 seaters'"/]
COUNTER6["counter += 1"]
COUNTER6 --> DISPLAY6 --> EXIT6{"counter == 2"} -->|"TRUE"| STOP(["Stop"])
EXIT6 -->|"FALSE"| IF7

IF5 --> |"FALSE"|IF6
IF6 --> |"TRUE"|COUNTER6

IF7{"largest_length >= 1.3 OR largest_width >= 0.8"}
DISPLAY7[/"Display 'Rectangle Heinrich with 6 seaters'"/]
COUNTER7["counter += 1"]
COUNTER7 --> DISPLAY7 --> EXIT7{"counter == 2"} -->|"TRUE"| STOP(["Stop"])
EXIT7 -->|"FALSE"| IF8

IF6 --> |"FALSE"|IF7
IF7 --> |"TRUE"|COUNTER7

IF8{"largest_length >= 0.9 OR largest_width >= 0.9"}
DISPLAY8[/"Display 'Square Lea with 4 seaters'"/]
COUNTER8["counter += 1"]
COUNTER8 --> DISPLAY8 --> EXIT8{"counter == 2"} -->|"TRUE"| STOP(["Stop"])
EXIT8 -->|"FALSE"| IF9

IF7 --> |"FALSE"|IF8
IF8 --> |"TRUE"|COUNTER8

IF9{"largest_length >= 0.9 OR largest_width >= 0.76"}
DISPLAY9[/"Display 'Square Finn with 2 seaters'"/]
COUNTER9["counter += 1"]
COUNTER9 --> DISPLAY9 --> EXIT9{"counter == 2"} -->|"TRUE"| STOP(["Stop"])
EXIT9 -->|"FALSE"|STOP

IF8 --> |"FALSE"|IF9
IF9 --> |"TRUE"|COUNTER9
IF9 --> |"FALSE"|STOP
```