// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventEventEnd : TrackingEventEventBase<TrackingEventEventEnd> // TypeDefIndex: 12048
{
	// Fields
	private Nullable<int> event_start_index; // 0x40
	private Nullable<EEventEndType> event_end_type; // 0x48
	private Nullable<EEventResult> event_result; // 0x50
	private Nullable<int> event_progression; // 0x58
	private Nullable<int> duration_event; // 0x60

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x247973C Offset: 0x247573C VA: 0x247973C Slot: 6
	public override string get_EventName() { }

	// RVA: 0x247977C Offset: 0x247577C VA: 0x247977C Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x24798DC Offset: 0x24758DC VA: 0x24798DC
	public void .ctor(string eventNameIngame) { }

	// RVA: 0x2479934 Offset: 0x2475934 VA: 0x2479934
	public TrackingEventEventEnd SetEventStartIndex(Nullable<int> value) { }

	// RVA: 0x247993C Offset: 0x247593C VA: 0x247993C
	public TrackingEventEventEnd SetEventEndType(Nullable<EEventEndType> value) { }

	// RVA: 0x2479944 Offset: 0x2475944 VA: 0x2479944
	public TrackingEventEventEnd SetEventResult(Nullable<EEventResult> value) { }

	// RVA: 0x247994C Offset: 0x247594C VA: 0x247994C
	public TrackingEventEventEnd SetEventProgression(Nullable<int> value) { }

	// RVA: 0x2479954 Offset: 0x2475954 VA: 0x2479954
	public TrackingEventEventEnd SetDurationEvent(Nullable<int> value) { }
}

