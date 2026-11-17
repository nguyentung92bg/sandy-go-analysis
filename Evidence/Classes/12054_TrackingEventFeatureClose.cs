// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventFeatureClose : TrackingEventFeatureBase<TrackingEventFeatureClose> // TypeDefIndex: 12054
{
	// Fields
	private Nullable<int> open_index; // 0x48
	private Nullable<int> duration_feature; // 0x50

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x2479A7C Offset: 0x2475A7C VA: 0x2479A7C Slot: 6
	public override string get_EventName() { }

	// RVA: 0x2479ABC Offset: 0x2475ABC VA: 0x2479ABC Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x2479B6C Offset: 0x2475B6C VA: 0x2479B6C
	public void .ctor(string featureName) { }

	// RVA: 0x2479BC4 Offset: 0x2475BC4 VA: 0x2479BC4
	public TrackingEventFeatureClose SetOpenIndex(Nullable<int> value) { }

	// RVA: 0x2479BCC Offset: 0x2475BCC VA: 0x2479BCC
	public TrackingEventFeatureClose SetDurationFeature(Nullable<int> value) { }
}

