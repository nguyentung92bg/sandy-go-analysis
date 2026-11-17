// Namespace: Dino.Tracking
[Serializable]
public abstract class TrackingEventNotificationBase<TSelf> : TrackingEventBase // TypeDefIndex: 12060
{
	// Fields
	protected readonly string noti_cate; // 0x0
	protected readonly string noti_name; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	protected void .ctor(string notiCate, string notiName) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9B298 Offset: 0x2F97298 VA: 0x2F9B298
	|-TrackingEventNotificationBase<object>..ctor
	*/

	// RVA: -1 Offset: -1
	protected void WriteSharedParameters(List<DinoTrackingParameter> buffer) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9B2DC Offset: 0x2F972DC VA: 0x2F9B2DC
	|-TrackingEventNotificationBase<object>.WriteSharedParameters
	*/
}

