// Namespace: Dino.BusSand.App.UI
public class YachtRacingHallButton : MonoBehaviour // TypeDefIndex: 3904
{
	// Fields
	private const int ActivityId = 5;
	private const int LockedShowLevels = 5;
	private const float BotsRefreshInterval = 60;
	private static YachtRacingHallButton s_current; // 0x0
	private UIPanel _hud; // 0x20
	private YachtRacingCore _core; // 0x28
	private Transform _anchor; // 0x30
	private Transform _startObj; // 0x38
	private Transform _timeObj; // 0x40
	private Transform _lockObj; // 0x48
	private Transform _finishedObj; // 0x50
	private Transform _openObj; // 0x58
	private Transform _stageTxt; // 0x60
	private Transform _rankingTxt; // 0x68
	private Transform _glowEff; // 0x70
	private RectTransform _progress; // 0x78
	private RectTransform _progressTxt; // 0x80
	private YachtRacingState _state; // 0x88
	private bool _animating; // 0x8C
	private bool _refreshPending; // 0x8D
	private bool _countdownOn; // 0x8E
	private bool _subscribed; // 0x8F
	private int _tickId; // 0x90

	// Properties
	private bool Alive { get; }

	// Methods

	// RVA: 0x21E80AC Offset: 0x21E40AC VA: 0x21E80AC
	public static void Bind(UIPanel hud, YachtRacingFeature feature) { }

	[IteratorStateMachine(typeof(YachtRacingHallButton.<PlayProgressFly>d__24))]
	// RVA: 0x21E8984 Offset: 0x21E4984 VA: 0x21E8984
	public static IEnumerator PlayProgressFly() { }

	// RVA: 0x21E8218 Offset: 0x21E4218 VA: 0x21E8218
	private void Setup(UIPanel hud, YachtRacingFeature f) { }

	// RVA: 0x21E8B7C Offset: 0x21E4B7C VA: 0x21E8B7C
	private void InitComponent() { }

	// RVA: 0x21E8A04 Offset: 0x21E4A04 VA: 0x21E8A04
	private void Detach() { }

	// RVA: 0x21E9648 Offset: 0x21E5648 VA: 0x21E9648
	private void OnDestroy() { }

	// RVA: 0x21E9704 Offset: 0x21E5704 VA: 0x21E9704
	private bool get_Alive() { }

	// RVA: 0x21E97B8 Offset: 0x21E57B8 VA: 0x21E97B8
	private void OnStateChanged() { }

	// RVA: 0x21E97E0 Offset: 0x21E57E0 VA: 0x21E97E0
	private void OnBotsUpdated() { }

	// RVA: 0x21E98BC Offset: 0x21E58BC VA: 0x21E98BC
	public void RefreshRanking(int ranking) { }

	// RVA: 0x21E91EC Offset: 0x21E51EC VA: 0x21E91EC
	public void RefreshState() { }

	// RVA: 0x21E9970 Offset: 0x21E5970 VA: 0x21E9970
	private static bool ShouldShowLocked() { }

	// RVA: 0x21E98F4 Offset: 0x21E58F4 VA: 0x21E98F4
	private void HideAll() { }

	// RVA: 0x21E908C Offset: 0x21E508C VA: 0x21E908C
	private void SetVisible(bool on) { }

	// RVA: 0x21E99E4 Offset: 0x21E59E4 VA: 0x21E99E4
	private void OnOpenYachtRacingBtnClick() { }

	[IteratorStateMachine(typeof(YachtRacingHallButton.<Tick>d__39))]
	// RVA: 0x21E9010 Offset: 0x21E5010 VA: 0x21E9010
	private IEnumerator Tick(int id) { }

	// RVA: 0x21E9C6C Offset: 0x21E5C6C VA: 0x21E9C6C
	private void OnCountDown() { }

	[IteratorStateMachine(typeof(YachtRacingHallButton.<ProgressAnim>d__41))]
	// RVA: 0x21E9E40 Offset: 0x21E5E40 VA: 0x21E9E40
	private IEnumerator ProgressAnim() { }

	// RVA: 0x21E9ED4 Offset: 0x21E5ED4 VA: 0x21E9ED4
	public void .ctor() { }
}

