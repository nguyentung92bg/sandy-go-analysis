// Namespace: Dino.BusSand.App.UI
public class YachtRacingTrackRow : MonoBehaviour // TypeDefIndex: 3936
{
	// Fields
	private static readonly Vector2 FlagOrgPos; // 0x0
	private YachtRacingBot _bot; // 0x20
	private int _max; // 0x28
	private int _stage; // 0x2C
	private float _trackHeight; // 0x30
	private bool _finish; // 0x34
	private bool _bound; // 0x35
	private Action _onClaim; // 0x38
	private Action<RectTransform, Vector2> _onShowTips; // 0x40
	private RectTransform _yacht; // 0x48
	private RectTransform _playerWin; // 0x50
	private RectTransform _botWin; // 0x58
	private RectTransform _botTrophy; // 0x60
	private Transform _processTxt; // 0x68
	private Transform _borderLine; // 0x70
	private Transform _headBg; // 0x78
	private Transform _goldMedal; // 0x80
	private Image _headBgImg; // 0x88
	private Image _yachtIcon; // 0x90
	private Image _playerWinTrophy; // 0x98
	private Image _botWinTrophy; // 0xA0
	private GameObject _idleEff; // 0xA8
	private GameObject _moveEff; // 0xB0
	private GameObject _gameWinEff; // 0xB8
	private CanvasGroup _moveEffCg; // 0xC0
	private Coroutine _forward; // 0xC8
	private Coroutine _flag; // 0xD0
	private Coroutine _fade; // 0xD8
	private Coroutine _medal; // 0xE0

	// Properties
	public YachtRacingBot Bot { get; }
	public bool IsPlayer { get; }
	public RectTransform PlayerWinRect { get; }

	// Methods

	// RVA: 0x21F520C Offset: 0x21F120C VA: 0x21F520C
	public YachtRacingBot get_Bot() { }

	// RVA: 0x21F5214 Offset: 0x21F1214 VA: 0x21F5214
	public bool get_IsPlayer() { }

	// RVA: 0x21F5234 Offset: 0x21F1234 VA: 0x21F5234
	public void Init(YachtRacingBot bot, int maxProcess, float racingRootHeight, int stage, Action onClaim, Action<RectTransform, Vector2> onShowTips) { }

	// RVA: 0x21F5858 Offset: 0x21F1858 VA: 0x21F5858
	private void InitComponent() { }

	// RVA: 0x21F6354 Offset: 0x21F2354 VA: 0x21F6354
	private void AddBtnEvent() { }

	// RVA: 0x21F64FC Offset: 0x21F24FC VA: 0x21F64FC
	private void OnClaimBtnClick() { }

	// RVA: 0x21F6528 Offset: 0x21F2528 VA: 0x21F6528
	private float LaneY(int win) { }

	// RVA: 0x21F61C0 Offset: 0x21F21C0 VA: 0x21F61C0
	private void InitYachtPos() { }

	// RVA: 0x21F6614 Offset: 0x21F2614 VA: 0x21F6614
	public void HideLine() { }

	// RVA: 0x21F6310 Offset: 0x21F2310 VA: 0x21F6310
	public void ActiveYacht(bool isActive) { }

	// RVA: 0x21F6620 Offset: 0x21F2620 VA: 0x21F6620
	public void PlayForward(YachtRacingBot bot, bool playMoveSound, bool playDownHitSound) { }

	[IteratorStateMachine(typeof(YachtRacingTrackRow.<Forward>d__42))]
	// RVA: 0x21F6A6C Offset: 0x21F2A6C VA: 0x21F6A6C
	private IEnumerator Forward(float targetY, bool finish, bool playMoveSound) { }

	// RVA: 0x21F6B30 Offset: 0x21F2B30 VA: 0x21F6B30
	private void OnForwardComplete(bool finish) { }

	[IteratorStateMachine(typeof(YachtRacingTrackRow.<FadeMoveEff>d__44))]
	// RVA: 0x21F6BF8 Offset: 0x21F2BF8 VA: 0x21F6BF8
	private IEnumerator FadeMoveEff() { }

	// RVA: 0x21F685C Offset: 0x21F285C VA: 0x21F685C
	private void SnapForward(float targetY, bool finish) { }

	// RVA: 0x21F67B0 Offset: 0x21F27B0 VA: 0x21F67B0
	private void RefreshGoldMedal() { }

	[IteratorStateMachine(typeof(YachtRacingTrackRow.<GoldMedalLater>d__47))]
	// RVA: 0x21F6C8C Offset: 0x21F2C8C VA: 0x21F6C8C
	private IEnumerator GoldMedalLater() { }

	// RVA: 0x21F6D20 Offset: 0x21F2D20 VA: 0x21F6D20
	private void PlayFinishFlagAnim() { }

	[IteratorStateMachine(typeof(YachtRacingTrackRow.<FlagDrop>d__49))]
	// RVA: 0x21F6F18 Offset: 0x21F2F18 VA: 0x21F6F18
	private IEnumerator FlagDrop(RectTransform flag) { }

	// RVA: 0x21F6FC8 Offset: 0x21F2FC8 VA: 0x21F6FC8
	public RectTransform get_PlayerWinRect() { }

	// RVA: 0x21F6FD0 Offset: 0x21F2FD0 VA: 0x21F6FD0
	private void OnDisable() { }

	// RVA: 0x21F7018 Offset: 0x21F3018 VA: 0x21F7018
	public void .ctor() { }

	// RVA: 0x21F7028 Offset: 0x21F3028 VA: 0x21F7028
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x21F7078 Offset: 0x21F3078 VA: 0x21F7078
	private void <AddBtnEvent>b__35_0() { }
}

