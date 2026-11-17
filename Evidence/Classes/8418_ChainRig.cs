// Namespace: Dino.BusSand.View
public sealed class ChainRig // TypeDefIndex: 8418
{
	// Fields
	public const float ReelPerSecond = 5;
	public const float DropSeconds = 0.16;
	public const float ReleaseSeconds = 0.35;
	public const float SlotMinScale = 0.35;
	public const float SlotMaxScale = 2.2;
	public const float MaxHinge = 70;
	private readonly StageEngine _e; // 0x10
	private readonly StageLayout _L; // 0x18
	private readonly Func<int, VehicleView> _vehicle; // 0x20
	private readonly Transform _root; // 0x28
	private readonly List<ChainRig.Hitch> _hitches; // 0x30
	private readonly double _gapGrains; // 0x38
	private readonly int _gpc; // 0x40

	// Properties
	public bool Any { get; }

	// Methods

	// RVA: 0x2390CD0 Offset: 0x238CCD0 VA: 0x2390CD0
	public void .ctor(Transform root, StageEngine e, StageLayout L, Func<int, VehicleView> vehicle) { }

	// RVA: 0x23917B8 Offset: 0x238D7B8 VA: 0x23917B8
	public bool get_Any() { }

	// RVA: 0x2391428 Offset: 0x238D428 VA: 0x2391428
	private void BuildHitch(ChainRig.Hitch h) { }

	// RVA: 0x2391808 Offset: 0x238D808 VA: 0x2391808
	private void Lengths(VehicleView a, VehicleView b, out float d1, out float d2) { }

	// RVA: 0x23919E4 Offset: 0x238D9E4 VA: 0x23919E4
	private static float YawOf(Vector3 dir) { }

	// RVA: 0x2391A04 Offset: 0x238DA04 VA: 0x2391A04
	private static Vector3 Flat(Vector3 v) { }

	// RVA: 0x2391A0C Offset: 0x238DA0C VA: 0x2391A0C
	public void OnEscaped(int truckId) { }

	// RVA: 0x23923F8 Offset: 0x238E3F8 VA: 0x23923F8
	public void Release(int chain, Fx fx, MechFx mfx, float cell) { }

	// RVA: 0x2392B7C Offset: 0x238EB7C VA: 0x2392B7C
	private void DropParts(ChainRig.Hitch h, bool burst, Fx fx, float cell) { }

	// RVA: 0x2393560 Offset: 0x238F560 VA: 0x2393560
	public void Tick(float dt, Fx fx, float cell) { }

	// RVA: 0x23937E8 Offset: 0x238F7E8 VA: 0x23937E8
	private void Tow(ChainRig.Hitch h, VehicleView a, VehicleView b, float dt) { }

	// RVA: 0x2394540 Offset: 0x2390540 VA: 0x2394540
	private void OnTrail(ChainRig.Hitch h, VehicleView a, VehicleView b, float d1, float d2, float dt) { }

	// RVA: 0x239505C Offset: 0x239105C VA: 0x239505C
	private static float ChordBack(ChainRig.Hitch h, Vector3 pin, float len, float maxS) { }

	// RVA: 0x2394D78 Offset: 0x2390D78 VA: 0x2394D78
	private static void TrailAt(ChainRig.Hitch h, float s, out Vector3 pos, out float yaw) { }

	// RVA: 0x2394B50 Offset: 0x2390B50 VA: 0x2394B50
	private static void Tug(VehicleView b) { }

	// RVA: 0x2393F44 Offset: 0x238FF44 VA: 0x2393F44
	private void DrawHitch(ChainRig.Hitch h, VehicleView a, VehicleView b) { }
}

