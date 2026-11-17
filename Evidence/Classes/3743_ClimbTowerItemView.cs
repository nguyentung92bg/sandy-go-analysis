// Namespace: Dino.BusSand.App.UI
public class ClimbTowerItemView : MonoBehaviour // TypeDefIndex: 3743
{
	// Fields
	private const int Locked = 0;
	private const int Unlocked = 1;
	private const int Claimed = 2;
	private ClimbTowerPanel _panel; // 0x20
	private ClimbTowerFeature _f; // 0x28
	private int _index; // 0x30
	private int _winPoint; // 0x34
	private int _rewardId; // 0x38
	private int _state; // 0x3C
	private bool _showTips; // 0x40
	private bool _rising; // 0x41
	private bool _init; // 0x42
	private Transform _box; // 0x48
	private Transform _platformBg; // 0x50
	private Transform _hex; // 0x58
	private Transform _clover; // 0x60
	private Transform _reward; // 0x68
	private Transform _rewardTemplate; // 0x70
	private Transform _claimTag; // 0x78
	private Transform _flagLocked; // 0x80
	private Transform _flagReach; // 0x88
	private readonly List<GameObject> _rewardItems; // 0x90

	// Properties
	public int Index { get; }
	public int WinPoint { get; }
	public bool IsUnlockedBox { get; }

	// Methods

	// RVA: 0x21A101C Offset: 0x219D01C VA: 0x21A101C
	public int get_Index() { }

	// RVA: 0x21A1024 Offset: 0x219D024 VA: 0x21A1024
	public int get_WinPoint() { }

	// RVA: 0x21A102C Offset: 0x219D02C VA: 0x21A102C
	private Transform F(string path) { }

	// RVA: 0x21A1054 Offset: 0x219D054 VA: 0x21A1054
	private void Init() { }

	// RVA: 0x21A16E0 Offset: 0x219D6E0 VA: 0x21A16E0
	public void SetData(int index, int winPoint, int rewardId, ClimbTowerPanel panel, ClimbTowerFeature f) { }

	// RVA: 0x21A17D8 Offset: 0x219D7D8 VA: 0x21A17D8
	public void UpdateBoxState() { }

	// RVA: 0x21A1858 Offset: 0x219D858 VA: 0x21A1858
	private void RefreshAllUI() { }

	// RVA: 0x21A1ED8 Offset: 0x219DED8 VA: 0x21A1ED8
	private void RefreshSprite() { }

	// RVA: 0x21A236C Offset: 0x219E36C VA: 0x21A236C
	public void HideRewardTips() { }

	// RVA: 0x21A238C Offset: 0x219E38C VA: 0x21A238C
	private void OnBoxClick() { }

	[IteratorStateMachine(typeof(ClimbTowerItemView.<AfterClaim>d__34))]
	// RVA: 0x21A3074 Offset: 0x219F074 VA: 0x21A3074
	private IEnumerator AfterClaim(float t) { }

	// RVA: 0x21A26D0 Offset: 0x219E6D0 VA: 0x21A26D0
	private void BuildRewardBubble() { }

	// RVA: 0x21A33A8 Offset: 0x219F3A8 VA: 0x21A33A8
	public void PlayReachAnim(int continueWinCount) { }

	[IteratorStateMachine(typeof(ClimbTowerItemView.<AfterReach>d__37))]
	// RVA: 0x21A362C Offset: 0x219F62C VA: 0x21A362C
	private IEnumerator AfterReach(float t) { }

	// RVA: 0x21A36D0 Offset: 0x219F6D0 VA: 0x21A36D0
	public bool get_IsUnlockedBox() { }

	// RVA: 0x21A224C Offset: 0x219E24C VA: 0x21A224C
	private static void SetActive(Transform t, bool on) { }

	// RVA: 0x21A15F0 Offset: 0x219D5F0 VA: 0x21A15F0
	private static void SetTexts(Transform node, string text) { }

	// RVA: 0x21A36E0 Offset: 0x219F6E0 VA: 0x21A36E0
	public void .ctor() { }
}

