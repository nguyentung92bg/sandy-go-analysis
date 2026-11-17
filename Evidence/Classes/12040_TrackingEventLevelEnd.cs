// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventLevelEnd : TrackingEventLevelSessionEndBase<TrackingEventLevelEnd> // TypeDefIndex: 12040
{
	// Fields
	private Nullable<TrackingEventLevelEnd.EResult> result; // 0x88
	private string lose_by; // 0x90

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x24790CC Offset: 0x24750CC VA: 0x24790CC Slot: 6
	public override string get_EventName() { }

	// RVA: 0x247910C Offset: 0x247510C VA: 0x247910C Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x24791D0 Offset: 0x24751D0 VA: 0x24791D0
	public void .ctor(int level) { }

	// RVA: 0x2479228 Offset: 0x2475228 VA: 0x2479228
	public TrackingEventLevelEnd SetResult(TrackingEventLevelEnd.EResult value) { }

	// RVA: 0x2479294 Offset: 0x2475294 VA: 0x2479294
	public TrackingEventLevelEnd SetLoseBy(string value) { }
}

