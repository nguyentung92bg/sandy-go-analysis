// Namespace: Dino.BusSand
[Extension]
public static class Util // TypeDefIndex: 8408
{
	// Methods

	// RVA: -1 Offset: -1
	public static T GetOrAdd<T>(GameObject go) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2958948 Offset: 0x2954948 VA: 0x2958948
	|-Util.GetOrAdd<object>
	*/

	// RVA: 0x238D3BC Offset: 0x23893BC VA: 0x238D3BC
	public static Transform FindDeep(Transform root, string name) { }

	// RVA: 0x238DA08 Offset: 0x2389A08 VA: 0x238DA08
	public static float Damp(float a, float b, float lambda, float dt) { }

	// RVA: 0x238DA58 Offset: 0x2389A58 VA: 0x238DA58
	public static Vector3 Damp(Vector3 a, Vector3 b, float lambda, float dt) { }

	// RVA: 0x238DAE0 Offset: 0x2389AE0 VA: 0x238DAE0
	public static void Spring(ref float x, ref float v, float target, float freq, float damping, float dt) { }

	[Extension]
	// RVA: 0x238DB50 Offset: 0x2389B50 VA: 0x238DB50
	public static Color WithAlpha(Color c, float a) { }

	// RVA: 0x238DB58 Offset: 0x2389B58 VA: 0x238DB58
	public static Material OwnMaterial(TMP_Text t) { }

	// RVA: 0x238DBD8 Offset: 0x2389BD8 VA: 0x238DBD8
	public static void Outline(TMP_Text t, float width = 0.28, float shadow = 0.6) { }
}

