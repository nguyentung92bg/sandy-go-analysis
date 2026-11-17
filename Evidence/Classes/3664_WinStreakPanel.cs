// Namespace: Dino.BusSand.App.UI
public class WinStreakPanel : UIPanel, IKitPanel // TypeDefIndex: 3664
{
	// Fields
	public const string PrefabKey = "UIWinStreak2D";
	private const float SegH = 650;
	private const float BaseY = 760;
	private const float TopPad = 1000;
	private const float PipeX = -440;
	private const float LedgeX = -183;
	private const float ChestX = -103.5;
	private const float LiftX = 280;
	private const float StepTime = 0.35;
	private const float StepPause = 0.1;
	private const float FallTime = 0.5;
	private const float FocusK = 0.42;
	private const float HeaderH = 560;
	private RectTransform _view; // 0x38
	private RectTransform _content; // 0x40
	private RectTransform _far; // 0x48
	private RectTransform _clouds; // 0x50
	private RectTransform _lift; // 0x58
	private RectTransform _bus; // 0x60
	private RectTransform _busBody; // 0x68
	private RectTransform _fill; // 0x70
	private RectTransform _badge; // 0x78
	private RectTransform _tooltip; // 0x80
	private TextMeshProUGUI _badgeText; // 0x88
	private TextMeshProUGUI _timer; // 0x90
	private float _tipAt; // 0x98
	private ScrollRect _scroll; // 0xA0
	private readonly List<WinStreakPanel.Stop> _stops; // 0xA8
	private float _shownFloor; // 0xB0
	private bool _busy; // 0xB4
	private bool _skip; // 0xB5
	private float _nextTimer; // 0xB8

	// Methods

	// RVA: 0x2335C1C Offset: 0x2331C1C VA: 0x2335C1C Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x2335E14 Offset: 0x2331E14 VA: 0x2335E14
	private void BuildSky() { }

	// RVA: 0x2336298 Offset: 0x2332298 VA: 0x2336298
	private void BuildTower() { }

	// RVA: 0x2337DE8 Offset: 0x2333DE8 VA: 0x2337DE8
	private void BuildStop(WinStreakCheckpoint cp, int i) { }

	// RVA: 0x2336EE0 Offset: 0x2332EE0 VA: 0x2336EE0
	private void BuildHeader() { }

	// RVA: 0x2337B50 Offset: 0x2333B50 VA: 0x2337B50
	private static void Place(RectTransform rt, float x, float y) { }

	// RVA: 0x2337D04 Offset: 0x2333D04 VA: 0x2337D04
	private static RectTransform Tiled(Transform parent, string name, string key, float width, float height, float unused) { }

	// RVA: 0x2337BAC Offset: 0x2333BAC VA: 0x2337BAC
	private static float FloorY(float floor) { }

	// RVA: 0x233775C Offset: 0x233375C VA: 0x233775C
	private void SetFloor(float floor, bool scroll) { }

	// RVA: 0x2338BBC Offset: 0x2334BBC VA: 0x2338BBC
	private void ScrollTo(float y) { }

	// RVA: 0x2338CBC Offset: 0x2334CBC VA: 0x2338CBC
	private void Parallax() { }

	// RVA: 0x2338440 Offset: 0x2334440 VA: 0x2338440
	private void RefreshStop(WinStreakPanel.Stop st, bool animate) { }

	[IteratorStateMachine(typeof(WinStreakPanel.<Intro>d__45))]
	// RVA: 0x2337AE4 Offset: 0x2333AE4 VA: 0x2337AE4
	private IEnumerator Intro() { }

	[IteratorStateMachine(typeof(WinStreakPanel.<Climb>d__46))]
	// RVA: 0x2338DC8 Offset: 0x2334DC8 VA: 0x2338DC8
	private IEnumerator Climb(int target) { }

	[IteratorStateMachine(typeof(WinStreakPanel.<Fall>d__47))]
	// RVA: 0x2338E6C Offset: 0x2334E6C VA: 0x2338E6C
	private IEnumerator Fall(int target) { }

	[IteratorStateMachine(typeof(WinStreakPanel.<Hop>d__48))]
	// RVA: 0x2338F10 Offset: 0x2334F10 VA: 0x2338F10
	private IEnumerator Hop(float height, float duration) { }

	[IteratorStateMachine(typeof(WinStreakPanel.<Tour>d__49))]
	// RVA: 0x2338FB8 Offset: 0x2334FB8 VA: 0x2338FB8
	private IEnumerator Tour() { }

	// RVA: 0x233904C Offset: 0x233504C VA: 0x233904C
	private void OnChestTap(WinStreakPanel.Stop st) { }

	[IteratorStateMachine(typeof(WinStreakPanel.<FocusThenTip>d__51))]
	// RVA: 0x23392F4 Offset: 0x23352F4 VA: 0x23392F4
	private IEnumerator FocusThenTip(WinStreakPanel.Stop st) { }

	// RVA: 0x23393A4 Offset: 0x23353A4 VA: 0x23393A4
	private void ShowTooltip(WinStreakPanel.Stop st) { }

	// RVA: 0x233923C Offset: 0x233523C VA: 0x233923C
	private void HideTooltip() { }

	// RVA: 0x23391B0 Offset: 0x23351B0 VA: 0x23391B0
	private void OnClaim(WinStreakPanel.Stop st) { }

	[IteratorStateMachine(typeof(WinStreakPanel.<OpenChest>d__55))]
	// RVA: 0x2339C24 Offset: 0x2335C24 VA: 0x2339C24
	private IEnumerator OpenChest(WinStreakPanel.Stop st) { }

	// RVA: 0x2339CD4 Offset: 0x2335CD4 VA: 0x2339CD4
	private void OnInfo() { }

	// RVA: 0x2339E28 Offset: 0x2335E28 VA: 0x2339E28
	private void Update() { }

	// RVA: 0x2339EF4 Offset: 0x2335EF4 VA: 0x2339EF4 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x2339F20 Offset: 0x2335F20 VA: 0x2339F20
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2339FA8 Offset: 0x2335FA8 VA: 0x2339FA8
	private void <BuildTower>b__35_0() { }

	[CompilerGenerated]
	// RVA: 0x2339FC0 Offset: 0x2335FC0 VA: 0x2339FC0
	private void <BuildTower>b__35_1(Vector2 _) { }

	[CompilerGenerated]
	// RVA: 0x233A060 Offset: 0x2336060 VA: 0x233A060
	private void <BuildHeader>b__37_0() { }
}

