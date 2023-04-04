```mermaid
---
title : T3 Q1
---
classDiagram
class Instructor{
    - first_name : string
    - last_name : string
    - office_number : int
    
    + Instructor(f : string, l : string, o : int)
    + display():void
}

class Classroom{
    - room_number : int
    - building_number : int

    + Classroom(b : int, r : int)
    + display():void
}

class CollegeCourse{
    - number_of_credits : int
    - instructor : Instructor
    - classroom : Classroom

    + CollegeCourse(first_name : string, last_name : string, office_number : int, building_number : int, room_number : int, number_of_credits : int)
    + display():void
}

CollegeCourse <|-- Instructor
CollegeCourse <|-- Classroom


```
<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>

```mermaid
---
title : T3 Q3
---
classDiagram
class Customer{
    - customerVat : int
    - name : string
    - phoneNumber : int
    - address : string
    - centreName : string
}

class Package{
    - receiverName : string
    - weight : double
    - isUrgent : bool
    - ID : int
    + getID(receiverName : string, weight : double, isUrgent : bool):int
}

class DeliveryCentre{
    + deliver(id : int):void
    - centreName : string
    - centreAddress : string
}

class Courier{
    - courierVat : int
    - courierName : string
    - courierPhone : int
    + deliverPackage():void
}

Customer <|-- Package
Package <|-- DeliveryCentre
Customer <|-- DeliveryCentre
DeliveryCentre <|-- Courier
```