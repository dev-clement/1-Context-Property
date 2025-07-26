import QtQuick

Item {
    // property you want to use
    property real topLeftRadius: 24

    Rectangle {

        // correct for Qt version < 6.7 but uses Rectangle's topLeftRadius in 6.7
        objectName: "top left radius:" + topLeftRadius
    }
}
