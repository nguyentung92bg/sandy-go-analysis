// Namespace: Dino.Tracking
[Serializable]
public abstract class TrackingEventLevelBase<TSelf> : TrackingEventBase // TypeDefIndex: 12038
{
	// Fields
	protected readonly int level; // 0x0
	protected Nullable<int> loop_by; // 0x0
	protected Nullable<ELevelPlayType> play_type; // 0x0
	protected Nullable<int> play_index; // 0x0
	protected Nullable<int> lose_index; // 0x0
	protected Nullable<int> duration_total_start; // 0x0
	protected string mode; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	protected void .ctor(int level) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9A494 Offset: 0x2F96494 VA: 0x2F9A494
	|-TrackingEventLevelBase<object>..ctor
	*/

	// RVA: -1 Offset: -1
	public TSelf SetLoopBy(Nullable<int> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9A4BC Offset: 0x2F964BC VA: 0x2F9A4BC
	|-TrackingEventLevelBase<object>.SetLoopBy
	*/

	// RVA: -1 Offset: -1
	public TSelf SetPlayType(ELevelPlayType value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9A518 Offset: 0x2F96518 VA: 0x2F9A518
	|-TrackingEventLevelBase<object>.SetPlayType
	*/

	// RVA: -1 Offset: -1
	public TSelf SetPlayIndex(Nullable<int> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9A5CC Offset: 0x2F965CC VA: 0x2F9A5CC
	|-TrackingEventLevelBase<object>.SetPlayIndex
	*/

	// RVA: -1 Offset: -1
	public TSelf SetLoseIndex(Nullable<int> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9A628 Offset: 0x2F96628 VA: 0x2F9A628
	|-TrackingEventLevelBase<object>.SetLoseIndex
	*/

	// RVA: -1 Offset: -1
	public TSelf SetDurationTotalStart(Nullable<int> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9A684 Offset: 0x2F96684 VA: 0x2F9A684
	|-TrackingEventLevelBase<object>.SetDurationTotalStart
	*/

	// RVA: -1 Offset: -1
	public TSelf SetMode(string value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9A6E0 Offset: 0x2F966E0 VA: 0x2F9A6E0
	|-TrackingEventLevelBase<object>.SetMode
	*/

	// RVA: -1 Offset: -1
	protected void WriteSharedParameters(List<DinoTrackingParameter> buffer) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9A744 Offset: 0x2F96744 VA: 0x2F9A744
	|-TrackingEventLevelBase<object>.WriteSharedParameters
	*/
}

