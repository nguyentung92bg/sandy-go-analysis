// Namespace: Dino.BusSand.App.Meta
public static class RacingRobotLineup // TypeDefIndex: 4147
{
	// Methods

	// RVA: 0x2260700 Offset: 0x225C700 VA: 0x2260700
	public static List<RacingRobotAgent> Build(int stage, float userScore, RacingStageConfig stageCfg, List<RacingRobotGroupConfig> groups, float userAvgTime, Random rng, out int groupId, float s1 = 0, float s2 = 0, float s3 = 0) { }

	// RVA: 0x2264F58 Offset: 0x2260F58 VA: 0x2264F58
	public static float CalcRobotScore(RacingRobotConfig cfg, float userAvgTime, int totalLevels, float userScore, Random rng) { }

	// RVA: 0x22653C4 Offset: 0x22613C4 VA: 0x22653C4
	private static float RobotAvgTime(RacingRobotConfig cfg, int totalLevels, float userScore, Random rng) { }

	// RVA: 0x22654E4 Offset: 0x22614E4 VA: 0x22654E4
	private static float AvgFormula(string formula, int totalLevels, float userScore, Random rng) { }

	// RVA: 0x2265034 Offset: 0x2261034 VA: 0x2265034
	private static void FillThreatRobots(List<RacingRobotAgent> agents, RacingRobotGroupConfig group, List<int> templates, float userScore, float userAvgTime, RacingStageConfig stageCfg, Random rng, float s1, float s2, float s3) { }

	// RVA: 0x2264A2C Offset: 0x2260A2C VA: 0x2264A2C
	private static bool StageMatches(string csv, int stage) { }

	// RVA: 0x2264AF4 Offset: 0x2260AF4 VA: 0x2264AF4
	private static RacingRobotGroupConfig PickByWeight(List<RacingRobotGroupConfig> groups, Random rng) { }

	// RVA: 0x2264DF0 Offset: 0x2260DF0 VA: 0x2264DF0
	private static List<int> ParseIds(string csv) { }
}

