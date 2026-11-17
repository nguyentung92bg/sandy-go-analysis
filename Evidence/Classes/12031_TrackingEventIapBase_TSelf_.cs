// Namespace: Dino.Tracking
[Serializable]
public abstract class TrackingEventIapBase<TSelf> : TrackingEventBase // TypeDefIndex: 12031
{
	// Fields
	protected readonly string placement; // 0x0
	protected Nullable<EIapShowType> show_type; // 0x0
	protected Nullable<EIapTriggerType> trigger_type; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	protected void .ctor(string placement) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9A218 Offset: 0x2F96218 VA: 0x2F9A218
	|-TrackingEventIapBase<object>..ctor
	*/

	// RVA: -1 Offset: -1
	public TSelf SetShowType(Nullable<EIapShowType> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9A248 Offset: 0x2F96248 VA: 0x2F9A248
	|-TrackingEventIapBase<object>.SetShowType
	*/

	// RVA: -1 Offset: -1
	public TSelf SetTriggerType(Nullable<EIapTriggerType> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9A2A4 Offset: 0x2F962A4 VA: 0x2F9A2A4
	|-TrackingEventIapBase<object>.SetTriggerType
	*/

	// RVA: -1 Offset: -1
	protected void WriteSharedParameters(List<DinoTrackingParameter> buffer) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9A300 Offset: 0x2F96300 VA: 0x2F9A300
	|-TrackingEventIapBase<object>.WriteSharedParameters
	*/
}

