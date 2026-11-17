// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventFeatureOpen : TrackingEventFeatureBase<TrackingEventFeatureOpen> // TypeDefIndex: 12056
{
	// Fields
	private Nullable<EFeatureOpenType> open_type; // 0x48
	private Nullable<int> open_index; // 0x50

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x2479CC4 Offset: 0x2475CC4 VA: 0x2479CC4 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x2479D04 Offset: 0x2475D04 VA: 0x2479D04 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x2479DC8 Offset: 0x2475DC8 VA: 0x2479DC8
	public void .ctor(string featureName) { }

	// RVA: 0x2479E20 Offset: 0x2475E20 VA: 0x2479E20
	public TrackingEventFeatureOpen SetOpenType(Nullable<EFeatureOpenType> value) { }

	// RVA: 0x2479E28 Offset: 0x2475E28 VA: 0x2479E28
	public TrackingEventFeatureOpen SetOpenIndex(Nullable<int> value) { }
}

