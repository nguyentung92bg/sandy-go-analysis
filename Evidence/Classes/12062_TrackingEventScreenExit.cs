// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventScreenExit : TrackingEventBase // TypeDefIndex: 12062
{
	// Fields
	private string prev_screen_name; // 0x18
	private Nullable<int> duration_prev_screen; // 0x20

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x247A368 Offset: 0x2476368 VA: 0x247A368 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x247A3A8 Offset: 0x24763A8 VA: 0x247A3A8 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x247A42C Offset: 0x247642C VA: 0x247A42C
	public TrackingEventScreenExit SetPrevScreenName(string value) { }

	// RVA: 0x247A448 Offset: 0x2476448 VA: 0x247A448
	public TrackingEventScreenExit SetDurationPrevScreen(Nullable<int> value) { }

	// RVA: 0x247A450 Offset: 0x2476450 VA: 0x247A450
	public void .ctor() { }
}

