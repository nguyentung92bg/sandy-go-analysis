// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventAdImpression : TrackingEventAdBase<TrackingEventAdImpression> // TypeDefIndex: 12025
{
	// Fields
	private Nullable<double> value; // 0x40
	private Nullable<bool> is_show; // 0x50
	private Nullable<TrackingEventAdImpression.EErrorType> error_type; // 0x54
	private string error_code; // 0x60

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x2477CC8 Offset: 0x2473CC8 VA: 0x2477CC8 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x2477D08 Offset: 0x2473D08 VA: 0x2477D08 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x2477F04 Offset: 0x2473F04 VA: 0x2477F04
	public void .ctor(string adFormat, string placement) { }

	// RVA: 0x2477F64 Offset: 0x2473F64 VA: 0x2477F64
	public TrackingEventAdImpression SetValue(Nullable<double> value) { }

	// RVA: 0x2477F6C Offset: 0x2473F6C VA: 0x2477F6C
	public TrackingEventAdImpression SetIsShow(Nullable<bool> value) { }

	// RVA: 0x2477F74 Offset: 0x2473F74 VA: 0x2477F74
	public TrackingEventAdImpression SetErrorType(Nullable<TrackingEventAdImpression.EErrorType> value) { }

	// RVA: 0x2477F7C Offset: 0x2473F7C VA: 0x2477F7C
	public TrackingEventAdImpression SetErrorCode(string value) { }
}

