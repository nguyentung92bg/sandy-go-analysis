// Namespace: Dino.Tracking
[Serializable]
public abstract class TrackingEventFeatureBase<TSelf> : TrackingEventBase // TypeDefIndex: 12053
{
	// Fields
	protected readonly string feature_name; // 0x0
	protected Nullable<EFeatureCategory> feature_category; // 0x0
	protected Nullable<ELiveOpsScheduleType> feature_schedule_type; // 0x0
	protected Nullable<int> feature_start_date; // 0x0
	protected Nullable<int> feature_end_date; // 0x0
	protected string placement; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	protected void .ctor(string featureName) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F99E00 Offset: 0x2F95E00 VA: 0x2F99E00
	|-TrackingEventFeatureBase<object>..ctor
	*/

	// RVA: -1 Offset: -1
	public TSelf SetFeatureCategory(Nullable<EFeatureCategory> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F99E30 Offset: 0x2F95E30 VA: 0x2F99E30
	|-TrackingEventFeatureBase<object>.SetFeatureCategory
	*/

	// RVA: -1 Offset: -1
	public TSelf SetFeatureScheduleType(Nullable<ELiveOpsScheduleType> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F99E8C Offset: 0x2F95E8C VA: 0x2F99E8C
	|-TrackingEventFeatureBase<object>.SetFeatureScheduleType
	*/

	// RVA: -1 Offset: -1
	public TSelf SetFeatureStartDate(Nullable<int> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F99EE8 Offset: 0x2F95EE8 VA: 0x2F99EE8
	|-TrackingEventFeatureBase<object>.SetFeatureStartDate
	*/

	// RVA: -1 Offset: -1
	public TSelf SetFeatureEndDate(Nullable<int> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F99F44 Offset: 0x2F95F44 VA: 0x2F99F44
	|-TrackingEventFeatureBase<object>.SetFeatureEndDate
	*/

	// RVA: -1 Offset: -1
	public TSelf SetPlacement(string value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F99FA0 Offset: 0x2F95FA0 VA: 0x2F99FA0
	|-TrackingEventFeatureBase<object>.SetPlacement
	*/

	// RVA: -1 Offset: -1
	protected void WriteSharedParameters(List<DinoTrackingParameter> buffer) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9A004 Offset: 0x2F96004 VA: 0x2F9A004
	|-TrackingEventFeatureBase<object>.WriteSharedParameters
	*/
}

