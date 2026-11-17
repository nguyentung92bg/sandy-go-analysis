// Namespace: Dino.BusSand.App.UI
public class BattleRoyaleStartPanel : UIPanel // TypeDefIndex: 3725
{
	// Fields
	private static readonly string[] Keys; // 0x0
	private BattleRoyaleStartPanel.Param _p; // 0x38
	private BattleRoyaleCore _core; // 0x40
	private bool _waiting; // 0x48
	private Coroutine _wait; // 0x50
	private Coroutine _timer; // 0x58

	// Methods

	// RVA: 0x2199720 Offset: 0x2195720 VA: 0x2199720 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x2199D38 Offset: 0x2195D38 VA: 0x2199D38
	private void Refresh() { }

	// RVA: 0x219A1F8 Offset: 0x21961F8 VA: 0x219A1F8
	private void SetMood(bool unhappy) { }

	// RVA: 0x219A3F8 Offset: 0x21963F8 VA: 0x219A3F8
	private void SetGate(bool locked) { }

	[IteratorStateMachine(typeof(BattleRoyaleStartPanel.<Countdown>d__11))]
	// RVA: 0x219A504 Offset: 0x2196504 VA: 0x219A504
	private IEnumerator Countdown(long end) { }

	// RVA: 0x219A6D8 Offset: 0x21966D8 VA: 0x219A6D8
	private void OnStartClick() { }

	[IteratorStateMachine(typeof(BattleRoyaleStartPanel.<WaitAndStart>d__13))]
	// RVA: 0x219A7C8 Offset: 0x21967C8 VA: 0x219A7C8
	private IEnumerator WaitAndStart(float seconds) { }

	// RVA: 0x219A86C Offset: 0x219686C VA: 0x219A86C
	private void OnMaskClick() { }

	// RVA: 0x219A918 Offset: 0x2196918 VA: 0x219A918 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x219A92C Offset: 0x219692C VA: 0x219A92C
	public void .ctor() { }

	// RVA: 0x219A934 Offset: 0x2196934 VA: 0x219A934
	private static void .cctor() { }
}

