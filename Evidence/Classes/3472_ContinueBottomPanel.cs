// Namespace: Dino.BusSand.App.UI
public class ContinueBottomPanel : UIPanel // TypeDefIndex: 3472
{
	// Fields
	public const string Prefab = "UIContinueBottom";
	private const string CloseAnim = "UIContinueBottom_anim_c";
	private const float AutoPlayInterval = 5;
	private const float AutoPlayAnim = 0.6;
	private const float AutoPlayCooldown = 0.7;
	private static int s_index; // 0x0
	private static int s_total; // 0x4
	private static bool s_purchaseStarted; // 0x8
	private ContinueBottomPager _pager; // 0x38
	private readonly List<GameObject> _dots; // 0x40
	private int _autoSeq; // 0x48
	private bool _autoRunning; // 0x4C
	private bool _advancing; // 0x4D
	private bool _closingAnim; // 0x4E
	private Transform _goldenTime; // 0x50
	private int _goldenPack; // 0x58

	// Methods

	// RVA: 0x22BEEF8 Offset: 0x22BAEF8 VA: 0x22BEEF8
	public static void OnContinueOpened(int index, int total) { }

	// RVA: 0x22BF1B8 Offset: 0x22BB1B8 VA: 0x22BF1B8
	public static void OnCombinedOpened() { }

	// RVA: 0x22BEF50 Offset: 0x22BAF50 VA: 0x22BEF50
	private static void ShowIfNeeded() { }

	// RVA: 0x22BF694 Offset: 0x22BB694 VA: 0x22BF694
	public static int HaveContinueAniClose(bool triggerCloseBottom = True) { }

	// RVA: 0x22BF830 Offset: 0x22BB830 VA: 0x22BF830
	public static string AniCloseClip() { }

	// RVA: 0x22BF8B4 Offset: 0x22BB8B4 VA: 0x22BF8B4 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x22C12FC Offset: 0x22BD2FC VA: 0x22C12FC Slot: 6
	public override void OnClose() { }

	// RVA: 0x22C1454 Offset: 0x22BD454 VA: 0x22C1454 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x22C1474 Offset: 0x22BD474 VA: 0x22C1474
	private void Update() { }

	// RVA: 0x22BF208 Offset: 0x22BB208 VA: 0x22BF208
	private void BringToFront() { }

	// RVA: 0x22BF7E8 Offset: 0x22BB7E8 VA: 0x22BF7E8
	private void CloseAnimated() { }

	[IteratorStateMachine(typeof(ContinueBottomPanel.<CloseAfterAnim>d__27))]
	// RVA: 0x22C18F8 Offset: 0x22BD8F8 VA: 0x22C18F8
	private IEnumerator CloseAfterAnim() { }

	// RVA: 0x22C0198 Offset: 0x22BC198 VA: 0x22C0198
	private void InitPassport(Transform root) { }

	// RVA: 0x22C198C Offset: 0x22BD98C VA: 0x22C198C
	private void OnPassportBuy() { }

	// RVA: 0x22C06A4 Offset: 0x22BC6A4 VA: 0x22C06A4
	private void InitGolden(Transform root, int packId) { }

	// RVA: 0x22C1760 Offset: 0x22BD760 VA: 0x22C1760
	private void RefreshGoldenTime() { }

	// RVA: 0x22C1A6C Offset: 0x22BDA6C VA: 0x22C1A6C
	private void OnGoldenUnlock(int packId) { }

	// RVA: 0x22C0F94 Offset: 0x22BCF94 VA: 0x22C0F94
	private void RefreshDots(int count, ScrollRect scroll) { }

	// RVA: 0x22C1B30 Offset: 0x22BDB30 VA: 0x22C1B30
	private static void SetDot(GameObject dot, bool selected) { }

	// RVA: 0x22C1C88 Offset: 0x22BDC88 VA: 0x22C1C88
	private void ApplyDots(int page) { }

	[IteratorStateMachine(typeof(ContinueBottomPanel.<PinToFirstPageNextFrame>d__36))]
	// RVA: 0x22C1290 Offset: 0x22BD290 VA: 0x22C1290
	private IEnumerator PinToFirstPageNextFrame() { }

	// RVA: 0x22C1DC8 Offset: 0x22BDDC8 VA: 0x22C1DC8
	private void OnDragEnded() { }

	// RVA: 0x22C1E60 Offset: 0x22BDE60 VA: 0x22C1E60
	private void StartAutoPlay() { }

	[IteratorStateMachine(typeof(ContinueBottomPanel.<AutoPlay>d__39))]
	// RVA: 0x22C1F20 Offset: 0x22BDF20 VA: 0x22C1F20
	private IEnumerator AutoPlay(int seq) { }

	[IteratorStateMachine(typeof(ContinueBottomPanel.<ClearAdvancing>d__40))]
	// RVA: 0x22C1FC4 Offset: 0x22BDFC4 VA: 0x22C1FC4
	private IEnumerator ClearAdvancing() { }

	// RVA: 0x22C2058 Offset: 0x22BE058 VA: 0x22C2058
	public void .ctor() { }
}

