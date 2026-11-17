// Namespace: Dino.BusSand.App.UI
public class BattleRoyaleResultPanel : UIPanel // TypeDefIndex: 3706
{
	// Fields
	private const string AniA = "ani_UIBattleRoyaleResult_Standard_a";
	private const string AniA2 = "ani_UIBattleRoyaleResult_Standard_a2";
	private const string AniB = "ani_UIBattleRoyaleResult_Standard_b";
	private static readonly string[] Keys; // 0x0
	private Action _onClose; // 0x38
	private BattleRoyaleCore _core; // 0x40
	private Animation _anim; // 0x48
	private CanvasGroup _maskGroup; // 0x50
	private CommerceCoinBar _coins; // 0x58
	private KeyValuePair<int, long> _reward; // 0x60
	private bool _hasReward; // 0x70
	private bool _bornStarted; // 0x71
	private bool _bornFinished; // 0x72
	private bool _closed; // 0x73
	private int _state; // 0x74
	private GameObject _cloned; // 0x78

	// Methods

	// RVA: 0x218F93C Offset: 0x218B93C VA: 0x218F93C Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x218FCD0 Offset: 0x218BCD0 VA: 0x218FCD0
	private void Refresh() { }

	[IteratorStateMachine(typeof(BattleRoyaleResultPanel.<BornFallback>d__18))]
	// RVA: 0x2190180 Offset: 0x218C180 VA: 0x2190180
	private IEnumerator BornFallback() { }

	// RVA: 0x2190214 Offset: 0x218C214 VA: 0x2190214
	public void StartBorn(Transform target, float duration) { }

	[IteratorStateMachine(typeof(BattleRoyaleResultPanel.<Born>d__20))]
	// RVA: 0x2190284 Offset: 0x218C284 VA: 0x2190284
	private IEnumerator Born(Transform target, float duration) { }

	[IteratorStateMachine(typeof(BattleRoyaleResultPanel.<Sfx>d__21))]
	// RVA: 0x2190344 Offset: 0x218C344 VA: 0x2190344
	private static IEnumerator Sfx(string id, float delay) { }

	[IteratorStateMachine(typeof(BattleRoyaleResultPanel.<CoinStackVibrate>d__22))]
	// RVA: 0x21903E8 Offset: 0x218C3E8 VA: 0x21903E8
	private static IEnumerator CoinStackVibrate() { }

	// RVA: 0x2190468 Offset: 0x218C468 VA: 0x2190468
	private void OnMaskClick() { }

	[IteratorStateMachine(typeof(BattleRoyaleResultPanel.<GetReward>d__24))]
	// RVA: 0x21904C8 Offset: 0x218C4C8 VA: 0x21904C8
	private IEnumerator GetReward() { }

	// RVA: 0x2190534 Offset: 0x218C534 VA: 0x2190534
	private void CloseFlow() { }

	// RVA: 0x21905BC Offset: 0x218C5BC VA: 0x21905BC Slot: 7
	public override bool OnBack() { }

	// RVA: 0x21905D0 Offset: 0x218C5D0 VA: 0x21905D0
	public void .ctor() { }

	// RVA: 0x21905D8 Offset: 0x218C5D8 VA: 0x21905D8
	private static void .cctor() { }
}

