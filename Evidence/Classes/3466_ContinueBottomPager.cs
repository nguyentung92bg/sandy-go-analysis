// Namespace: Dino.BusSand.App.UI
[DisallowMultipleComponent]
public class ContinueBottomPager : MonoBehaviour, IBeginDragHandler, IEventSystemHandler, IEndDragHandler // TypeDefIndex: 3466
{
	// Fields
	public float SnapDuration; // 0x20
	public float SwipeMinNormalizedDelta; // 0x24
	[CompilerGenerated]
	private Action<int> PageSelected; // 0x28
	[CompilerGenerated]
	private Action DragEnded; // 0x30
	private ScrollRect _scroll; // 0x38
	private RectTransform _content; // 0x40
	private RectTransform _viewport; // 0x48
	private bool _dragging; // 0x50
	private float _dragStart; // 0x54
	private int _lastReported; // 0x58
	private Coroutine _tween; // 0x60
	[CompilerGenerated]
	private int <CurrentPage>k__BackingField; // 0x68

	// Properties
	public int CurrentPage { get; set; }
	public bool IsDragging { get; }
	public int PageCount { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x22BDCD0 Offset: 0x22B9CD0 VA: 0x22BDCD0
	public void add_PageSelected(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x22BDD80 Offset: 0x22B9D80 VA: 0x22BDD80
	public void remove_PageSelected(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x22BDE30 Offset: 0x22B9E30 VA: 0x22BDE30
	public void add_DragEnded(Action value) { }

	[CompilerGenerated]
	// RVA: 0x22BDECC Offset: 0x22B9ECC VA: 0x22BDECC
	public void remove_DragEnded(Action value) { }

	[CompilerGenerated]
	// RVA: 0x22BDF68 Offset: 0x22B9F68 VA: 0x22BDF68
	public int get_CurrentPage() { }

	[CompilerGenerated]
	// RVA: 0x22BDF70 Offset: 0x22B9F70 VA: 0x22BDF70
	private void set_CurrentPage(int value) { }

	// RVA: 0x22BDF78 Offset: 0x22B9F78 VA: 0x22BDF78
	public bool get_IsDragging() { }

	// RVA: 0x22BDF80 Offset: 0x22B9F80 VA: 0x22BDF80
	public int get_PageCount() { }

	// RVA: 0x22BE248 Offset: 0x22BA248 VA: 0x22BE248
	private void Awake() { }

	// RVA: 0x22BE060 Offset: 0x22BA060 VA: 0x22BE060
	private void EnsureRefs() { }

	// RVA: 0x22BE24C Offset: 0x22BA24C VA: 0x22BE24C
	private void OnDisable() { }

	// RVA: 0x22BE2A8 Offset: 0x22BA2A8 VA: 0x22BE2A8 Slot: 4
	public void OnBeginDrag(PointerEventData e) { }

	// RVA: 0x22BE350 Offset: 0x22BA350 VA: 0x22BE350 Slot: 5
	public void OnEndDrag(PointerEventData e) { }

	// RVA: 0x22BE8DC Offset: 0x22BA8DC VA: 0x22BE8DC
	public void RebuildAfterItemsChanged() { }

	// RVA: 0x22BE6B8 Offset: 0x22BA6B8 VA: 0x22BE6B8
	public void GoToPage(int page, bool animated, float duration = -1) { }

	[IteratorStateMachine(typeof(ContinueBottomPager.<Tween>d__30))]
	// RVA: 0x22BEC70 Offset: 0x22BAC70 VA: 0x22BEC70
	private IEnumerator Tween(float target, float d, int page) { }

	// RVA: 0x22BE264 Offset: 0x22BA264 VA: 0x22BE264
	private void StopTween() { }

	// RVA: 0x22BEC40 Offset: 0x22BAC40 VA: 0x22BEC40
	private void Report(int page) { }

	// RVA: 0x22BED28 Offset: 0x22BAD28 VA: 0x22BED28
	public void .ctor() { }
}

