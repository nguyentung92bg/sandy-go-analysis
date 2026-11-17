// Namespace: Dino.BusSand.View
public sealed class PickUpClaw // TypeDefIndex: 8486
{
	// Fields
	public const float Drop = 0.26;
	public const float Grip = 0.13;
	public const float Hold = 0.39;
	private const float Open = 34;
	private const float Squeeze = -6;
	private const float Held = -3;
	private const float Size = 1.3;
	private const float DropHeight = 9;
	private const float CableStretch = 40;
	private const float FingerPivotY = 0.273;
	private const float TipBelowPivot = 0.96;
	private const float MaxLife = 3;
	private readonly Transform _root; // 0x10
	private readonly Transform[] _fingers; // 0x18
	private readonly float[] _fingerYaw; // 0x20
	private readonly VehicleView _car; // 0x28
	private readonly float _grabY; // 0x30
	private readonly float _yaw; // 0x34
	private float _t; // 0x38
	[CompilerGenerated]
	private bool <Done>k__BackingField; // 0x3C

	// Properties
	public bool Done { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x23DA428 Offset: 0x23D6428 VA: 0x23DA428
	public bool get_Done() { }

	[CompilerGenerated]
	// RVA: 0x23DA430 Offset: 0x23D6430 VA: 0x23DA430
	private void set_Done(bool value) { }

	// RVA: 0x23DA438 Offset: 0x23D6438 VA: 0x23DA438
	private void .ctor(Transform root, VehicleView car) { }

	// RVA: 0x23DAB6C Offset: 0x23D6B6C VA: 0x23DAB6C
	public static PickUpClaw Spawn(GameObject prefab, Transform parent, VehicleView car) { }

	// RVA: 0x23DAD70 Offset: 0x23D6D70 VA: 0x23DAD70
	public void Tick(float dt) { }

	// RVA: 0x23DA860 Offset: 0x23D6860 VA: 0x23DA860
	private void Pose(float t) { }

	// RVA: 0x23DAE4C Offset: 0x23D6E4C VA: 0x23DAE4C
	public void Dispose() { }

	// RVA: 0x23DA76C Offset: 0x23D676C VA: 0x23DA76C
	private static Transform Find(Transform t, string name) { }
}

