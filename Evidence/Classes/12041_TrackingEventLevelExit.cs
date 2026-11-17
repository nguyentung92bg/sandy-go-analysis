// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventLevelExit : TrackingEventLevelSessionEndBase<TrackingEventLevelExit> // TypeDefIndex: 12041
{
	// Fields
	private Nullable<int> exit_index; // 0x88

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x24792B0 Offset: 0x24752B0 VA: 0x24792B0 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x24792F0 Offset: 0x24752F0 VA: 0x24792F0 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x2479370 Offset: 0x2475370 VA: 0x2479370
	public void .ctor(int level) { }

	// RVA: 0x24793C8 Offset: 0x24753C8 VA: 0x24793C8
	public TrackingEventLevelExit SetExitIndex(Nullable<int> value) { }
}

