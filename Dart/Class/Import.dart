import 'Abstract.dart';

// Vehicle car = Vehicle();
// Error: The class 'Vehicle' is abstract and can't be instantiated.

/*
 *  extends의 경우 override 없이 부모의 메소드를 사용 가능하다.
 */
class Car extends Vehicle {
    int speed = 100;
    int passengers = 5;
    void moveForward(int meters) {
        print('Car is moving forward $meters meters');
    }
}

/*
 *  implements의 경우 부모의 메소드를 반드시 override를 해야한다.
 */
class Bicycle implements Vehicle {
    int speed = 20;
    @override
    int passengers = 2;
    void moveForward(int meters) {
        print('Bicycle is moving forward $meters meters');
    }
}

void main() {
    Vehicle car = Car();
    Vehicle bicycle = Bicycle();

    car.moveForward(100);
    bicycle.moveForward(50);
}