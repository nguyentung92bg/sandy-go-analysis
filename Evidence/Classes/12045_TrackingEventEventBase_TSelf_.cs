// Namespace: Dino.Tracking
[Serializable]
public abstract class TrackingEventEventBase<TSelf> : TrackingEventBase // TypeDefIndex: 12045
{
	// Fields
	protected readonly string event_name_ingame; // 0x0
	protected Nullable<ELiveOpsScheduleType> event_schedule_type; // 0x0
	protected Nullable<int> event_start_date; // 0x0
	protected Nullable<int> event_end_date; // 0x0
	protected string placement; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	protected void .ctor(string eventNameIngame) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F99A88 Offset: 0x2F95A88 VA: 0x2F99A88
	|-TrackingEventEventBase<object>..ctor
	*/

	// RVA: -1 Offset: -1
	public TSelf SetEventScheduleType(Nullable<ELiveOpsScheduleType> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F99AB8 Offset: 0x2F95AB8 VA: 0x2F99AB8
	|-TrackingEventEventBase<object>.SetEventScheduleType
	*/

	// RVA: -1 Offset: -1
	public TSelf SetEventStartDate(Nullable<int> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F99B14 Offset: 0x2F95B14 VA: 0x2F99B14
	|-TrackingEventEventBase<object>.SetEventStartDate
	*/

	// RVA: -1 Offset: -1
	public TSelf SetEventEndDate(Nullable<int> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F99B70 Offset: 0x2F95B70 VA: 0x2F99B70
	|-TrackingEventEventBase<object>.SetEventEndDate
	*/

	// RVA: -1 Offset: -1
	public TSelf SetPlacement(string value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F99BCC Offset: 0x2F95BCC VA: 0x2F99BCC
	|-TrackingEventEventBase<object>.SetPlacement
	*/

	// RVA: -1 Offset: -1
	protected void WriteSharedParameters(List<DinoTrackingParameter> buffer) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F99C30 Offset: 0x2F95C30 VA: 0x2F99C30
	|-TrackingEventEventBase<object>.WriteSharedParameters
	*/
}

