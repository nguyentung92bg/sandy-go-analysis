// Namespace: Dino.BusSand.App.UI
public class SimpleStreakRatePanel : UIPanel // TypeDefIndex: 3875
{
	// Fields
	private Action _callback; // 0x38
	private long _endMs; // 0x40
	private static bool s_tapped; // 0x0

	// Methods

	// RVA: 0x21DD55C Offset: 0x21D955C VA: 0x21DD55C
	public static SimpleStreakRatePanel Open(Action callback, bool tapped = False) { }

	// RVA: 0x21DD6A0 Offset: 0x21D96A0 VA: 0x21DD6A0 Slot: 4
	public override void OnOpen(object param) { }

	[IteratorStateMachine(typeof(SimpleStreakRatePanel.<CountDown>d__5))]
	// RVA: 0x21DDD54 Offset: 0x21D9D54 VA: 0x21DDD54
	private IEnumerator CountDown() { }

	// RVA: 0x21DDDE8 Offset: 0x21D9DE8 VA: 0x21DDDE8
	private void OnCloseUI() { }

	// RVA: 0x21DDE98 Offset: 0x21D9E98 VA: 0x21DDE98 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x21DDEAC Offset: 0x21D9EAC VA: 0x21DDEAC
	public void .ctor() { }
}

