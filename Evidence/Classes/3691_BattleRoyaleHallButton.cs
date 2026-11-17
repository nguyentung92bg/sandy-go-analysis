// Namespace: Dino.BusSand.App.UI
public class BattleRoyaleHallButton : MonoBehaviour // TypeDefIndex: 3691
{
	// Fields
	private static BattleRoyaleHallButton s_current; // 0x0
	private UIPanel _hud; // 0x20
	private Transform _anchor; // 0x28
	private Transform _lock; // 0x30
	private Transform _status; // 0x38
	private Transform _start; // 0x40
	private Image _slider; // 0x48
	private Coroutine _timer; // 0x50
	private Coroutine _sliderCo; // 0x58

	// Properties
	private BattleRoyaleCore Core { get; }
	private int UnlockLevel { get; }
	private bool LockedShown { get; }

	// Methods

	// RVA: 0x218AAD8 Offset: 0x2186AD8 VA: 0x218AAD8
	private BattleRoyaleCore get_Core() { }

	// RVA: 0x218AAE0 Offset: 0x2186AE0 VA: 0x218AAE0
	public static void Bind(UIPanel hud, BattleRoyaleFeature feature) { }

	// RVA: 0x218B8B0 Offset: 0x21878B0 VA: 0x218B8B0
	public static void RefreshIfPresent() { }

	// RVA: 0x218ACA4 Offset: 0x2186CA4 VA: 0x218ACA4
	private void Init() { }

	// RVA: 0x218B9F8 Offset: 0x21879F8 VA: 0x218B9F8
	private void OnDestroy() { }

	// RVA: 0x218BAAC Offset: 0x2187AAC VA: 0x218BAAC
	private static float Fill(float v) { }

	// RVA: 0x218BADC Offset: 0x2187ADC VA: 0x218BADC
	private int get_UnlockLevel() { }

	// RVA: 0x218BAE8 Offset: 0x2187AE8 VA: 0x218BAE8
	private bool get_LockedShown() { }

	// RVA: 0x218AFA0 Offset: 0x2186FA0 VA: 0x218AFA0
	public void Fresh() { }

	// RVA: 0x218BD9C Offset: 0x2187D9C VA: 0x218BD9C
	private void SetStatus(bool isStart, string text) { }

	// RVA: 0x218BCF4 Offset: 0x2187CF4 VA: 0x218BCF4
	private void StartTimer(long end, Action onFinished) { }

	[IteratorStateMachine(typeof(BattleRoyaleHallButton.<Countdown>d__23))]
	// RVA: 0x218BE8C Offset: 0x2187E8C VA: 0x218BE8C
	private IEnumerator Countdown(long end, Action onFinished) { }

	// RVA: 0x218BB60 Offset: 0x2187B60 VA: 0x218BB60
	private void StopTimer() { }

	// RVA: 0x218BBA4 Offset: 0x2187BA4 VA: 0x218BBA4
	private void UpdateSlider() { }

	// RVA: 0x218BF44 Offset: 0x2187F44 VA: 0x218BF44
	private void OnClick() { }

	[IteratorStateMachine(typeof(BattleRoyaleHallButton.<PlayWinAnimation>d__27))]
	// RVA: 0x218C244 Offset: 0x2188244 VA: 0x218C244
	public static IEnumerator PlayWinAnimation() { }

	// RVA: 0x218C2C4 Offset: 0x21882C4 VA: 0x218C2C4
	public void .ctor() { }
}

