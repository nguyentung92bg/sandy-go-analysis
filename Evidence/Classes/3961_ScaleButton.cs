// Namespace: Dino.BusSand.App.UI
public class ScaleButton : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IPointerUpHandler, IPointerExitHandler // TypeDefIndex: 3961
{
	// Fields
	public string Sfx; // 0x20
	public float PressScale; // 0x28
	public float PressTime; // 0x2C
	public float ReleaseTime; // 0x30
	public bool Haptic; // 0x34
	private Vector3 _base; // 0x38
	private bool _init; // 0x44
	private bool _down; // 0x45
	private Coroutine _co; // 0x48

	// Methods

	// RVA: 0x22011E8 Offset: 0x21FD1E8 VA: 0x22011E8
	private void Awake() { }

	// RVA: 0x2201220 Offset: 0x21FD220 VA: 0x2201220 Slot: 4
	public void OnPointerDown(PointerEventData e) { }

	// RVA: 0x22013C0 Offset: 0x21FD3C0 VA: 0x22013C0 Slot: 5
	public void OnPointerUp(PointerEventData e) { }

	// RVA: 0x22013F0 Offset: 0x21FD3F0 VA: 0x22013F0 Slot: 6
	public void OnPointerExit(PointerEventData e) { }

	// RVA: 0x22013D8 Offset: 0x21FD3D8 VA: 0x22013D8
	private void Release() { }

	// RVA: 0x2201310 Offset: 0x21FD310 VA: 0x2201310
	private void Go(bool release) { }

	[IteratorStateMachine(typeof(ScaleButton.<Press>d__15))]
	// RVA: 0x2201408 Offset: 0x21FD408 VA: 0x2201408
	private IEnumerator Press() { }

	[IteratorStateMachine(typeof(ScaleButton.<Spring>d__16))]
	// RVA: 0x2201474 Offset: 0x21FD474 VA: 0x2201474
	private IEnumerator Spring() { }

	// RVA: 0x2201530 Offset: 0x21FD530 VA: 0x2201530
	private void OnDisable() { }

	// RVA: 0x2201570 Offset: 0x21FD570 VA: 0x2201570
	public void .ctor() { }
}

