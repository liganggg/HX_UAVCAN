
#ifndef UAVCAN_CONFIG_CONFIG_H_
#define UAVCAN_CONFIG_CONFIG_H_

#ifdef __cplusplus
extern "C" {
#endif

#define CAN1_IFACE_MASK		(1)
#define CAN2_IFACE_MASK		(1<<1)

#define CANBUS_BITRATE		(1000000)

#define NODEID_FC			(6)
#define NODEID_GNSS			(15)
#define NODEID_RTK			(19)
#define NODEID_DATALINK		(40)
#define NODEID_LED			(45)
#define NODEID_BABEL		(127)

//#define FW_PATH_IMU			("")
//#define FW_PATH_GNSS		("")
//#define FW_PATH_RTK			("")
//#define FW_PATH_PWR			("")

// 5 bits priority	= 0 ~ 31
#define MSG_PRIO_TIMESYNC	(2)
#define MSG_PRIO_NODESTATUS	(3)

// sensor bridge
#define SENSBR_NODE_ID_BIT_NUM  	(6)
#define SENSBR_NODE_ID_MASK  		((1 << SENSBR_NODE_ID_BIT_NUM) - 1)

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* UAVCAN_CONFIG_CONFIG_H_ */
