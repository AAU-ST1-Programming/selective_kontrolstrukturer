# Flowchart for button pressed
Dette er et flowchart når man trykker på en knap.
Det viser hvordan if/else conditionals kan beskrives i flowcharts, og hvordan man kan bygge funktionalitet op af flere.
## Flowchart for button pressed
```mermaid
flowchart LR
    id1((Start))
    id1 -->A[Initialize\nnew_value] 
    A -->B1
    B1[Set\nnew_value using digitalRead] --> C1
    subgraph Check if button is being pressed
        C1{is Button pressed?}
        C1 -->|Yes| D1[Print: Button Pressed]
        C1 -->|No| E1[Print: Button Not Pressed]
        D1 --> Fork1
        E1 --> Fork1
        Fork1@{ shape: fork, label: "Fork or Join" }
    end
    Fork1-->end1
    end1((End))
```
## Flowchart for state changed
```mermaid

flowchart LR
    id2((Start)) -->init2[Initialize\nold_value\nnew_value]
    init2 -->A
    A[Set\nnew_value using digitalRead]
    A --> C2
    subgraph Check if button state changed
        C2{Are old_value and new_value different?}
        C2 -->|Yes| D2[Set old_value=new_value]
        D2 -->E2[Print: new_value]
        C2 -->|No| Fork2
        E2 --> Fork2
        Fork2@{ shape: fork, label: "Fork or Join" }
    end
    Fork2-->end2
    end2((End))
```

## Flowchart for combination
```mermaid

flowchart LR
    id2((Start)) -->init2[Initialize\nold_value\nnew_value]
    init2 -->A
    A[Set\nnew_value using digitalRead]
    A --> C2
    subgraph Check if button state changed
        C2{Are old_value and new_value different?}
        C2 -->|Yes| D2[Set old_value=new_value]
        D2 -->C1[Print: new_value] --> Fork1
            subgraph Check if button is being pressed
                C1{is Button pressed?}
                C1 -->|Yes| D1[Print: Button Pressed]
                C1 -->|No| E1[Print: Button Not Pressed]
            end
                D1 --> Fork1
                E1 --> Fork1
                Fork1@{ shape: fork, label: "Fork or Join" }


        C2 -->|No| Fork1
        
    end
    Fork1-->end2
    end2((End))

```