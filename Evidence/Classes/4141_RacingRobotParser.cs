// Namespace: Dino.BusSand.App.Meta
public static class RacingRobotParser // TypeDefIndex: 4141
{
	// Methods

	// RVA: 0x225DD68 Offset: 0x2259D68 VA: 0x225DD68
	public static RacingSpeedParams ParseSpeed(string raw, Random rng) { }

	// RVA: 0x225E364 Offset: 0x225A364 VA: 0x225E364
	public static RacingChaseParams ParseChase(string speedRaw, string failRaw) { }

	// RVA: 0x225E5C8 Offset: 0x225A5C8 VA: 0x225E5C8
	public static List<RacingFailRule> ParseFailRate(string raw) { }

	// RVA: 0x225EAB4 Offset: 0x225AAB4 VA: 0x225EAB4
	public static RacingHangupParams ParseHangup(string raw) { }

	// RVA: 0x225EB60 Offset: 0x225AB60 VA: 0x225EB60
	public static int EvalHangupFormula(string formula, float userScore, Random rng) { }

	// RVA: 0x225EC90 Offset: 0x225AC90 VA: 0x225EC90
	public static float EvalSpeedFormula(string formula, Dictionary<string, double> vars, Random rng) { }

	// RVA: 0x225ECC0 Offset: 0x225ACC0 VA: 0x225ECC0
	public static float EvalChaseOffsetFormula(string formula, Dictionary<string, double> vars, Random rng) { }

	// RVA: 0x225DFC0 Offset: 0x2259FC0 VA: 0x225DFC0
	private static void SplitModeContent(string raw, out string mode, out string content) { }

	// RVA: 0x225E1A8 Offset: 0x225A1A8 VA: 0x225E1A8
	private static bool TryParseRange(string s, out float min, out float max) { }

	// RVA: 0x225E8AC Offset: 0x225A8AC VA: 0x225E8AC
	private static List<string> SplitOuterComma(string s) { }

	// RVA: 0x225E520 Offset: 0x225A520 VA: 0x225E520
	private static int FindOuterComma(string s) { }

	// RVA: 0x225E0DC Offset: 0x225A0DC VA: 0x225E0DC
	private static float ParseFloat(string s, float fallback, Random rng) { }
}

