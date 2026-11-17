// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventLoadingFinish : TrackingEventLoadingBase<TrackingEventLoadingFinish> // TypeDefIndex: 12073
{
	// Fields
	private readonly string result; // 0x48
	private Nullable<int> load_time; // 0x50
	private string error_code; // 0x58
	private Nullable<long> response_bytes; // 0x60
	private Nullable<int> retry_count; // 0x70

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x247AC88 Offset: 0x2476C88 VA: 0x247AC88 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x247ACC8 Offset: 0x2476CC8 VA: 0x247ACC8 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x247AEA8 Offset: 0x2476EA8 VA: 0x247AEA8
	public void .ctor(string dataSource, string resourceType, string loadContext, string result) { }

	// RVA: 0x247AF2C Offset: 0x2476F2C VA: 0x247AF2C
	public TrackingEventLoadingFinish SetLoadTime(Nullable<int> value) { }

	// RVA: 0x247AF34 Offset: 0x2476F34 VA: 0x247AF34
	public TrackingEventLoadingFinish SetErrorCode(string value) { }

	// RVA: 0x247AF50 Offset: 0x2476F50 VA: 0x247AF50
	public TrackingEventLoadingFinish SetResponseBytes(Nullable<long> value) { }

	// RVA: 0x247AF58 Offset: 0x2476F58 VA: 0x247AF58
	public TrackingEventLoadingFinish SetRetryCount(Nullable<int> value) { }
}

