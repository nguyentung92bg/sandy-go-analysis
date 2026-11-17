// Namespace: Dino.BusSand.App.UI
public class BattleRoyaleWaitPanel : UIPanel // TypeDefIndex: 3737
{
	// Fields
	private static readonly string[] Keys; // 0x0
	private Action _onClose; // 0x38
	private BattleRoyaleCore _core; // 0x40
	private Transform _prog; // 0x48
	private int _max; // 0x50
	private int _cur; // 0x54
	private bool _canClose; // 0x58
	private bool _closed; // 0x59
	private float _lastTick; // 0x5C

	// Methods

	// RVA: 0x219E2C8 Offset: 0x219A2C8 VA: 0x219E2C8 Slot: 4
	public override void OnOpen(object param) { }

	[IteratorStateMachine(typeof(BattleRoyaleWaitPanel.<Sfx>d__10))]
	// RVA: 0x219E9F4 Offset: 0x219A9F4 VA: 0x219E9F4
	private static IEnumerator Sfx(string id, float delay) { }

	// RVA: 0x219E81C Offset: 0x219A81C VA: 0x219E81C
	private void SetNum(int n) { }

	[IteratorStateMachine(typeof(BattleRoyaleWaitPanel.<Animate>d__12))]
	// RVA: 0x219E988 Offset: 0x219A988 VA: 0x219E988
	private IEnumerator Animate() { }

	// RVA: 0x219EAC0 Offset: 0x219AAC0 VA: 0x219EAC0
	private void OnMaskClick() { }

	// RVA: 0x219EB20 Offset: 0x219AB20 VA: 0x219EB20 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x219EB34 Offset: 0x219AB34 VA: 0x219EB34
	public void .ctor() { }

	// RVA: 0x219EB44 Offset: 0x219AB44 VA: 0x219EB44
	private static void .cctor() { }
}

