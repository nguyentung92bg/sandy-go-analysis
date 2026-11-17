// Namespace: Dino.BusSand.App.UI
public class CommerceCoinBar : MonoBehaviour // TypeDefIndex: 3428
{
	// Fields
	public int ItemId; // 0x20
	public bool Locked; // 0x24
	private TMP_Text _num; // 0x28
	private Transform _icon; // 0x30
	private Animation _bump; // 0x38
	private long _shown; // 0x40
	private Coroutine _co; // 0x48
	private bool _subscribed; // 0x50

	// Properties
	public Transform FlyTarget { get; }

	// Methods

	// RVA: 0x22A7A74 Offset: 0x22A3A74 VA: 0x22A7A74
	public Transform get_FlyTarget() { }

	// RVA: 0x22A7AF4 Offset: 0x22A3AF4 VA: 0x22A7AF4
	public static CommerceCoinBar Attach(Transform node, int itemId, bool clickable, Action onClick) { }

	// RVA: 0x22A7C18 Offset: 0x22A3C18 VA: 0x22A7C18
	private void Setup(int itemId, bool clickable, Action onClick) { }

	// RVA: 0x22A833C Offset: 0x22A433C VA: 0x22A833C
	private void OnDestroy() { }

	// RVA: 0x22A83E8 Offset: 0x22A43E8 VA: 0x22A83E8
	private void OnItem(int id) { }

	// RVA: 0x22A8240 Offset: 0x22A4240 VA: 0x22A8240
	public void SetImmediate(long v) { }

	// RVA: 0x22A8474 Offset: 0x22A4474 VA: 0x22A8474
	public void AnimateTo(long target, float duration = 0.5) { }

	[IteratorStateMachine(typeof(CommerceCoinBar.<Count>d__16))]
	// RVA: 0x22A86FC Offset: 0x22A46FC VA: 0x22A86FC
	private IEnumerator Count(long from, long to, float duration) { }

	// RVA: 0x22A87B4 Offset: 0x22A47B4 VA: 0x22A87B4
	public void OnFlyArrived() { }

	// RVA: 0x22A8A0C Offset: 0x22A4A0C VA: 0x22A8A0C
	public void .ctor() { }
}

