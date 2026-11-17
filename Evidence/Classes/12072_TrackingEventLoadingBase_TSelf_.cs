// Namespace: Dino.Tracking
[Serializable]
public abstract class TrackingEventLoadingBase<TSelf> : TrackingEventBase // TypeDefIndex: 12072
{
	// Fields
	protected readonly string data_source; // 0x0
	protected readonly string resource_type; // 0x0
	protected readonly string load_context; // 0x0
	protected string trigger_source; // 0x0
	protected string load_id; // 0x0
	protected Nullable<ELoadingPriority> priority; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	protected void .ctor(string dataSource, string resourceType, string loadContext) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9ADFC Offset: 0x2F96DFC VA: 0x2F9ADFC
	|-TrackingEventLoadingBase<object>..ctor
	*/

	// RVA: -1 Offset: -1
	public TSelf SetTriggerSource(string value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9AE5C Offset: 0x2F96E5C VA: 0x2F9AE5C
	|-TrackingEventLoadingBase<object>.SetTriggerSource
	*/

	// RVA: -1 Offset: -1
	public TSelf SetLoadId(string value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9AEC0 Offset: 0x2F96EC0 VA: 0x2F9AEC0
	|-TrackingEventLoadingBase<object>.SetLoadId
	*/

	// RVA: -1 Offset: -1
	public TSelf SetPriority(Nullable<ELoadingPriority> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9AF24 Offset: 0x2F96F24 VA: 0x2F9AF24
	|-TrackingEventLoadingBase<object>.SetPriority
	*/

	// RVA: -1 Offset: -1
	protected void WriteSharedParameters(List<DinoTrackingParameter> buffer) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9AF80 Offset: 0x2F96F80 VA: 0x2F9AF80
	|-TrackingEventLoadingBase<object>.WriteSharedParameters
	*/
}

