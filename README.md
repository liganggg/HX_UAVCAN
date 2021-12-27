字模块说明

tools下执行脚本 可将用户自定义dsdl在generated文件夹中生成为对应头文件





消息id



外设id组成如下字段

eg： gnss 外设模组内的罗盘

```c++
DeviceId device_id

device_id.devid_s.address = node_id; //节点id 一个模组视为一个节点。
device_id.devid_s.bus_type = DeviceBusType_UAVCAN; //标识总线类型为uavcan
device_id.devid_s.bus = 1;			//标识设备序号，用于一个节点存在多个同类型传感器(0 1 2 3...)
device_id.devid_s.devtype = DRV_MAG_DEVTYPE_UAVCAN;//标识设备类型为uavcan电子罗盘

```



```c++
union DeviceId {
	struct DeviceStructure devid_s;
	uint32_t devid;
};

struct DeviceStructure {
		DeviceBusType bus_type : 3;
		uint8_t bus: 5;    // which instance of the bus type
		uint8_t address;   // address on the bus (eg. I2C address)
		uint8_t devtype;   // device class specific device type
	};
	
enum DeviceBusType {
	DeviceBusType_UNKNOWN = 0,
	DeviceBusType_I2C     = 1,
	DeviceBusType_SPI     = 2,
	DeviceBusType_UAVCAN  = 3,
	DeviceBusType_SIMULATION = 4,
	DeviceBusType_SERIAL = 5,
	DeviceBusType_MAVLINK = 6,
};	
```



```c++
#define DRV_ACC_DEVTYPE_UAVCAN	0x80
#define DRV_BARO_DEVTYPE_UAVCAN	0x81
#define DRV_BAT_DEVTYPE_UAVCAN	0x82
#define DRV_DIFF_PRESS_DEVTYPE_UAVCAN	0x83
#define DRV_FLOW_DEVTYPE_UAVCAN	0x84
#define DRV_GPS_DEVTYPE_UAVCAN	0x85
#define DRV_GYR_DEVTYPE_UAVCAN	0x86
#define DRV_IMU_DEVTYPE_UAVCAN	0x87
#define DRV_MAG_DEVTYPE_UAVCAN	0x88
#define DRV_DIST_DEVTYPE_UAVCAN	0x89
```





