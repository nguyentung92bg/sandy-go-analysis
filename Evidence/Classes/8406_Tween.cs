// Namespace: Dino.BusSand
public sealed class Tween // TypeDefIndex: 8406
{
	// Fields
	[CompilerGenerated]
	private bool <IsActive>k__BackingField; // 0x10
	[CompilerGenerated]
	private bool <IsComplete>k__BackingField; // 0x11
	internal object Owner; // 0x18
	internal float Delay; // 0x20
	internal float Duration; // 0x24
	internal float Elapsed; // 0x28
	internal Ease EaseType; // 0x2C
	internal bool UnscaledTime; // 0x30
	internal Action<float> OnUpdate; // 0x38
	internal Action OnComplete; // 0x40
	internal int Loops; // 0x48
	internal bool PingPong; // 0x4C
	internal int LoopIndex; // 0x50

	// Properties
	public bool IsActive { get; set; }
	public bool IsComplete { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x238BB20 Offset: 0x2387B20 VA: 0x238BB20
	public bool get_IsActive() { }

	[CompilerGenerated]
	// RVA: 0x238BB28 Offset: 0x2387B28 VA: 0x238BB28
	internal void set_IsActive(bool value) { }

	[CompilerGenerated]
	// RVA: 0x238BB30 Offset: 0x2387B30 VA: 0x238BB30
	public bool get_IsComplete() { }

	[CompilerGenerated]
	// RVA: 0x238BB38 Offset: 0x2387B38 VA: 0x238BB38
	internal void set_IsComplete(bool value) { }

	// RVA: 0x238BB40 Offset: 0x2387B40 VA: 0x238BB40
	public Tween SetDelay(float delay) { }

	// RVA: 0x238BB48 Offset: 0x2387B48 VA: 0x238BB48
	public Tween SetEase(Ease e) { }

	// RVA: 0x238BB50 Offset: 0x2387B50 VA: 0x238BB50
	public Tween SetUnscaled(bool unscaled = True) { }

	// RVA: 0x238BB58 Offset: 0x2387B58 VA: 0x238BB58
	public Tween SetOwner(object owner) { }

	// RVA: 0x238BB74 Offset: 0x2387B74 VA: 0x238BB74
	public Tween OnDone(Action cb) { }

	// RVA: 0x238BB90 Offset: 0x2387B90 VA: 0x238BB90
	public Tween SetLoops(int loops, bool pingPong = False) { }

	// RVA: 0x238BB9C Offset: 0x2387B9C VA: 0x238BB9C
	public void Kill(bool complete = False) { }

	// RVA: 0x238BBFC Offset: 0x2387BFC VA: 0x238BBFC
	public static Tween Value(float duration, Action<float> onUpdate) { }

	// RVA: 0x238BDF0 Offset: 0x2387DF0 VA: 0x238BDF0
	public static Tween Float(float from, float to, float duration, Action<float> setter) { }

	// RVA: 0x238BED8 Offset: 0x2387ED8 VA: 0x238BED8
	public static Tween Delayed(float delay, Action callback) { }

	// RVA: 0x238C050 Offset: 0x2388050 VA: 0x238C050
	public static Tween Move(Transform tr, Vector3 to, float duration, bool local = False) { }

	// RVA: 0x238C198 Offset: 0x2388198 VA: 0x238C198
	public static Tween Scale(Transform tr, Vector3 to, float duration) { }

	// RVA: 0x238C2C0 Offset: 0x23882C0 VA: 0x238C2C0
	public static Tween Rotate(Transform tr, Quaternion to, float duration, bool local = False) { }

	// RVA: 0x238C418 Offset: 0x2388418 VA: 0x238C418
	public static Tween Color(Action<Color> setter, Color from, Color to, float duration) { }

	// RVA: 0x238C538 Offset: 0x2388538 VA: 0x238C538
	public static Tween Fade(CanvasGroup g, float to, float duration) { }

	// RVA: 0x238C648 Offset: 0x2388648 VA: 0x238C648
	public static void KillAll(object owner) { }

	// RVA: 0x238BCC8 Offset: 0x2387CC8 VA: 0x238BCC8
	public void .ctor() { }
}

