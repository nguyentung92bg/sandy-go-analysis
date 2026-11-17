// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventAdRequest : TrackingEventAdBase<TrackingEventAdRequest> // TypeDefIndex: 12028
{
	// Fields
	private Nullable<bool> is_load; // 0x40
	private Nullable<TrackingEventAdRequest.EErrorType> error_type; // 0x44
	private string error_code; // 0x50
	private Nullable<int> load_time; // 0x58

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x24781F0 Offset: 0x24741F0 VA: 0x24781F0 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x2478230 Offset: 0x2474230 VA: 0x2478230 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x247842C Offset: 0x247442C VA: 0x247842C
	public void .ctor(string adFormat, string placement) { }

	// RVA: 0x247848C Offset: 0x247448C VA: 0x247848C
	public TrackingEventAdRequest SetIsLoad(Nullable<bool> value) { }

	// RVA: 0x2478494 Offset: 0x2474494 VA: 0x2478494
	public TrackingEventAdRequest SetErrorType(Nullable<TrackingEventAdRequest.EErrorType> value) { }

	// RVA: 0x247849C Offset: 0x247449C VA: 0x247849C
	public TrackingEventAdRequest SetErrorCode(string value) { }

	// RVA: 0x24784B8 Offset: 0x24744B8 VA: 0x24784B8
	public TrackingEventAdRequest SetLoadTime(Nullable<int> value) { }
}

