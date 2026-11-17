// Namespace: Dino.Tracking
[Serializable]
public abstract class TrackingEventLevelSessionEndBase<TSelf> : TrackingEventLevelBase<TSelf> // TypeDefIndex: 12043
{
	// Fields
	protected Nullable<int> duration_total_end; // 0x0
	protected Nullable<int> duration_remain; // 0x0
	protected Nullable<int> duration_play; // 0x0
	protected Nullable<float> progress; // 0x0
	protected Nullable<int> items_total; // 0x0
	protected Nullable<int> items_cleared; // 0x0
	protected string action_seq; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	protected void .ctor(int level) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9A96C Offset: 0x2F9696C VA: 0x2F9A96C
	|-TrackingEventLevelSessionEndBase<object>..ctor
	*/

	// RVA: -1 Offset: -1
	public TSelf SetDurationTotalEnd(Nullable<int> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9A994 Offset: 0x2F96994 VA: 0x2F9A994
	|-TrackingEventLevelSessionEndBase<object>.SetDurationTotalEnd
	*/

	// RVA: -1 Offset: -1
	public TSelf SetDurationRemain(Nullable<int> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9A9F0 Offset: 0x2F969F0 VA: 0x2F9A9F0
	|-TrackingEventLevelSessionEndBase<object>.SetDurationRemain
	*/

	// RVA: -1 Offset: -1
	public TSelf SetDurationPlay(Nullable<int> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9AA4C Offset: 0x2F96A4C VA: 0x2F9AA4C
	|-TrackingEventLevelSessionEndBase<object>.SetDurationPlay
	*/

	// RVA: -1 Offset: -1
	public TSelf SetProgress(Nullable<float> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9AAA8 Offset: 0x2F96AA8 VA: 0x2F9AAA8
	|-TrackingEventLevelSessionEndBase<object>.SetProgress
	*/

	// RVA: -1 Offset: -1
	public TSelf SetItemsTotal(Nullable<int> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9AB04 Offset: 0x2F96B04 VA: 0x2F9AB04
	|-TrackingEventLevelSessionEndBase<object>.SetItemsTotal
	*/

	// RVA: -1 Offset: -1
	public TSelf SetItemsCleared(Nullable<int> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9AB60 Offset: 0x2F96B60 VA: 0x2F9AB60
	|-TrackingEventLevelSessionEndBase<object>.SetItemsCleared
	*/

	// RVA: -1 Offset: -1
	public TSelf SetActionSeq(string value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9ABBC Offset: 0x2F96BBC VA: 0x2F9ABBC
	|-TrackingEventLevelSessionEndBase<object>.SetActionSeq
	*/

	// RVA: -1 Offset: -1
	protected void WriteSessionEndParameters(List<DinoTrackingParameter> buffer) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2F9AC20 Offset: 0x2F96C20 VA: 0x2F9AC20
	|-TrackingEventLevelSessionEndBase<object>.WriteSessionEndParameters
	*/
}

